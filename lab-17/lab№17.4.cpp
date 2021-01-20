#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, m;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (i = 1; i < N-1; i+=1) {
		if (a[i-1] < a[i] > a[i+1])
			m = i;
	}
	cout << "номер последнего локального максимума=" << m+1;
}
