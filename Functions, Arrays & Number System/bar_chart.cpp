#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int maxi = arr[0];
    
     for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    
    for(int floors = maxi; floors>=1; floors-- ){
        for(int i=0;i<n;i++){
            if(arr[i]>=floors){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    
}
