#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int  x1, x2, y1, y2, x3, y3;
	float p, a, b, c;
	cout << "x1=";
	cin >> x1;
	cout << "y1=";
	cin >> y1;
	cout << "x2=";
	cin >> x2;
	cout << "y2=";
	cin >> y2;
	cout << "x3=";
	cin >> x3;
	cout << "y3=";
	cin >> y3;
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	p = (a + b + c) / 2;
	cout << "P=" << p*2 << endl;
	cout << "S=" << sqrt(p * (p - a) * (p - b) * (p - c));
}
