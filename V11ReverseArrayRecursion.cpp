#include <iostream>
using namespace std;

void reverse(int arr[], int i, int n) {
    // Base Case
    if (i >= n / 2)
        return;

    // Swap
    swap(arr[i], arr[n - i - 1]);

    // Recursive Call
    reverse(arr, i + 1, n);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverse(arr, 0, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int arr[],int front,int last){

// if(front>=last){
//     return;
// }
// swap(arr[front],arr[last]);

// reverse(arr,front+1,last-1);

// }

// int main(){
// int n;
// cin>>n;
// int arr[10];

// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// reverse(arr,0,n-1);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

// }
