#include <iostream>
using namespace std;
int number(int a, int b, int c)
{
	if (a > b && a > c)
	return a;
	else if (b > a && b > c)
	return b;
	else
	return c;
}
double number(double e, double p, double s)
{
	if (e > p && e > s)
	return e;
	else if (p > s && p > e)
	return p;
	else
	return s;
}
int main()
{
	int a, b, c;
	double e, p, s;
	char type;
	cout << "choose your type : integer(i) or not integer(d) " << endl;
	cin >> type;
	switch (type)
	{
	case 'i':
	{
		cout << "Enter first number - ";
		cin >> a;
		cout << "Enter second number - ";
		cin >> b;
		cout << "Enter third number - ";
		cin >> c;
		cout << "The biggest number is >> " << number(a, b, c);
		break;
	}
	case 'd':
	{
		cout << "Enter first number - ";
		cin >> e;
		cout << "Enter second number - ";
		cin >> p;
		cout << "Enter third number - ";
		cin >> s;
		cout << "The biggest number is >> " << number(e, p, s);
		break;
	}
	}

	return 0;
}