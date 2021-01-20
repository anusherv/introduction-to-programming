#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int N, A, D, i;
	cout << "A=";
	cin >> A;
	cout << "D=";
	cin >> D;
	cout << "N=";
	cin >> N;
	int *a = new int[N];
	for (i = 0; i < N; i++) {
		a[i] = A * pow(D, i);
		cout << a[i] << " ";
	}
}
