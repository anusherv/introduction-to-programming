#include <iostream>
using namespace std;
int Quarter(float x, float y) {
	if (x > 0 && y > 0)
		return 1;
	if (x < 0 && y > 0)
		return 2;
	if (x < 0 && y < 0)
		return 3;
	if (x > 0 && y < 0)
		return 4;
}
int main() {
	setlocale(LC_ALL, "Russian");
	float x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << Quarter(x, y)<< "четверть";
}
