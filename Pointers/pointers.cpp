// pointers

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	/* &i gives address of a variable i.
	  '&' is the 'address of' or the 'reference operator'.
	  Address is always a hexadecimal value.
	  We can use pointers to store the address of other variables of the same type. */
	
	int i = 10;
	
	int *p = &i; // here p is a pointer that stores the address of i.

	// We can print value stored at the address stored in a pointer using dereference operator *

	cout<< *p <<endl;  // prints 10

	// Size of any type of pointer is same. It can be 8 bytes or 4 bytes depending on compilers.
	cout<< sizeof(p) << endl; //prints 8

	/* It is a best practice to ALWAYS INITIALIZE A POINTER WHILE DECLRATION. 
	   EITHER WITH ANY ADDRESS OR 'NULL' OR 0. */

}