#include<iostream>
using namespace std;
/*Time complexity O(n), Space Complexity O(1)*/
// void move(int *arr, int n) {

//     int j = 0;
//     for(int i=0; i<n; i++) {
//         if(arr[i] < 0) {
//             if(i != j)
//                 swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }

// void print(int *arr, int n) {
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main() {

    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    move(arr, n);
    print(arr, n);
    return 0;

}