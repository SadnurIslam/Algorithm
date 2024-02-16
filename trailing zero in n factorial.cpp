#define ll long long int
#include<bits/stdc++.h>
using namespace std;

ll zeros(ll n){
    if(n<0){
        return 0; //not possible
    }
    ll cnt =0 ;
    for(int i=5;i<=n;i=i*5){        // o(log5n)
        cnt+=n/i;
    }
    return cnt;
}


int main(){
    ll n;
    cin>>n;
    ll ans = zeros(n);
    cout<<endl<<ans<<endl;
}





