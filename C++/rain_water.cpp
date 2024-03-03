#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> maxL(n);
    vector<int> maxR(n);
    vector<int> water(n);
    
    maxL[0] = height[0];
    for(int i=1;i<n;i++){
        maxL[i] = max(maxL[i-1], height[i]);
    }
    
    maxR[n-1] = height[n-1];
    for(int i=n-2;i>=0;i--){
        cout << maxR[i+1] << " " << height[i] << endl;
        maxR[i] = max(maxR[i+1], height[i]);
    }
    
    for(int i=0;i<n;i++){
        water[i] = min(maxL[i], maxR[i]) - height[i];
    }
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + water[i];
    }

    for(auto it: maxL){
        cout << "maxL " << it << " ";
    }

    cout << endl;

    for(auto it: maxL){
        cout << "maxR " << it << " ";
    }

    return sum;
}

int main(){
    vector<int> height = {4,2,0,3,2,5};
    int ans = trap(height);
    cout << ans << endl;
}