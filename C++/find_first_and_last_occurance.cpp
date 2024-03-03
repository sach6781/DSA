#include<bits/stdc++.h>
using namespace std;


int find_first(int arr[], int n, int x){
	int mid, left, right = 0;
	left = 0;
	right = n-1;
	int first;
	while(left <= right){
       mid = left + (right - left) / 2;
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

int find_last(int arr[], int n, int x){
	int mid, left, right = 0;
	left = 0;
	right = n-1;
	int last;
	while(left <= right){
       mid = left + (right - left) / 2;
       if(arr[mid] == x){
       	left = mid + 1;
       	last = mid;
       }
       else if(arr[mid] < x){
       	left = mid + 1;
       }
       else{
       	right = mid - 1;
       }

	}
	return last;

}

int main(){
	int n = 10;
	int arr[10] = {2, 4, 6, 8, 10, 10, 14, 10, 10, 30};
	int x = 10;
    cout << "First Occurance " << find_first(arr, n, x) << endl;
    cout << "Last Occurance " << find_last(arr, n, x) << endl;
	return 0;
}