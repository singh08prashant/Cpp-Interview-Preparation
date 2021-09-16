#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b;
    cin>>n>>b;
    
    int rem,ans =0, step = 0;
    
    while(n>0){
      rem = n%b;
      ans += (rem* pow(10,step));
      n = n/b;
      step++;
    }
    cout<<ans;
}
