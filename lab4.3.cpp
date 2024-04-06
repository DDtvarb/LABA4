#include <iostream>
using namespace std;

double F(double x, int n) {
	if (n == 0) {
		return 1;
	}
	else if (n > 0 && n % 2 == 0) {
		double temp = F(x, n / 2);
		return temp * temp;
	}
	else if (n > 0 && n % 2 != 0) {
		return x * F(x, n - 1);
	}
	else {
		return 1 / F(x, -n);
	}
}

int main() {
	setlocale(LC_ALL, "Ru");
	double x;
	cout << "Введите значение X " << endl;
	cin >> x;
	if (cin.fail()) {
		cout << "Введите корректное значение X" << endl << endl;
		exit(0);
	}
	
	int n;
	cout << "Введите значение степени " << endl;
	cin >> n;
	if (cin.fail()) {
		cout << "Введите корректное значение степени" << endl << endl;
		exit(0);
	}

	double result = F(x, n);
	cout << x << " ^ " << n << " = " << result << endl;
	

	
}
