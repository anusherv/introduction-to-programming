#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "Russian");
float c,x=1;
int N;
cout << "N=";
cin >> N;
	for (c = 1.1; N!=0; c += 0.1) {
		x *= c;
		N-=1;
	}
cout << x;
}
