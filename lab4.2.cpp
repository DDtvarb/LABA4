#include <iostream>
using namespace std;

void sdvig(int& a, int& b, int& c) {
	int temp = c;
	c = b;
	b = a;
	a = temp;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a1, b1, c1, a2, b2, c2;
	cout << "Введите a1, b1, c1, a2, b2, c2";
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	if (cin.fail()) {
		cout << "Введите корректное значение" << endl << endl;
		exit(0);
	}


	sdvig(a1, b1, c1);
	sdvig(a2, b2, c2);

	cout << "1ый набор после циклического сдвига: " << a1 << " " << b1 << " " << c1 << endl;
	cout << "2ой набор после циклического сдвига: " << a2 << " " << b2 << " " << c2 << endl;

	
}

