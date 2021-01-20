#include <iostream>
using namespace std;
int main() {
	float A1, B1, C1, A2, B2, C2, y, x;
	cout << "A1=";
	cin >> A1;
	cout << "B1=";
	cin >> B1;
	cout << "C1=";
	cin >> C1;
	cout << "A2=";
	cin >> A2;
	cout << "B2=";
	cin >> B2;
	cout << "C2=";
	cin >> C2;
	y = (C2 * A1 - A2 * C1) / (A1 * B2 - B1 * A2);
	x = (C1 - B1 * y) / A1;
	cout << "x=" << x << endl;
	cout << "y=" << y;
}
