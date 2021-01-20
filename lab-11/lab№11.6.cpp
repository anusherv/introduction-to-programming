#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "A=";
	cin >> A;
	bool Amod = A % 2 == 0;
	if (A < 10) {
		switch (Amod) {
		case 0:
			cout << "нечетное однозначное число";
			break;
		case 1:
			cout << "четное однозначное число";
			break;
		}
	}
	else if (A > 99) {
		switch (Amod) {
		case 0:
			cout << "нечетное трехзначное число";
			break;
		case 1:
			cout << "четное трехзначное число";
			break;
		}
	}
	else {
		switch (Amod) {
		case 0:
			cout << "нечетное двухзначное число";
			break;
		case 1:
			cout << "четное двухзначное число";
			break;
		}
	}
}
