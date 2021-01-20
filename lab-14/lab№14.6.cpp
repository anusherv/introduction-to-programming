#include <iostream>
using namespace std;
int main() {
	int N, K=1, a0=0, a1=1, z;
	cout << "N=";
	cin >> N;
	while (a1 <= N) {
		z = a1;
		a1 += a0;
		a0 = z;
		K++;
	}
	cout << "K=" << K;
}
