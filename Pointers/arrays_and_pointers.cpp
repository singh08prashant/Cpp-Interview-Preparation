#include<bits/stdc++.h>
using namespace std;

int main(){

	// similiarities between a and &a in case of array

	int a[10];
	int *p = &a[0];

	cout<< a << endl;
    cout << &a[0] << endl;
    cout<< p << endl;

    // both a and &a[0] and p print the same address


    // a can be dereferenced as a pointer

    a[0] = 5;
    a[1] = 10;
    a[2] = 15;


    cout << *a << endl;
    cout << a[0]<< endl;

    // we can get i-th element of an array by using a[i], *(a+i) and i[a]

    cout << a[2] << endl;
    cout << *(a+2) << endl;
    cout << 2[a] << endl; 



    // differences between a and pointer to a

    

    cout << sizeof(a) << endl; // gives size of array
    cout << sizeof(p) << endl; // gives 8 - size of pointer

    cout<< &p << endl; // prints address where pointer is stored
    cout << &a << endl; // prints address of a[0]
}
