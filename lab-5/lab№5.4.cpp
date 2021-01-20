#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int  x1, x2, y1, y2;
	cout << "x1=";
	cin >> x1;
	cout << "y1=";
	cin >> y1;
	cout << "x2=";
	cin >> x2;
	cout << "y2=";
	cin >> y2;
	cout << "P=" << abs ((y2 - y1) + abs (x2 - x1)) * 2 << endl;
	cout << "S=" << abs((y2 - y1) * abs(x2 - x1));
}
