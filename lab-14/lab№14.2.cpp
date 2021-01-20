#include <iostream>
using namespace std;
int main() {
	int A, B;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	for (A; A - B > B; A -= B) {
	}
	cout << A - B;
}
