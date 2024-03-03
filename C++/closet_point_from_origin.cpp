#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{ 
    return a.second < b.second;
}

bool cmp1(pair<int, int>& a,
         pair<int, int>& b)
{ 
    return a.second < b.second;
}

vector<pair<int, int>> sortMap(map<int, int> M)
{

    vector<pair<int, int> > A;

    for (auto& it : M) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    return A;

}

void sortMap1(map<int, int>& M)
{

    vector<pair<int, int> > A;
    //reverse(A.begin, A.end());
    for (auto& it : M) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp1);

}
int main(){
	vector<int> input = {3, 3, 1, 2 ,1};
	map<int, int> mp;
	for(auto it:input){
		mp[it]++;
	}
	for(auto m:mp){
		cout << m.first << " " <<m.second << endl;
	}
	cout << "** " << endl;
	vector<pair<int, int>> temp1 = sortMap(mp);
	for(auto it:temp1){
		cout << it.first << " " <<it.second << endl;
	}
	sortMap1(mp);
	vector<vector<int>> ans;
	for(auto m:mp){
		vector<int> temp;
		temp.push_back(m.first);
		temp.push_back(m.second);
		ans.push_back(temp);
	}
	reverse(ans.begin(), ans.end());
	for(auto a:ans){
		for(auto b:a){
			cout << b << endl;
		}
	}
	return 0;
}