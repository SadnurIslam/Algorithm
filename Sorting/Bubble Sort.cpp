#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
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
    bubble_sort(arr,n);
    return 0;
}


