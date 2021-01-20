#include <iostream>
using namespace std;
int main() {
	int  A, t;
	cout << "A=";
	cin >> A;
	t = A * A; // переменную t можно не использовать, заменив строку на "A = A * A"
	A = t * t; // переменную t можно не использовать, заменив строку на "A = A * A"
	cout << "y=" << A * A;
}
