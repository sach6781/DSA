/* You are given a string s and an integer k. You can choose one of the first k letters of s and append it at the end of the string..

Return the lexicographically smallest string you could have after applying the mentioned step any number of moves.

Input: s = "cba", k = 1
Output: "acb"
Explanation: 
In the first move, we move the 1st character 'c' to the end, obtaining the string "bac".
In the second move, we move the 1st character 'b' to the end, obtaining the final result "acb".

*/

#include<bits/stdc++.h>
using namespace std;


string orderlyQueue(string s, int k) {
        int n = s.length();
        if(k == 1){
            string ans = s;
            for(int i=1; i<n; i++){
                string temp = "";
                for(int j=0; j<n; j++){
                    temp += s[(i+j)%n]; 
                }
                bool flag = true;
                for(int j=0; j<n ;j++){
                    if(ans[j] < temp[j]){
                        flag = false;
                        break;
                    }
                    else if(ans[j] > temp[j]){
                        break;
                    }
                    
                }
                if(flag) ans = temp;
            }
            return ans;
        }
        sort(s.begin(), s.end());
        return s;
        
}

int main(){
    string s = "cba";
    int k = 1;
    string ans = orderlyQueue(s, k);
    cout << ans << endl;
    return 0;

}