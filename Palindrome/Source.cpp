#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << "hello";
	int number ,a, b, c, d ;
	cout << "������� 4-� ������� �����:";  cin >> number;
	d = number % 10;
	c = number / 10 % 10;
	b = number / 100 % 10;
	a = number / 1000;
	if (d == a && c == b)
	{
		cout << "����� �������� �����������" << endl;

	}
	else
	{
		cout << "����� �� �������� �����������" << endl;
	}
}