#include <bits/stdc++.h>
using namespace std;

void binary_search(int arr[],int n,int item){

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
