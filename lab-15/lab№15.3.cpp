#include <iostream>
using namespace std;
float rings(float R1, float R2){
	float s;
	s = 3.14 * R1 * R1 - 3.14 * R2 * R2;
	return s;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int i;
	float R1, R2;
	for (i = 0; i < 3; i++) {
		cout << "R1=";
		cin >> R1;
		cout << "R2=";
		cin >> R2;
		cout << "площадь кольца="<< rings(R1, R2) << endl;
	}
}
