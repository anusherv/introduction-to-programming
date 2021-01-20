#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	cout << "количество квадратов=" << (A / C) * (B / C) << endl;
	cout << "S=" << A * B - C * C * (A / C) * (B / C);
}
