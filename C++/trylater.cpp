class Solution {
public:
    long long totalSum(vector<int>& num, int count){
        long long sums = 0;
        for(int j=0;j<num.size();j++){
            if(count!=j){
                sums += abs(num[count] - num[j]);
            }
            }
        return sums;
    } 
    vector<long long> getDistances(vector<int>& arr) {
        vector<long long> ans;
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        int count = 0;
        for(auto a:arr){
            long long sums = 0;
            vector<int> nums = mp[a];
            cout << count;
            if(nums.size() == 1){
                cout << "yes" << endl;
                sums = 0;
            }
            else{
                sums = totalSum(nums, count);
                count++;
            }
            ans.push_back(sums);
            
        }
        return ans;
    }
};