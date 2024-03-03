#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n){
	bool swapped = false;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(swapped == false){
			break;
		}
	}
	return;
}

int main(){
	int arr[6] = {6, 5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n-1);
	for(int i=0;i<n;i++){
		cout << arr[i] << endl;
	}
}