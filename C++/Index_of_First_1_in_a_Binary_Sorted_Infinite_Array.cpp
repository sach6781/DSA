#include<bits/stdc++.h>
using namespace std;

int findInNearlySortedArray(int arr[], int n, int x){
    int left = 0;
    int right = 1;
    int first = -1;
    while(x > arr[right]){
        left = right;
        right = right * 2;
    }
    while(left <= right){
       int mid = left + (right - left) / 2;
       if(arr[mid] == x){
        right = mid - 1;
        first = mid;
       }
       else if(arr[mid] < x){
        left = mid + 1;
       }
       else{
        right = mid - 1;
       }

    }
    return first;
}

int main(){
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int x = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Size of array=> "<< n << endl;
    int ans = findInNearlySortedArray(arr, n, x);
    cout << "Index of first 1 is=> " <<ans << endl;    
}