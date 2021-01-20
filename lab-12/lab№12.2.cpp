#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N,F;
	string C;
	string d[] = { "север", "запад", "юг", "восток" };
	cout << "введите напрваление(полным словом)\n";
	cin >> C;
	cout << "N=";
	cin >> N;
	if (C == "север") {
		F = 0; }
	else if (C == "запад") {
		F = 1; }
	else if (C == "юг") {
		F = 2; }
	else if (C == "восток") {
		F = 3; }
	switch (N) {
	    case(0):
	    cout << C;
		break;
	case(1):
	    if (F == 3)
	    cout << d[0];
	    else
	    cout << d[F+1];
	    break;
    case(-1):
        if (F == 0)
        cout << d[2];
        else
	    cout << d[F-1];
	    break;
    }
}
