#include <iostream>
using namespace std;
//actually EX01_02 

int main()
{
	bool IsATrraingle; 

	cout << "Enter 3 integers which are sides of a triangle" << endl;
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "a:  ";
	cin >> a;
	 while (( a < 1 || a == 1) || (a == 300 || a > 300)) //checking triangle side inputs
	 {
		 cout << "Value of a is not in the range of permitted values. Please enter a new value: ";
		 cin >> a; 
	 }

	cout << "\nb: ";
	cin >> b;
	while ((b < 1 || b == 1) || (b == 300 || b > 300)) //checking triangle side inputs
	{
		cout << "Value of b is not in the range of permitted values. Please enter a new value: ";
		cin >> b;
	}

	
	cout << "\nc: ";
	cin >> c;
	while ((c < 1 || c == 1) || (c == 300 || c > 300))//checking triangle side inputs
	{
		cout << "Value of c is not in the range of permitted values. Please enter a new value: ";
		cin >> c;
	}


	cout << "Side A is " << a;
	cout << endl << "Side B is " << b;
	cout << endl << "Side C is " << c << endl;
	int d = c*c;

	//is it a triangle? 
	if (( a < (b + c)) && (b < (a+c)) && (c < (a +b)))
	{
		IsATrraingle = true;
	}
	else
	{
		IsATrraingle = false;
	}

	//detemining triangle type
	if (IsATrraingle == true)
	{
		if ((a == b) && (b == c))
		{
			cout << "\n Your triangle is an equalaterial.";
		}
		else if (c = ((a*a) + (b*b)) / c) {
			cout << "\nYour Triangle is a right." << endl;
		}
		else if ((a != b) && (a != c) && (b != c))
		{
			cout << "\nYour Triangle is scalene.";
		}
		//EX01_03

		else
			cout << "\nYour triangle is isosceles";

	}
	else
		cout << "\nNot a Triangle.";
}