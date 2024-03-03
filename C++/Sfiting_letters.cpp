#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s = "abc";
	string ans = "";
	vector<int> v = {3, 5, 9};
	int size = v.size();
	for(int i = 0; i<size; i++){
		switch(i){
			case 0:
			   ans.push_back(s[i] + v[i]);
			   break;
			case 1:
			   ans.push_back(s[i] + v[i]);
			   break;
			case 2:
			   ans.push_back(s[i] + v[i]);
			   break;
		}
	}
	cout<<ans<<endl;
	
}