#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n,flag=0;



	cin>>n;
	
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0) flag = 1;
	}

	if(flag==0) cout<<"prime";
	else cout<<"not prime";


return 0;

}