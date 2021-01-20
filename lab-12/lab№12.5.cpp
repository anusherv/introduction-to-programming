#include <iostream>
using namespace std;
int main()
{
    int year, n;
	setlocale(LC_ALL, "Russian");
	string col1[] = { "зеленого", "красного","желтого", "белого" ,"черного" };
	string col2[] = { "зеленой", "красной","желтой", "белойй" ,"черной" };
	string animal[] = { "крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки" , "свиньи" };
	cout << "Введите год\n";
	cin >> year;
	cout << year<< "-год ";
	year += 56;
	n = (year % 60)/12;
	year = year % 12;
	if (year == 2 || year == 3 || year == 4){
		cout << col1[n]<<" "<< animal[year];
	}
	else{
		cout << col2[n]<<" "<< animal[year];
	}
}
