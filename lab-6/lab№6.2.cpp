#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int  A, B, C, t;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	t = A;
	A = C;
	C = B;
	B = t;
	cout << "A=" << A << " " << "B=" << B << " " << "C=" << C;
}
