#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void count_sort(int inputArray[],int n){
    int outputArray[n],mx,i;
    for(i=0;i<n;i++){
        mx=max(mx,inputArray[i]);
    }
    int countArray[mx+1];
    for(i=0;i<=mx;i++){
        countArray[i]=0;
    }
    for(i=0;i<n;i++){
        countArray[inputArray[i]]++;
    }
    for(i=1;i<=mx;i++){
        countArray[i]+=countArray[i-1];
    }
    for(i=n-1;i>=0;i--){
        countArray[inputArray[i]]--;
        outputArray[countArray[inputArray[i]]] = inputArray[i];
    }
    display(outputArray,n);
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

