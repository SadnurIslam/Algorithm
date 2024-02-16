#define ll long long int
#include<bits/stdc++.h>
using namespace std;

ll func1(ll n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    double digit=0;
    for(int i=1;i<=n;i++){        // o(nlogn)
        digit+=log10(i);
    }
    return floor(digit)+1;
}

ll func2(ll n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    double digit = 0;
    digit = (n*log10(n/M_E))+(log10(2*M_PI*n)/2.0);
    return floor(digit)+1;
}

int main(){
    ll n;
    cin>>n;
    ll f1 = func1(n);
    ll f2 = func2(n);
    cout<<endl<<f1<<endl<<f2<<endl;
}




