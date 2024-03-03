#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int p, int r){
	int x = arr[r];
	int i = p-1;
	for(int j = p;j<=r-1;j++){
		if(arr[j]<=x){
			i = i+1;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[r]);
	return i+1;
}

void quickSort(vector<int> &arr, int p, int r){
	if(p<r){
		int q = partition(arr, p, r);
		quickSort(arr, p, q-1);
		quickSort(arr, 	q+1, r);
	}
}

int main(){
	vector<int> arr = {5, 1, 19, 11, 32, 89, 44, 21, 6};
	quickSort(arr, 0, arr.size()-1);
	for(auto it:arr){
		cout<<it<<endl;
	}
}