#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
        unordered_map<char, int> um;
        for(auto it: s){
            um[it]++;
        }
        for(auto it: um){
            cout<<it.first << " " <<it.second << endl;
        }
        return 0;
    }

int climbStairs(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        
        int one_step = 2;
        int two_step = 1;
        int all_step = 0;
        
        for(int i=2;i<n;i++){
            all_step = one_step + two_step;
            two_step = one_step;
            one_step = all_step;
        }
        return all_step;
}

int main(){
    int n = 5;
    // cout << climbStairs(n) << endl;
    firstUniqChar("sachini");
}