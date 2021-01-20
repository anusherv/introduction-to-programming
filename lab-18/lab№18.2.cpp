#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, i;
	float x;
	cout << "N=";
	cin >> N;
	cout << "введите элементы массива A" << endl;
	int* a = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	float* b = new float[N];
	x = a[0];
	b[0] = x;
	for (i = 1; i < N; i++) {	
		x = (x + a[i]);
		b[i] = x / (i + 1);
	}
	cout << endl << "элементы массива B: ";
	for (i = 0; i < N; i++) {
		cout << b[i] << " ";
	}
}
