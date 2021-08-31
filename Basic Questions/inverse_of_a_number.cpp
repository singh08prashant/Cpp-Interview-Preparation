#include<bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


int n;

cin >>n;

int inverse = 0;
int original_place = 1;

while(n != 0) {
    int original_digit = n%10;
    int inverse_digit = original_place;
    int inverse_place = original_digit;

    inverse = inverse + inverse_digit*pow(10, inverse_place-1);

    n = n/10;
    original_place++;
}

cout<<inverse;

return 0;
}