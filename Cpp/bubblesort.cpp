#include<bits/stdc++.h>
using namespace std;

void sort(int *arr, int n) {
    cout<<"Unsorted array: ";
    for(int i=0; i<n; i++) {
        cout<< arr[i]<< " ";
    }
    cout<<endl;

    if(n == 0 || n == 1) {
        return;
    }

    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    sort(arr, n-1);
}

int main() {

    int arr[] = {2, 90, 45, 87, 56, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++) {
        
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    

    return 0;
}
