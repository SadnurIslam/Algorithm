#include <bits/stdc++.h>
using namespace std;

void linear_search(int arr[],int n,int item){
    int i;
    bool exist = false;
    for(i=0;i<n;i++){
        if(arr[i]==item){
            exist = true;
            break;
        }
    }
    if(exist){
        cout<<"Found at position "<<i+1<<endl;
    }
    else{
        cout<<"The item doesn't exist in the array"<<endl;
    }
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
    linear_search(arr,n,item);
    return 0;
}
