#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    
    int diff[n2];
    int carry = 0;
    int p = n1-1;
    int q = n2 - 1;
    int r = n2-1;
    
    
    while(r>=0){
        int d;
        int a1_val = p>=0 ? a1[p]:0;
        if(a2[q]+carry >= a1_val){
            d = (a2[q]+carry) - a1_val;
            carry = 0;
        }
        else{
            d = (a2[q]+carry+10) - a1_val;
            carry = -1;
        }
        
        diff[r] = d;
        p--;
        q--;
        r--;
    }
    
    // printing while ignoring leading zeroes
    
    int idx = 0;
    while(idx<= n2-1){
        if(diff[idx]==0){
            idx++;
        }
        else{
            break;
        }
    }
    
    while(idx <= n2-1){
        cout<<diff[idx]<<endl;
        idx++;
    }
    
    return 0;
}
