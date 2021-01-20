#include <iostream>
using namespace std;
int main() {
	int A;
	cout << "A=";
	cin >> A;
	cout << "otvet=" << (A / 10) % 10 << A % 10 << (A / 100) % 10;
}
