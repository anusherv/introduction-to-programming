#include <iostream>
using namespace std;
int main() {
	int P, K = 0;
	float S = 1000;
	cout << "P=";
	cin >> P;
	for (K; S < 1100; K++) {
		S += S * P / 100;
	}
	cout << "K=" << K << endl << "S=" << S;
}
