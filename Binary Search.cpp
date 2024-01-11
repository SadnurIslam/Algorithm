#include <bits/stdc++.h>
using namespace std;

void binary_search(int arr[],int n,int item){
    int left,right,mid;
    left = 0;
    right = n-1;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]==item){
            cout<<"Found at position "<<mid<<endl;
            return;
        }
        if(arr[mid]>item){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    cout<<"The item doesn't exist"<<endl;
}

int main() {
    int n,i;
    cout<<"Size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Data of the array separated by space: ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    int item;
    cout<<"Search item: ";
    cin>>item;
    binary_search(arr,n,item);
    return 0;
}
