#include <iostream>
using namespace std;
int main() {
	int A, B, i;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	for (A; A <= B; A++) {
		cout << endl;
		for (i = 0; i != A; i++) {
			cout << A <<" ";
		}
	}
}
