#include <iostream>
using namespace std;
float Fact2(int N) {
	int i;
	int x = N;
	if (N % 2 == 1) {
		for (i = 1; i != x; i += 2) {
			N *= i;
		}
	}
	if (N % 2 == 0) {
		for (i = 2; i != x; i += 2) {
			N *= i;
		}
	}
return N;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "N=";
	cin >> N;
	cout << Fact2(N);
}
