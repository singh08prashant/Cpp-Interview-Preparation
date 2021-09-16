#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b;
    cin>>n>>b;
    
    int rem,ans =0, step = 0;
    
    while(n>0){
      rem = n%10;
      ans += (rem* pow(b,step));
      n = n/10;
      step++;
    }
    cout<<ans;
}
