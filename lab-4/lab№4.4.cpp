#include <iostream>
using namespace std;
int main() {
	double  a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "sum=" << a *a + b * b << endl;
  cout << "difference=" << a * a - b * b << endl;
	cout << "composition=" << a * a * b * b << endl;
	cout << "quotient=" << a * a / (b * b);
}
