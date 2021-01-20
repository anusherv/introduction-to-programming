#include <iostream>
using namespace std;
int main() {
	int N, c=1, i;
	cout << "N=";
	cin >> N;
	int *a = new int[N];
	for (i = 0; i < N; i++) {
		a[i] = c;
		cout << a[i] << " ";
		c += 2;
	}
}
