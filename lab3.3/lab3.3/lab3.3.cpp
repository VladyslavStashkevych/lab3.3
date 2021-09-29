#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, R;

	// Вводимо значення змінних х та R
	cout << "Enter x: "; cin >> x;
	cout << "\nEnter R: "; cin >> R;

	// Розгалуження в повній формі
	if (x < -1) y = 1 - x;
	else if (x <= 1) y = 0;
	else if (x < 1 + 2 * R) y = sqrt(pow(R, 2) - pow((x - 1 - R), 2));
	else y = (x - 2 * R - 1) / (2 * R - 6);

	// Виводимо значення у
	cout << "\nResult: " << y << "\n\n";
	
	system("pause");
	return 0;
}