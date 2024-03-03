#include<bits/stdc++.h>
using namespace std;

int searchElement(vector<int> &arr, int left, int right, int target){
        int index = -1;
        while(left<right){
            int mid = left + (right-left)/2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] > target){
                right = mid - 1; 
            } 
            else{
                left = mid + 1;
            }
        }
        cout<<index<<endl;
        return index;
    }
    
    int findInMountainArray(int target, vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        while(start<end){
            int mid = start + (end-start) / 2;
            if(arr[mid] > arr[mid + 1]){
                end = mid;
            } 
            else{
                start = mid + 1;
            }
        }
        cout<<"start "<<start<<" end "<<end<<endl;
        int ans = searchElement(arr, 0, start, target);
        cout<<"ans 1 "<<ans<<endl;
        if(ans == -1){
            ans = searchElement(arr, start, n, target);
        }
        cout<<"ans 2 "<<ans<<endl;
        return ans;
}

int main(){
    vector<int> test = {0, 1, 2, 4, 2, 1};
    int target = 2;
    int ans = findInMountainArray(target, test);
    cout<<ans<<endl;

}