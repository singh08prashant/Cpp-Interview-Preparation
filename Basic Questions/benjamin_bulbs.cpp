#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n;
cin>>n;

for(int idx=1;idx*idx<=n;idx++){
	cout<<idx*idx<<" ";
}

return 0;
}