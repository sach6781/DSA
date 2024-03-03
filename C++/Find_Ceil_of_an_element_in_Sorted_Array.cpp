#include<bits/stdc++.h>
using namespace std;

int findInNearlySortedArray(int arr[], int n, int x){

    int left, right = 0;
    left = 0;
    right = n-1;
    int res = -1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == x){
            return arr[mid];
        }
        if(arr[mid] > x){
            res = arr[mid];
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
    int x = 89;
    int ans = findInNearlySortedArray(arr, n, x);
    cout << ans << endl;    
}