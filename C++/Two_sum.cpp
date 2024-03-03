#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l =0;
        int r=n-1;
        while(l<r){
            if(numbers[l] + numbers[r] == target) return {l+1,r+1};
            else if(numbers[l] + numbers[r] > target){
                r--;
            }
            else{
                l++;
            }
        }
        return {};
    }

int main(){
    vector<int> input = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(input, target);
    for(auto it:ans){
        cout<<it<<endl;
    }
}
