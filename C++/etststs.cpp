#include<bits/stdc++.h>
using namespace std;


    long long totalSum(vector<int>& num, int count){
        long long sums = 0;
        for(int j=0;j<num.size();j++){
            if(count!=j){
                sums += abs(num[count] - num[j]);
            }
            }
        return sums;
    } 

   int main(){
   	int count =0;
   	vector<int> nums = {0, 2, 3};
   	long long sums = totalSum(nums, 1);
   	cout << sums;
   }