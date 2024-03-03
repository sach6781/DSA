#include<bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int i, j;
        int count[101] = {0};
        for(i = 0; i < nums.size(); i++) {
            cout<<nums[i]<<endl;
            count[nums[i]]++;
            cout<<count[nums[i]]<<endl;
            cout<<endl;
        }
        for(int i = 0;i<101;i++){
        	cout<<count[i]<<endl;
        }
        for(i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }
        for(i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                answer.push_back(0);
            else
                answer.push_back(count[nums[i] - 1]);
                
        }
        return answer;      
    }

int main(){
    vector<int> arr = {8,1,2,2,3};
    smallerNumbersThanCurrent(arr);
}