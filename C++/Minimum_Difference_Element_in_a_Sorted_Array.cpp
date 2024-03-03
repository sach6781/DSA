#include<bits/stdc++.h>
using namespace std;

int findInNearlySortedArray(int arr[], int n, int x){

    int left, right = 0;
    left = 0;
    right = n-1;

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
    int floor = abs(left - x);
    int ceil = abs(right - x);
    if(floor > ceil) return arr[left];
    return arr[right];

}

int main(){
    int n = 5;
    int arr[n] = {1, 2, 8, 10, 15};
    int x = 12;
    int ans = findInNearlySortedArray(arr, n, x);
    cout << ans << endl;    
}