#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "Russian");
float A,c; 
cout << "введите стоимость одного кг конфет" << endl;
cin >> A;
	for (c = 0.1; c <= 1.1; c += 0.1) {
		cout << "цена за " << c << "кг конфет" << "=" << A * c << endl;
	}
}
