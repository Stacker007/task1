/*2.​ Построить таблицу значений функции y(x).Границы 
диапазона и шаг табуляции запросить у пользователя.*/

#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	double low, high, dx, x, y;
	cout << "Введите нижнюю границу диапазона: ";
	cin >> low;
	cout << "Введите вернюю границу диапазона: ";
	cin >> high;
	cout << "Введите шаг табуляции: ";
	cin >> dx;
	printf("----------------------\n");
	printf("|    x    |     Y    |\n");
	printf("----------------------\n");
	for (x = low; x < high + dx; x = x + dx) {
		if (x <= -4) y = 2;
		if (x > -4 && x <= 2)y = -1.*x / 2;
		if (x > 2) y = x - 3;
		printf("|%7.2f  |%7.3f   |\n", x, y);
	}
	printf("----------------------\n");
	system("pause");
}
