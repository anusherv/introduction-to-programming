#include <iostream>
using namespace std;
int main() {
	int  A, t, t1;
	cout << "A=";
	cin >> A;
	t = A * A; 
	t1 = A * t; 
	A = t1 * t1;
	A = A * A;
	cout << "y=" << A * t1;
}
