#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, j;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (i = 0; i < N-1; i+=1) {
		j = i + 1;
		for (j; j < N; j++) {
			if (a[i] == a[j]) {
				cout << i +1 << " " << j + 1;
				break;
			}
		}
	if (a[i] == a[j]) {
		break;
	}
	}
}
