// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int random(int MIN, int MAX) {
	int k = MAX - MIN + 1;
	return MIN + rand() % k;
}

int main()
{
	//Task 1
	const int size1 = 5;
	int number1[size1] = {};
	for (int i = 0; i < size1; i++) {
		cout << "Enter number #" << i + 1 << ": ";
		cin >> number1[i];
	}
	for (int i = size1 - 1; i >= 0; i--) {
		cout << number1[i] << endl;
	}
	cout << endl;

	//Task 2
	const int size2 = 20;
	int number2[size2] = {};
	srand(time(NULL));
	rand();
	for (int i = 0; i < size2; i++) {
		number2[i] = rand();
		if (i % 2 == 0) {
			cout << number2[i] << endl;
		}
	}
	cout << endl;

	//Task 3
	const int size3 = 10;
	int number3[size3] = {}, n = 0, sum = 0;
	while (true) {
		srand(time(NULL));
		for (int i = 0; i < size3; i++) {
			number3[i] = random(-10, 10);
			if (number3[i] > 0) {
				n++;
				sum += number3[i];
			}
		}
		break;
	}
	cout << "Quantity = " << n << "\nSum = " << sum << "\nAverage = " << (double)sum / n << "\n\n";

	//Task 4
	const int size4 = 100;
	int symbol[size4] = {}, letter = 0, num = 0, symb = 0;
	while (true) {
		srand(time(0));
		for (int i = 0; i < size4; i++) {
			symbol[i] = random(0, 127);
			if (symbol[i] >= 48 && symbol[i] <= 57) {
				num++;
				cout << (char)symbol[i] << ", ";
			}
			else if ((symbol[i] >= 65 && symbol[i] <= 90) || (symbol[i] >= 97 && symbol[i] <= 122)) {
				letter++;
				cout << (char)symbol[i] << ", ";
			}
			else {
				symb++;
				cout << (char)symbol[i] << ", ";
			}
		}
		break;
	}
	cout << endl;
	cout << "Letters are " << letter << "%\nNumbers are " << num << "%\nSymbols are " << symb << "%\n\n";

	//Task 5
	const int size5 = 100;
	int number5[size5] = {}, num5, c = 0;
	cin >> num5;
	while (true) {
		srand(time(NULL));
		for (int i = 0; i < size5; i++) {
			number5[i] = rand();
			if (number5[i] == num5) {
				c++;
			}
		}
		break;
	}
	cout << "Number repeats " << c << " times" << "\n\n";

	//Task 6
	const int size6 = 20;
	int number6[size6] = {}, count, summa = 0;
	while (true) {
		srand(time(NULL));
		for (int i = 0; i < size6; i++) {
			number6[i] = random(-10, 30);
			if (number6[i] < 0) {
				count = i;
				break;
			}
		}
		for (int i = count; i < size6; i++) {
			number6[i] = random(-10, 30);
			summa += number6[i];
		}
		break;
	}
	cout << "Sum after first negative number is equal to " << summa << "\n\n";

	//Task 7
	const int size7 = 20;
	int number7[size7] = {}, max = 0, min, max_i, min_i;
	while (true) {
		srand(time(NULL));
		for (int i = 0; i < size7; i++) {
			number7[i] = rand();
			cout << number7[i] << " ";
			if (number7[i] > max) {
				max = number7[i];
				max_i = i;
			}
		}
		min = max;
		for (int i = 0; i < size7; i++) {
			if (number7[i] < min) {
				min = number7[i];
				min_i = i;
			}
		}
		break;
	}
	cout << endl;
	cout << max << " #" << max_i + 1 << endl << min << " #" << min_i + 1 << "\n\n";

	//Task 8
	const int size8 = 100;
	double number8[size8] = {};
	int counter = 0;
	while (true) {
		srand(time(NULL));
		for (int i = 0; i < size8; i++) {
			number8[i] = round(rand() / (double)RAND_MAX * 10000) / 10;
			if (number8[i] - (int)number8[i] == 0) {
				counter++;
			}
		}
		break;
	}
	cout << counter << "% of numbers don`t have a fractional part\n\n";

	//Task 9
	const int size9 = 200;
	int number9[size9] = {}, o = 0, t = 0, th = 0;
	while (true) {
		srand(time(NULL));
		for (int i = 0; i < size9; i++) {
			number9[i] = random(0, 200);
			if (number9[i] / 10 == 0) {
				o++;
			}
			else if (number9[i] / 10 > 0 && number9[i] / 10 < 10) {
				t++;
			}
			else {
				th++;
			}
		}
		break;
	}
	cout << "Single-digit numbers: " << o / 2.0 << "%" << endl;
	cout << "Double-digit numbers: " << t / 2.0 << "%" << endl;
	cout << "Three-digit numbers: " << th / 2.0 << "%" << endl;
}
