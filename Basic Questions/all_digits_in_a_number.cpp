#include<bits/stdc++.h>
using namespace std;

int main() {
vector<int> v;

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int num;
cin>>num;


while(num>0){
	v.push_back(num%10);
	num = num/10;	
}

reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}

return 0;
}