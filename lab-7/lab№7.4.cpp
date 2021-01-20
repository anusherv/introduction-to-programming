#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float V1, V2, T, S;
	cout << "V1=";
	cin >> V1;
	cout << "V2=";
	cin >> V2;
	cout << "S=";
	cin >> S;
	cout << "T=";
	cin >> T;
	cout << "расстояние = " << V1 * T + V2 * T + S << " км";
}
