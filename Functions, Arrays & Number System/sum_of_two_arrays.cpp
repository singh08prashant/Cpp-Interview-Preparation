/* 1. You are given a number n1, representing the size of array a1.
2. You are given n1 numbers, representing elements of array a1.
3. You are given a number n2, representing the size of array a2.
4. You are given n2 numbers, representing elements of array a2.
5. The two arrays represent digits of two numbers.
6. You are required to add the numbers represented by two arrays and print the
arrays. */
  
#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    
    //write your code here
    int n3 = n1>=n2 ? n1:n2;
    int* sum = new int[n3];
    int carry = 0;
    
    int i = n1-1;
    int j = n2 -1;
    int k = n3-1;
    
    while(k!=0){
        int dig = carry;
        if(i>=0){
            dig += a1[i];
        }
        if(j>=0){
            dig += a2[j];
        }
        
        carry = dig/10;
        dig = dig%10;
        
        sum[k] = dig;
        
        i--;
        j--;
        k--;
    }
    
    if(carry>0){
        cout<<carry;
    }
    
    for(int i =0;i<n3;i++){
        cout<<sum[i];
    }
    
    
}
  
