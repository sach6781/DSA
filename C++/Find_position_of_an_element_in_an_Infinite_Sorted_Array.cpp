#include<bits/stdc++.h>
using namespace std;

int findInInfiniteArray(int arr[], int n, int x){

    int left = 0;
    int right = 1;
    int res = -1;
    while(x > arr[right]){
        left = right;
        right = right * 2;
    }
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == x){
            return arr[mid];
        }
        if(arr[mid] > x){
            right = mid - 1;
        }
        else if(arr[mid] < x){
            left = mid + 1;
        }
    }
    return res;

}

int main(){
    int n = 7;
    int arr[n] = {10, 13, 20, 40, 50, 70, 80};
    int x = 50;
    int ans = findInInfiniteArray(arr, n, x);
    cout << ans << endl;    
}