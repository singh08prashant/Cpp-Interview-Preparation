#include<bits/stdc++.h>
using namespace std;

int main(){
	// double pointers are pointers which store address of another pointer

	int i =10;

	int* ptr = &i; // pointer ptr

	int** double_ptr = &ptr; // double pointer

	// we can use  dereferencing operator (*) two times to reach different levels of dererefencing

	cout<< **double_ptr << endl; // prints value of i, 10
	cout<< *double_ptr << endl; // prints address where ptr is stored

	return 0;
}
