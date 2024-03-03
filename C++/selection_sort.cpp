#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n){
	for(int i=0;i<n-1;i++){
		int iMin = i;
		for(int j=i+1;j<n;j++){
			if(arr[j] > arr[iMin]){
				iMin = j;
			}
		}
		swap(arr[i], arr[iMin]);
	}
	return;
}

int main(){
	int arr[6] = {6, 5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	for(int i=0;i<n;i++){
		cout << arr[i] << endl;
	}
}