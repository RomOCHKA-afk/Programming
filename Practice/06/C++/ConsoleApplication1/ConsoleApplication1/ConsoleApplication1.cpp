
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c, x;
	cout << "Введите значение a:";
	cin >> a;
	cout << "Введите значение b:";
	cin >> b;
	cout << "Введите значение c:";
	cin >> c;
	if ((b * b - 4 * a * c >= 0)) //Если дискриминант больше или равен нулю
	{
		x = (-1 * b + sqrt(b * b - 4 * a * c)) / 2 * a;
		cout << "Первый корень равен:" << x << endl;
		x = (-1 * b - sqrt(b * b - 4 * a * c)) / 2 * a;
		cout << "Второй корень равен:" << x << endl;

	}
	else {
		cout << "Дискриминант меньше нуля" << endl;
	}
	return 0;
}