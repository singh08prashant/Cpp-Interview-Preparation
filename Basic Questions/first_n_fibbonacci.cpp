#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n,c,a=0,b=1,count=2;
cin>>n;

if(n==1) cout<<a<<" ";
else if(n==2) cout<<a<<" "<<b;
else{

cout<<a<<" "<<b<<" ";

while(count!=n) {
    c = a+b;
    cout<<c<<" ";
    count++;
    a = b;
    b = c;
   }
}
return 0;
}