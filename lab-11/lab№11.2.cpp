#include <iostream>
using namespace std;
int main() {
	int A, B, C;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	if ((A < B) && (A < C)) {
		cout << B+C;
	}
	else if ((B < A) && (B < C)) {
		cout << A + C;
	}
	else if ((C < A) && (C < B)) {
		cout << A + B;
	}
}
