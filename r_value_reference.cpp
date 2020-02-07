//#include<iostream>
//using namespace std;
//#include<string>
//
////lvalue initialisation . constant memory initialisation 
////Here &val will create new memory and requires lvalue
////Supports lvalue 
//void Display(const int &val)		
//
//{
//	cout << "\nlvalue : "<<val<<endl;
//}
//
////rvalue accessing without creating extra memory
//void Display( int &&val)
//{
//	cout << "\nrvalue : " << val << endl;
//}
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
//	int num = 100;//num is lvalue 100 is rvalue
//	Display(num);
//	Display(getValue());	//getValue() returns rvalue 
//
//	//int y = 20;
//	//int data = 10;
//	//int &ref = data;
//	//ref = y;
//	//cout << data;
//
//	//through move constructor we avoid unnecessary creation of memory(no temperory object creation) 
//
//	return 0;
//}