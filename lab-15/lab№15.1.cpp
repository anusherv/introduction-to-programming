#include <iostream>
using namespace std;
int PowerA3(float A) {
	float B;
	B = A * A * A;
	return B;
}
int main() {
	setlocale(LC_ALL, "Russian");
	float A;
	int i;
	for (i = 0; i < 5; i++) {
		cout << "введите значение";
		cin >> A;
		cout << "B=" << PowerA3(A) << endl;
	}
}
