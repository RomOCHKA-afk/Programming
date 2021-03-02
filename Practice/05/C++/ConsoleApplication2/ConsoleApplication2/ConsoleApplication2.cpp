#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double x, x0, v0, t, g = 9.8;
	cin >> x0 >> v0 >> t;
	x = v0 * t - (g * t * t / 2);

	cout << "Расстояние, которое объект преодолел за " << t << " с, " << abs(x) << endl;

	system("pause");
	return(0);
}