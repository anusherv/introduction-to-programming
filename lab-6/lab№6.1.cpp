#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int  A, B, t;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	t = A;
	A = B;
	B = t;
	cout << "A=" << A << " " << "B=" << B;
}
