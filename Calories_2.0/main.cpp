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

m4:	cout << "Это программа созданно для расчёта каллорий. Если вы хотите начать нажмите - 1, если закрыть нажмите - 0: " << endl;
	cin >> start;

	if (!cin) {
		cout << "Вы ошиблись. По-пробуйте ещё раз." << endl;
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
		cout << "Вы ошиблись. По-пробуйте ещё раз." << endl;
		goto m4;
	}

m5:	cout << "Введите ваш вес: ";
	cin >> weight;

	if (!cin) {
		cout << "Вы ошиблись. По-пробуйте ещё раз." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m5;
	}

m6:	cout << "Введите ваш рост: ";
	cin >> height;

	if (!cin) {
		cout << "Вы ошиблись. По-пробуйте ещё раз." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m6;
	}

m7:	cout << "Введите ваш возраст: ";
	cin >> age;

	if (!cin) {
		cout << "Вы ошиблись. По-пробуйте ещё раз." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		goto m7;
	}

	calories = (weight * 10) + (height * 6.25) - (age * 5);

m2:	cout << "Если вы женского пола нажмите - 1, если вы мужского пола нажмите - 2." << endl;
	cin >> gender;

	if (!cin) {
		cout << "Вы ошиблись. По-пробуйте ещё раз." << endl;
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
		cout << "Вы ввели не коректные данные, попробуйте ещё раз." << endl;
		goto m2;
	}

	calories;

m3:	cout << "Нажмите - 1, если ваша физическая нагрузка отсутствует или минимальная" << endl;
	cout << "Нажмите - 2, если ваши тренировки средней тяжести 3 раза в неделю" << endl;
	cout << "Нажмите - 3, если ваши тренировки средней тяжести 5 раза в неделю" << endl;
	cout << "Нажмите - 4, если у вас интенсивные тренировки 5 раз неделю" << endl;
	cout << "Нажмите - 5, если ваши тренировки каждый день" << endl;
	cout << "Нажмите - 6, если у вас интенсивные тренировки каждый день или по 2 раза в день" << endl;
	cout << "Нажмите - 7, если у вас ежедневные физические нагузки + физическая работа" << endl;
	cin >> activity;

	if (!cin) {
		cout << "Вы ошиблись. По-пробуйте ещё раз." << endl;
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
		cout << "Вы ввели не коректные данные, попробуйте ещё раз." << endl;
		goto m3;
	}
	
	calories;

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Ваша дневная норма каллорий: " << calories << endl;

m9:	cout << "Если вы хотите продолжить нажмите - 1, если закрыть нажмите - 0: " << endl;
	cin >> finish;

	if (!cin) {
		cout << "Вы ошиблись. По-пробуйте ещё раз." << endl;
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
		cout << "Вы ввели не коректные данные, попробуйте ещё раз." << endl;
		goto m9;
	}

m1:	return 0;
}