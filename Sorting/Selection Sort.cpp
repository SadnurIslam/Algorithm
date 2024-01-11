#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selection_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int min_ind = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind = j;
            }
        }
        if(min_ind!=i){
            int t = arr[i];
            arr[i]=arr[min_ind];
            arr[min_ind]=t;
        }
        display(arr,n);
    }
    display(arr,n);
}

int main() {
    int n,i;
    cout<<"Size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Data of the array separated by space: ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    selection_sort(arr,n);
    return 0;
}

