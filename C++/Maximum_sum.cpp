#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        map<int, int> m;
        count = 0;
        for(auto it:nums){
        m[it] = count++;
    }
    }

int main(){
    int n;
    int max_sum = -1;
    int sums = 0;
    cin>>n;
    vector<int> v = {2,2, 1, 1, 4,5,4};
    int ans = singleNumber(v);
    cout << "ans " << ans << endl;
    for(int i=0;i<n;i++){
       if(v[i]>=0) sums += v[i];
    }
    cout << max_sum << " " <<sums<<endl;
}