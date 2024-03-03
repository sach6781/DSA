#include<bits/stdc++.h>
using namespace std;


void merge(int mergedArray[], int left, int mid, int right){
	int subArrayOne = mid - left + 1;
	int subArrayTwo = right - mid;
	int leftSubArray[subArrayOne], rightSubArray[subArrayTwo];
	for(int i =0;i<subArrayOne;i++){
		leftSubArray[i] = mergedArray[left + i];
	}
	for(int j =0;j<subArrayTwo;j++){
		rightSubArray[j] = mergedArray[mid + 1 + j];
	}
	int idxSubArrOne, idxSubArrTwo = 0;
	int idxMergeArray = left;
	while(idxSubArrOne < subArrayOne && idxSubArrTwo < subArrayTwo){
		if(leftSubArray[idxSubArrOne] <= rightSubArray[idxSubArrTwo]){
			mergedArray[idxMergeArray] = leftSubArray[idxSubArrOne];
			idxSubArrOne++;
		}else{
			mergedArray[idxMergeArray] = rightSubArray[idxSubArrTwo];
			idxSubArrTwo++;
		}
		idxMergeArray++;
	}
	while(idxSubArrOne < subArrayOne){
		mergedArray[idxMergeArray] = leftSubArray[idxSubArrOne];
		idxSubArrOne++;
		idxMergeArray++;
	}
	while(idxSubArrTwo < subArrayTwo){
		mergedArray[idxMergeArray] = rightSubArray[idxSubArrTwo];
		idxSubArrTwo++;
		idxMergeArray++;
	}

}


void mergeSort(int arr[], int left, int right){
	if(left > right){
		return;
	}
	int mid = left + (right - left) / 2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}


int main(){
	int arr[6] = {10, 4, 27, 13, 2, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr, 0, n-1);
	for(int i=0;i<n;i++){
		cout << arr[i] << endl;
	}
}
