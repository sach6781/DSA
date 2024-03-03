#include<bits/stdc++.h>
using namespace std;

int find_min_element_index(int arr[], int n){
	int mid, left, right = 0;
	left = 0;
	right = n-1;
	while(left <= right){
       mid = left + (right - left) / 2;
       int next = arr[mid + 1] % n;
       int prev = arr[mid - n + 1] % n;
       if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
       		return mid;
       	}
       if(arr[left] <= arr[mid]){
       	left = mid + 1;
       }
       else if(arr[right] >= arr[mid]){
       	right = mid - 1;
       }

	}
	return -1;

}

int main(){
	int arr[] = {4,5,6,7,0,1,2};
	int n = 7;
    int index = find_min_element_index(arr, n);
    cout << index<< endl;
    cout << "Done" << endl;
	return 0;
}