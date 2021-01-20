#include <iostream>
using namespace std;
int Sign(float X) {
	if (X < 0)
		return (-1);
	if (X == 0)
		return (0);
	if (X > 0)
		return (1);
}
int main() {
	float X;
	cout << "X=";
	cin >> X;
	cout << Sign(X);
}
