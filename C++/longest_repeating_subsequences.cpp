#include<bits/stdc++.h>
using namespace std;

int getSubsequences(string s, string t){
            int m = t.size();
        int n = s.size();
        vector<vector<int>> dp(m + 1, vector<int> (n + 1, 0));
        for (int j = 0; j <= n; j++) dp[0][j] = 1;
        for(int j=1;j<=n;j++){
            for(int i=1;i<=m;i++){
                dp[i][j] = dp[i][j - 1] + (t[i - 1] == s[j - 1] ? dp[i - 1][j - 1] : 0);
            }
        }
        cout<<dp[m][n]<<endl;
        return dp[m][n];
    }

int main(){
    string s = "rabbbit";
    string t = "rabbit";
    cout<<"hi"<<endl;
    int ans = getSubsequences(s, t);
    cout<<ans<<endl;
}