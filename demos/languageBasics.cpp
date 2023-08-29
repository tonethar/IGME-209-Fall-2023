#include <iostream>
using namespace std;


int main()
{

	//------------------- Basic data types -------------
	bool myBool = true;
	char myChar = 'A';
	int myInt = 100;
	float myFloat = 100.01f;
	double myDouble = 100.01;



	//------------------- Float vs double -------------
	if (myFloat == 100.01) {
		cout << "My float is equal to 100.01" << endl;
	}
	else {
		cout << "My float is NOT equal to 100.01" << endl;
	}

	if (myFloat == 100.01f) {
		cout << "My float is equal to 100.01f" << endl;
	}
	else {
		cout << "My float is NOT equal to 100.01f" << endl;
	}




	//------------------- Signed and unsigned -------------
	signed int mySignedInt = -100;
	unsigned int myUnsignedInt = -100;
	cout << "My unsigned int: " << myUnsignedInt << endl;
	cout << "My signed int: " << mySignedInt << endl;




	//------------------- Size modifiers -------------
	long int myLongInt = 1;
	short int myShortInt = 1;
	cout << sizeof(myLongInt) << endl;
	cout << sizeof(myShortInt) << endl;
	//------------------- Constants -------------
	const float PI = 3.14159f;
	//PI = 100;



	//------------------- Scope -------------
	int x = 10;

	if (x > 0)
	{
		int inside = 22;
	}

	//cout << inside << endl;


	//------------------- Casting -------------
	double price = 12.99;
	int dollars = price; //Implicit cast
	Float floatDollars = (int)price; //Explicit cast


	//------------------- Arithmetic Operators -------------
	int a = 2;
	int b = 3;

	int add = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	int mod = b % a;

	double c = 2.5;
	double doublePlusInt = c + a;
	int intPlusDouble = c + a; // Loss of data
	//------------------- Assignment Operators -------------

	a = b;
	a += b;
	a -= b;
	a *= b;
	a /= b;
	a %= b;



	//------------------- Relational Operators -------------

	int large = 100;
	int small = 1;

	if (large > small) {}
	if (large >= small) {}
	if (large < small) {}
	if (large <= small) {}
	if (large == large) {}
	if (large != small) {}






	//------------------- Logical Operators -------------

	if (true && true) {}
	if (true && false) {}
	if (true || true) {}
	if (true || false) {}
	if (false || false) {}
	if (!true) {}
	if (!false) {}
}
