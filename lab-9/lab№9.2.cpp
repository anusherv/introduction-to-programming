#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int K;
	cout << "K=";
	cin >> K;
	K = K % 7;
	switch (K) {
	case 0:
		cout << "воскресенье";
			break;
	case 1:
		cout << "понедельник";
			break;
	case 2:
		cout << "вторник";
		break;
	case 3:
		cout << "среда";
		break;
	case 4:
		cout << "четверг";
		break;
	case 5:
		cout << "пятница";
		break;
	case 6:
		cout << "суббота";
		break;
	}
}
