#define ll long long int
#include<bits/stdc++.h>
using namespace std;

ll f1 , f2, f3;
void func1(ll n){
    f1++;
    if(n==1)return;    // O(n)
    func1(n-1);
}
void func2(ll n){
    f2++;
    if(n==1)return;        // O(2^n)
    func2(n-1);
    func2(n-1);
}
void func3(ll n){
    f3++;
    if(n==1)return;        // O(log2(n))
    func3(n/2);
}
int main(){
    ll n;
    cin>>n;
    func1(n);
    func2(n);
    func3(n);
    cout<<endl<<f1<<endl<<f2<<endl<<f3<<endl;
}



