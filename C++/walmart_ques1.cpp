#include<bits/stdc++.h>
using namespace std;

vector<int> vt;
int uniVal(vector<int> &nums, int j){
	cout << j << " ans" << endl;
	auto it = find(vt.begin(), vt.end(), j);
	if(it!=vt.end()){
		cout << "inside " << *it;
		return vt.size();
	}
	vt.push_back(nums[j]);
	uniVal(nums, vt.back());
	
}



int getMaxSet(vector<int> &nums){
	vector<int> v;
    int i = 0;
    while(i < nums.size()){
        v.push_back(uniVal(nums, nums[i]));
        i++;
    }
    return v.size();
}


int main(){
	vector<int> num;
	int count = 0;
	int nums;
	cin >> nums;
	for(int i=0; i<nums; ++i){
		int vals;
		cin >> vals;
		num.push_back(vals);
	}
    int ans = getMaxSet(num);
    cout << ans << " ok ans" << endl;
}