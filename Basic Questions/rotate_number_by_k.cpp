#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n, k, ans;
cin>>n>>k;
int temp = n;
int number_of_digits=0;

while(temp>0){
	temp /= 10;
	number_of_digits++;
}
k = k%number_of_digits;
if(k<0){
	k = k+number_of_digits;
}


int divisor = pow(10,k);
int multiplier = pow(10,number_of_digits-k);

int remainder = n%divisor;
int quotient = n/divisor;

ans = remainder*multiplier + quotient;
cout<<ans;

return 0;
}