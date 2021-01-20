#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	bool xpos = x > 0;
	bool ypos = y > 0;
	switch (xpos)
	{
		case 1:
			switch (ypos)
			{
			case 1:
				cout << "1четверть";
				break;
			case 0:
				cout << "4четверть";
				break;
			}
			break;
		case 0:
			switch (ypos)
			{
			case 1:
				cout << "2четверть";
				break;
			case 0:
				cout << "3четверть";
				break;
			}
			break;
	}
}
