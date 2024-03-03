#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 10;
	int arr[10] = {2, 4, 6, 8, 10, 12, 14, 15, 17, 30};
	int x = 10;
	int mid, left, right = 0;
	left = 0;
	right = n-1;

	while(left <= right){
       mid = left + (right - left) / 2;
       if(arr[mid] == x){
       	cout << mid << endl;
       	return 0;
       }
       else if(arr[mid] > x){
       	left = mid + 1;
       }
       else{
       	right = mid - 1;
       }

	}
	cout << -1 << endl;
}