#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double  a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "sum=" << abs (a) + abs (b) << endl;
    cout << "difference=" << abs(a) - abs(b) << endl;
	cout << "composition=" << abs(a) * abs(b) << endl;
	cout << "quotient=" << abs(a) / abs(b);
}
