//#include<iostream>
//using namespace std;
//#include<string>
//
//
//int getValue()
//{
//	int temp = 99;
//	return temp;
//}
//
//int main()
//{
//	//z=0 where 0 is the literal value
//	//10=x lvalue does not be stored as 10 is constant
//
//	//rvalue reference are declared with two ampersands rather than one
//
//	int num = 100;
//	int &ref = num;
//	//&ref requires a lvalue which is num here
//	//Provides Direct Ownership ( move )
//
//
//	cout << getValue();
//	
//	//int &val = getValue();//Shows error on 
//	int &&val = getValue();
//	//internally ghar nahi banana(memory) so we use rvalue reference copy constructor
//	//Unnamed memory
//
//	//Used in optimisation
//	return 0;
//}