#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Initial array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sz = sqrt(n);
    int sum[sz]={0};
    int j = 0, s = 0;
    for(int i = 0;i<n;i++){
        sum[i/sz]+=a[i];
    }
    for(int i=0;i<sz;i++)cout<<sum[i]<<" ";
    cout<<endl;

    int q;
    cout<<"Number of query: ";
    cin>>q;
    while(q--){
        int type,l,r;   //type = 1 for find sum, 2 for update value r at index l
        cin>>type>>l>>r;
        if(type==1){
            int ans = 0;
            while(l<r && l%sz!=0 && l!=0){
                ans+=a[l];
                l++;
            }

            while(l+sz-1 <=r){
                ans+=sum[l/sz];
                l+=sz;
            }

            while(l<=r){
                ans+=a[l];
                l++;
            }
            cout<<ans<<endl;
        }
        else{
            sum[l/sz]+=r-a[l];
            a[l]=r;
        }
    }
}
