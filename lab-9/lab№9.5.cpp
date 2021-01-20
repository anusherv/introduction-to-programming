#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "A=";
	cin >> A;
	if (A % 100 == 0) {
		cout << "столетие= " << A / 100;
	}
	else {
		cout << "столетие= " << A / 100 + 1;
	}
}
