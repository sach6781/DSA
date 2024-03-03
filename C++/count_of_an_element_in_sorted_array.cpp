#include<bits/stdc++.h>
using namespace std;


int find_first(int arr[], int n, int x){
	int mid, left, right = 0;
	left = 0;
	right = n-1;
	int first = 0;
	int count = 0;
	while(left <= right){
       mid = left + (right - left) / 2;
       if(arr[mid] == x){
       	right = mid - 1;
       	first = first + arr[mid];
       	count++;
       }
       else if(arr[mid] > x){
       	left = mid + 1;
       }
       else{
       	right = mid - 1;
       }

	}
	return first, count;
}

int find_last(int arr[], int n, int x){
	int mid, left, right = 0;
	left = 0;
	right = n-1;
	int last = 0;
	int count = 0;
	while(left <= right){
       mid = left + (right - left) / 2;
       if(arr[mid] == x){
       	left = mid + 1;
       	last += arr[mid];
       	count++;
       }
       else if(arr[mid] > x){
       	left = mid + 1;
       }
       else{
       	right = mid - 1;
       }

	}
	return last, count;

}

int main(){
	int n = 10;
	int arr[10] = {10, 10, 6, 8, 10, 10, 14, 10, 10, 30};
	int x = 10;
    int sum_start, count1 = find_first(arr, n, x);
    int sum_last, count2 = find_last(arr, n, x);
    cout << "Total Count Is - " << count2 + count1 << endl;
	return 0;
}