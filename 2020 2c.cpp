//complexity o(logb)

#define ll long long int
#include<bits/stdc++.h>
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll r,c;
    ll b = sqrt(n);
    ll a = b+1;
    if(b*b==n){
        if(n&1){
            r=1;
            c=1;
        }
        else{
            r=b;
            c=b;
        }
    }
    else{

    }
}


