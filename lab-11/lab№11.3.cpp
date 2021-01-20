#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int xA, xB, xC, yA, yB, yC;
	cout << "xA=";
	cin >> xA;
	cout << "yA=";
	cin >> yA;
	cout << "xB=";
	cin >> xB;
	cout << "yB=";
	cin >> yB;
	cout << "xC=";
	cin >> xC;
	cout << "yC=";
	cin >> yC;	
	if (sqrt(pow((xA - xB), 2) + pow((yA - yB), 2)) > sqrt(pow((xA - xC), 2) + pow((yA - yC), 2))) {
		cout << sqrt(pow((xA - xB), 2) + pow((yA - yB), 2));
	}
	else  {
		cout << sqrt(pow((xA - xC), 2) + pow((yA - yC), 2));
	}
}
