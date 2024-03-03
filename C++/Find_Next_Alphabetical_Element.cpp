#include<bits/stdc++.h>
using namespace std;

int findInNearlySortedArray(char arr[], int n, char x){

    int left, right = 0;
    left = 0;
    right = n-1;
    char res;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == x){
            left = mid + 1;
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
    char arr[n] = {'a', 'b', 'c', 'd', 'e', 'h', 'k'};
    char x = 'a';
    char ans = findInNearlySortedArray(arr, n, x);
    cout << ans << endl;    
}