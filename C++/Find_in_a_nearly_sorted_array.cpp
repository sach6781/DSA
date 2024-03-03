#include<bits/stdc++.h>
using namespace std;

int findInNearlySortedArray(int arr[], int n, int x){

	int left, right = 0;
	left = 0;
	right = n-1;

	while(left <= right){
		int mid = left + (right - left) / 2;
		if(arr[mid] == x){
			return mid;
		}
		if(mid - 1 >= left && arr[mid - 1] == x){
			return mid -1;
			}
		if(mid + 1 <= right && arr[mid + 1] == x){
			return mid + 1;
			}

		if(arr[mid] > x){
			right = mid - 2;
		}
		else{
			left = mid + 2;
		}
	}
	return -1;

}

int main(){
	int n = 7;
	int arr[n] = {10, 3, 40, 20, 50, 80, 70};
    int x = 70;
    int ans = findInNearlySortedArray(arr,n , x);
    cout << ans << endl;	
}