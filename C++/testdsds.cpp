#include<bits/stdc++.h>
using namespace std;


int maxDistance(vector<int>& colors) {
        int maxDist = INT_MIN;
        for(int i=0;i<colors.size();i++){
            int temp = colors[i];
            for(int j=i;j<colors.size();j++){
                if(temp != colors[j]){
                    maxDist = max(abs(j - i), maxDist);
                }
            }
        }
        return maxDist;
    }

int main(){
    vector<int> vect = {1,1,1,6,1,1,1};
    int ans = maxDistance(vect);
    cout << ans << endl;
}