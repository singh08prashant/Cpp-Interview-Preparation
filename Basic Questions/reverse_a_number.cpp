#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n;
cin>>n;

while(n>0) {
    cout<<n%10<<endl;
    n = n/10;
}

return 0;
}