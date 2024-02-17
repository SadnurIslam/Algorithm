#define ll long long int
#include<bits/stdc++.h>
using namespace std;

ll div_count(ll n){
    ll total = 1;
    bool isPrime[n+1];
    for(int i=0;i<=n;i++){
        isPrime[i] = true;
    }
    for(int p=2;p*p<=n;p++){
        if(isPrime){
            for(int i=p*p;i<=n;i=i+p){
                isPrime[i]=false;
            }
        }
    }
    for(int p=2;p<=n;p++){
        if(isPrime[p]){
            int cnt = 0;
            while(n%p==0){
                cnt++;
                n/=p;
            }
            total*=(cnt+1);
        }
    }
    return total;
}


int main(){
    ll n;
    cin>>n;
    ll ans = div_count(n);
    cout<<endl<<ans<<endl;
}






