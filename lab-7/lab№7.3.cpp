#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float A, X, Y;
	cout << "A=";
	cin >> A;
	cout << "X=";
	cin >> X;
	cout << "Y=";
	cin >> Y;
	cout << "1 кг конфет стоит " << A / X << " рублей" <<endl;
	cout << "Y кг конфет стоит " << A / X * Y << " рублей";
}
