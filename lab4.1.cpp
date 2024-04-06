#include <iostream>
using namespace std;

int sumrange(int a, int b) {
	if (a > b) {
		return 0;
	}

	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}

	return sum;
}

int main() {
	setlocale(LC_ALL, "Ru");
	
	int a, b, c;
	cout << "Введите A,B,C ";
	cin >> a >> b >> c;
	if (cin.fail()) {
		cout << "Введите корректное значение" << endl << endl;
		exit(0);
	}

	int sum1 = sumrange(a, b);
	int sum2 = sumrange(b, c);

	cout << "Cумма A и B: " << sum1 << endl;
	cout << "Сумма B и С: " << sum2 << endl;

	
}
