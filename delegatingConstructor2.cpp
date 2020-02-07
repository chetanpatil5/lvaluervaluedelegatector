#include<iostream>
using namespace std;


class Foo
{
public:
	Foo()
	{
		//Code to Do A
		cout << "\nHello in Foo()";

	}

	Foo(int n)			//Delegate Constructor
	{
		Foo();
		//Code to Do A
		//Code to Do B
		cout << "\nHello in Foo(int n)";
	}

};

int main()
{
	Foo f1(10);
	return 0;
}