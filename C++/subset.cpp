#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> all_subsets;
void func(vector<int> &subset, int idx, int N, vector<int> &arr){
	if(idx == N){
		all_subsets.push_back(subset);
		return;
	}
	func(subset, idx + 1, N, arr);
	subset.push_back(arr[idx]);
	func(subset, idx + 1, N, arr);
	subset.pop_back();
}

int main(){
	vector<int> arr = {1, 2, 3};
	int n = 3;
	vector<int> output;
	func(output, 0, n, arr);
	sort(all_subsets.begin(), all_subsets.end());
	for(auto it:all_subsets){
		for(auto num: it){
			cout << num << " ";
		}
		cout << endl;
	}
}