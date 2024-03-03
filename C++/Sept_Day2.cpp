#include<bits/stdc++.h>
using namespace std;



int generateTrees(int n) {
    int dp[n + 1];
    fill_n(dp, n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] = dp[i] + (dp[i - j] * dp[j - 1]);
        }
    }
    for(auto it:dp){
    	cout<< it <<endl;
    }
    return dp[n];
    }


int main(){
	int n;
	cin >> n;
	cout << generateTrees(n);

}