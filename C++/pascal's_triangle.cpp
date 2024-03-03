#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
        }



        
        for(auto it:r){
        	for(auto it1:it){
        		cout << it1 << endl;
        	}
        }
    }

int main(){
	int n;
	cin >> n;
	generate(n);
}