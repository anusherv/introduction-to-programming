#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i, K, L;
	float c=0;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	cout << "K=";
	cin >> K;
	cout << "L=";
	cin >> L;
	for (i=K-1; i <= L-1; i++) {
		c += a[i];
	}
	cout << "среднее арифметическое=" << c / (L - K + 1);
}
