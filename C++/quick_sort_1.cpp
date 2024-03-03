#include<bits/stdc++.h>
using namespace std;


int partition(int *arr, int start, int end){
	int pivot = arr[end];
	int pIdx = start;
	for(int i=start;i<end;i++){
		if(arr[i] <= pivot){
			swap(arr[i], arr[pIdx]);
			pIdx++;
		}
	}
	swap(arr[pIdx], arr[end]);
	return pIdx;
}

void quickSort(int *arr, int start, int end){
	if(start >= end){
		return;
	}
	int pIdx = partition(arr, start, end);
	quickSort(arr, start, pIdx-1);
	quickSort(arr, pIdx + 1, end);
}



int main(){
	int arr[6] = {10, 4, 27, 13, 2, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);
	for(int i=0;i<n;i++){
		cout << arr[i] << endl;
	}
}
