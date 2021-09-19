#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>d;
    
    int idx = -1;
    
    for(int i=0;i<n;i++){
        if(d==arr[i]){
            idx = i;
        }
    }
    
    cout<<idx;
    
}
