#include <iostream>
#include <cmath>
using namespace std;
int main() {
setlocale(LC_ALL, "Russian");
float A,x=1;
int N,c;
cout << "A=";
cin >> A;
cout << "N=";
cin >> N;
	for (c = 1; c <= N; c+=1) {
		x += pow(A, c) * pow(-1, c);
	}
cout << x;
}
