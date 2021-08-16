#include<bits/stdc++.h>
using namespace std;


int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


int low,high;
cin>>low;
cin>>high;

for(int i=low;i<=high;i++){
	int count =0;

	for(int div =2;div<=sqrt(i);div++)
	{
		if(i%div==0){
			count++;
			break;
		}
	}
	
	if(count == 0) cout<<i<<endl;
}

return 0;
}