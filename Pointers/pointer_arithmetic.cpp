// Pointer Arithmetic

#include<bits/stdc++.h>
using namespace std;

int main(){

	// SIZE OF ANY TYPE OF POINTER IS SAME

	int arr[3] = {1,3,5};

	int *p = &arr[0];

	cout << *p << endl;  // prints 1

	p = p+1;

	// here p+1 means p + sizeof(int)
	// therefore the pointer now points to the next memory location

	cout << *p << endl; // prints 3

	// WE CAN ALSO USE LESS THAN < , GREATER THAN > , EQUALS == AND DECREMENT OPERATOR ON POINTERS.
}

