#include <iostream>
using namespace std;
int main() {
	int N, K, i, s=0;
	cout << "N=";
	cin >> N;
	for (K = 0; s < N; K++) {
		s = K;
		i = 1;
		for (s; K > i; i++) {
			s += i;
		}
	}
	cout << "K=" << K << endl << "sum=" << s;
}
