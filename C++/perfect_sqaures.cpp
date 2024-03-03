#include <bits/stdc++.h>
using namespace std;

vector<int> getAllPerfectSqaures(int n){
	vector<int> temp;
	for(int i=1;i<n;i++){
		if(sqrt(i) == (int)sqrt(i)){
			temp.push_back(i);
		}
	}
	return temp;
}


int main(){
	int n = 12;
	vector<int> all_squares;
	all_squares = getAllPerfectSqaures(n);
	for(auto it:all_squares){
		cout << it <<endl;
	}
}