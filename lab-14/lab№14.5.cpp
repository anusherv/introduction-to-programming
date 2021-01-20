#include <iostream>
using namespace std;
int main() {
	int A, B;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	while (A != 0 and B != 0) {
		if (A > B)
			A = A % B;
		else
			B = B % A;
	}
	cout << A + B;
}
