#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double h1, h2, m1, m2, x1, x2, inter;
	char col;

	cout << "Введите первый момент времени" << endl;
	cin >> h1 >> col >> m1;
	cout << "Введите второй момент времени" << endl;
	cin >> h2 >> col >> m2;

	x1 = h1 * 60 + m1;
	x2 = h2 * 60 + m2;
	inter = x1 - x2;

	if (inter <= 0) {
		cout << "Встреча состоится" << endl;
	}
	else {
		cout << "Встреча не состоится" << endl;
	}
}
