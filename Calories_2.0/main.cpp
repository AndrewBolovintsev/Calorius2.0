#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	double calories;
	int start;
	double weight;
	double height;
	int age;
	int gender;
	int activity;
	int finish;

m4:	cout << "��� ��������� �������� ��� ������� ��������. ���� �� ������ ������ ������� - 1, ���� ������� ������� - 0: " << endl;
	cin >> start;

	if (!cin) {
		cout << "�� ��������. ��-�������� ��� ���." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m4;
	}

	if (start == 0)
	{
		goto m1;
	}

	if (start != 1 && start != 0)
	{
		cout << "�� ��������. ��-�������� ��� ���." << endl;
		goto m4;
	}

m5:	cout << "������� ��� ���: ";
	cin >> weight;

	if (!cin) {
		cout << "�� ��������. ��-�������� ��� ���." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m5;
	}

m6:	cout << "������� ��� ����: ";
	cin >> height;

	if (!cin) {
		cout << "�� ��������. ��-�������� ��� ���." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m6;
	}

m7:	cout << "������� ��� �������: ";
	cin >> age;

	if (!cin) {
		cout << "�� ��������. ��-�������� ��� ���." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m7;
	}

	calories = (weight * 10) + (height * 6.25) - (age * 5);

m2:	cout << "���� �� �������� ���� ������� - 1, ���� �� �������� ���� ������� - 2." << endl;
	cin >> gender;

	if (!cin) {
		cout << "�� ��������. ��-�������� ��� ���." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m2;
	}

	switch (gender)
	{
	case 1:
		calories - 161;
		break;
	case 2:
		calories + 5;
		break;
	default:
		cout << "�� ����� �� ��������� ������, ���������� ��� ���." << endl;
		goto m2;
	}

	calories;

m3:	cout << "������� - 1, ���� ���� ���������� �������� ����������� ��� �����������" << endl;
	cout << "������� - 2, ���� ���� ���������� ������� ������� 3 ���� � ������" << endl;
	cout << "������� - 3, ���� ���� ���������� ������� ������� 5 ���� � ������" << endl;
	cout << "������� - 4, ���� � ��� ����������� ���������� 5 ��� ������" << endl;
	cout << "������� - 5, ���� ���� ���������� ������ ����" << endl;
	cout << "������� - 6, ���� � ��� ����������� ���������� ������ ���� ��� �� 2 ���� � ����" << endl;
	cout << "������� - 7, ���� � ��� ���������� ���������� ������� + ���������� ������" << endl;
	cin >> activity;

	if (!cin) {
		cout << "�� ��������. ��-�������� ��� ���." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m3;
	}

	switch (activity)
	{
	case 1:
		calories * 1.2;
		break;
	case 2:
		calories * 1.38;
		break;
	case 3:
		calories * 1.46;
		break;
	case 4:
		calories * 1.55;
		break;
	case 5:
		calories * 1.64;
		break;
	case 6:
		calories * 1.73;
		break;
	case 7:
		calories * 1.9;
		break;
	default:
		cout << "�� ����� �� ��������� ������, ���������� ��� ���." << endl;
		goto m3;
	}
	
	calories;

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "���� ������� ����� ��������: " << calories << endl;

m9:	cout << "���� �� ������ ���������� ������� - 1, ���� ������� ������� - 0: " << endl;
	cin >> finish;

	if (!cin) {
		cout << "�� ��������. ��-�������� ��� ���." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m9;
	}

	if (finish == 1)
	{
		goto m4;
	}
	else if (finish == 0)
	{
		goto m1;
	}

	if (finish != 1 && finish != 0)
	{
		cout << "�� ����� �� ��������� ������, ���������� ��� ���." << endl;
		goto m9;
	}

m1:	return 0;
}