//#include<iostream>
//using namespace std;
//
//class Array
//{
//	int size;
//	int *ptr;
//public:
//	//Constructor
//	Array(int n) :size(n), ptr(new int[n]) {}
//
//	//Copy Constructor
//	Array(const Array& arr) :size(arr.size), ptr(new int[arr.size])
//	{
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = arr.ptr[i];
//			
//		}
//	}
//	//destructor
//	~Array() { delete[] ptr; }
//
//};
//
//class MoveArray
//{
//	int size;
//	int *ptr;
//public:
//	//Constructor
//	MoveArray(int n) :size(n), ptr(new int[n]) {}
//
//	//Move Constructor
//	MoveArray(const MoveArray& arr) :size(arr.size), ptr(new int[arr.size])
//	{
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = arr.ptr[i];
//
//		}
//	}
//	MoveArray(MoveArray&& arr) :size(arr.size), ptr(new int[arr.size])
//	{
//		cout << "\nMovable array";
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = arr.ptr[i];
//		}
//
//	}
//	//destructor
//	~MoveArray() { delete[] ptr; }
//
//};
//
//MoveArray func_temperory_object(int sz)
//{
//	//
//}
//
//int main()
//{
//
//}