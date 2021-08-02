#include<bits/stdc++.h>
using namespace std;


// function to calculate sum of elements in array
	int sum(int* arr, int n){
		int ans = 0;

		for(int i=0;i<n;i++){
			ans += arr[i];
		}

		return ans;
	}

int main(){

	int arr[5] = {1,2,3,4,5};

	cout<< sum(arr,5);  // here arr is passed as a pointer to the array arr


	// we can also pass part of an array
	cout<< sum(arr+1,4);
	return 0;

}

