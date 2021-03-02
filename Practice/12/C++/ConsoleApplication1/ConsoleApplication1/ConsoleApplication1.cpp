
#include <iostream>
#include <cmath>
using namespace std;
int func(int x)
{
	if (x == 1) { return x; }
	x = x * func(x - 1);
}
int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	if (a > 11)
	{
		cout << "Число слишком большое" << endl;
	}
	else if (a == 0)
	{
		cout << "1";
	}
	else
	{
		cout << func(a);
	}
	return 0;
}