
//1.	 Найти произведение всех целых нечетных чисел в диапазоне, указанном пользователем.

#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int a, b, product = 1;
	do {
		cout << "Введите начало диапазона ";
		cin >> a;
		cout << "Введите конец диапазона ";
		cin >> b;
		if (a > b) cout << "Диапазон неверный, повторите ввод"<< endl;
	} while (a > b);
	
	for (; a <= b; a++)	if (a % 2 == 0) product *= a;
	
	cout << "Произведение четных чисел равно: " << product << endl;

	system("pause");
}
