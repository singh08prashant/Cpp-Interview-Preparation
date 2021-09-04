#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int num1,num2;
cin>>num1>>num2;
int rem;

int original_num1 = num1;
int original_num2 = num2;


while(num1%num2!=0){
	rem = num1 % num2;
	num1 = num2;
	num2 = rem;
}
cout<<"GCD "<<num2<<endl;

int lcm = (original_num1 * original_num2)/num2;

cout<<"LCM "<<lcm<<endl;
return 0;
}