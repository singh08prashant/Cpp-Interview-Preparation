#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


int a,b,c;
cin>>a>>b>>c;

int max = a;

if(b>max) max = b;
if(c>max) max = c;

if(max==a){
	cout<<((a*a)==(b*b+c*c));
}
else if(max==b){
	cout<<((b*b)==(a*a+c*c));
}
else{
	cout<<((c*c)==(b*b+a*a));
}

return 0;
}