#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "A=";
	cin >> A;
	bool Apos = A > 0;
	bool Amod = A % 2 == 0;
	if (A == 0) {
		cout << "нулевое число";
	}
	else switch (Apos)
	{
		case 1:
			switch (Amod)
			{
			case 1:
				cout << "положительное четное число";
				break;
			case 0:
				cout << "положительное нечетное число";
				break;
			}
			break;
		case 0:
			switch (Amod)
			{
			case 1:
				cout << "отрицательное четное число";
				break;
			case 0:
				cout << "отрицательное нечетное число";
				break;
			}
			break;
	}
}
