#include <iostream>
using namespace std;
int main() {
	int N, A, B, i, c;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "N=";
	cin >> N;
	int *a = new int[N];
	a[0] = A;
	cout << a[0] << " ";
	a[1] = B;
	cout << a[1] << " ";
	c = a[0] + a[1];
	a[2] = c;
	cout << a[2] << " ";
	for (i = 3; i < N; i++) {
		c *= 2;
		a[i] = c;
		cout << a[i] << " ";
	}
}
