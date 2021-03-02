#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char n;
	int a, b, r;
	cin >> a >> n >> b;
	switch (n)
	{
	case '+':
	{
		r = a + b;
		cout << r;
	}
	break;
	case '-':
	{
		r = a - b;
		cout << r;
	}
	break;
	case '*':
	{
		r = a * b;
		cout << r;
	}
	break;
	case'/':
		if (b == 0)
			cout << "Некорректный ввод";
		{
			r = a / b;
			cout << r;
		}
		break;
	}
	return 0;
}