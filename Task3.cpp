#include <iostream>
#include <cmath>
using namespace std;

int main (){
	setlocale (LC_ALL, "rus");
	
	int a,b;
	cout<< "Введите два целых числа " ;
	cin >> a>> b;
	a=abs(a);
	b=abs(b);
	cout << "Эти числа делятся без остатка на следующие числа: "<< endl;
	
	for (int i=1; i<=b && i<=a; i++) 	if (a%i==0 && b%i==0) cout << i<< endl;

return 0;
		
}
