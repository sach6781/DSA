#include<bits/stdc++.h>
using namespace std;

void insert_num(vector<int> &arr, int num){
	if(arr.size() == 0 || arr[arr.size() - 1] < num){
		arr.push_back(num);
		return;
	}
	int temp = arr[arr.size()-1];
	arr.pop_back();
	insert_num(arr, num);
	arr.push_back(temp);
}

void sort_arr(vector<int> &arr){
	if(arr.size() == 1){
		return;
	}
	int temp = arr[arr.size()-1];
	arr.pop_back();
	sort_arr(arr);
	insert_num(arr, temp);
}

int main(){
    vector<int> arr = {2, 3, 1, 4, 6, 5};
    sort_arr(arr);
    for(auto it : arr){
    	cout << it << endl;
    }
}