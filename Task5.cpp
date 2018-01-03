/* 5.​ Найти максимум из n чисел, которые последовательно вводятся с 
клавиатуры. Программа сначала запрашивает количество чисел (n), а потом сами числа.*/


#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int count, max;	
	do {
		cout << "Введите количество чисел" << endl;
		cin >> count;
	} while (count < 1);		
	cout << "Введите число №1 " << endl;
	cin >> max;
	for (int i = 2, tmp; i <= count; i++) {		
		cout << "Введите число №" << i << " " << endl;
		cin >> tmp;
		if (tmp > max) max = tmp;
	}
	
	cout << "Максимальное число: " << max << endl;
	system("pause");
	return 0;	
}
