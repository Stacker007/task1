/* 6.​ Пользователь вводит с клавиатуры целое неотрицательное число. Программа должна определить:

a)​ сколько в данном числе цифр;

b)​ сумму цифр;

c)​ вывести цифры числа в обратном порядке*/


#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int num, sumOfDigit=0, countOfDigit=1;
	do {
		cout << "Введите число" << endl;
		cin >> num;
	} while (num < 0);		
	
	while (num>0) {		
		cout << num % 10;
		sumOfDigit += num % 10;
		num /= 10;
		countOfDigit++;		
	}
	cout << endl << "Сумма цифр равна " << sumOfDigit << endl;
	cout <<  "Количество цифр равно " << countOfDigit << endl;

	system("pause");
	return 0;	
}
