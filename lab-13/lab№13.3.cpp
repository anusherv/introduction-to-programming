#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "Russian");
float c,x=0;
int N;
cout << "N=";
cin >> N;
	for (c = 1; c <= N; c++) {
		x +=2 * c - 1;
		cout << x << endl;
	}
}
