//complexity o(logb)

#define ll long long int
#include<bits/stdc++.h>
using namespace std;

ll power(ll a, ll b){
    ll result = 1;
    while(b>0){
        if(b&1){
            result*=a;
        }
        a*=a;
        b=b/2;
    }
    return result;
}
int main(){
    ll a,b;
    cin>>a>>b;
    ll result = power(a,b);
    cout<<endl<<endl;
    cout<<result<<endl;
}



