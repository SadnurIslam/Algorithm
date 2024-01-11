#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void count_sort(int inputArray[],int n){
    int outputArray[n],mx;
    for(i=0;i<n;i++){
        mx=max(mx,inputArray[i]);
    }
    int countArray[mx+1];
    for(i=0;i<n;i++){
        inputArray[mx]=0;
    }
    int i,j;
    for(i=1;i<n;i++){
        int item = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>item){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=item;
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
    count_sort(arr,n);
    return 0;
}

