#include<bits/stdc++.h>
using namespace std;

bool sortByVal(const pair<char, int> &a, 
               const pair<char, int> &b) 
{ 
    return (a.second < b.second); 
}


char getSlowestKey(int arr[], string &s, int n){
	map<char, int> m;
	int temp = 0;
	for(int i=0; i<n ;++i){
		if(m.find(arr[i]) != m.end() && m[arr[i]] > arr[i]){
		m[s[i]] = arr[i] - temp;
		temp = arr[i];
	}
	else{
		m[s[i]] = arr[i] - temp;
		temp = arr[i];
	}
	}

	vector<pair<char, int>> vec;
    map<char, int> :: iterator it2;
    for (it2=m.begin(); it2!=m.end(); it2++) 
    {
       vec.push_back(make_pair(it2->first, it2->second));
    }

   sort(vec.begin(), vec.end(), sortByVal);
    
   char ans = vec.back().first;
   for(auto a:m){
   	cout << a.first << " " << a.second << endl;
   }
   return ans;
}


int main(){
   int n = 8;
   int releaseTimes[n] = {19,22,28,29,66,81,93,97};
   string keysPressed = "fnfaaxha";
   char ans = getSlowestKey(releaseTimes, keysPressed, n);
   cout << ans << endl;
   return 0;

}