/*4.​  Разработать программу, которая выводит на экран горизонтальную или
вертикальную линию из символов.Число символов, какой будет символ, и какая будет линия – 
вертикальная или горизонтальная – указывает пользователь.*/


#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	int choice, count;
	char symbol;
	do {
		cout << "Введите количество символов" << endl;
		cin >> count;
	} while (count < 0);	
	cout << "Введите символ" << endl;
	cin >> symbol;
	do {
		cout << "Сделайте выбор:\n" << "1-Горизонтальная линия\n" << "2-Вертикальная линия\n";
		cin >> choice;
	} while (choice != 1 && choice != 2);
	switch (choice)
	{
	case 1: for (int i=0; i<count;i++) cout << symbol ; break;
	case 2: for (int i = 0; i<count; i++) cout << symbol << endl; break;
	}
	cout << endl;
	system("pause");
	return 0;
	
}
