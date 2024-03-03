#include<bits/stdc++.h>
using namespace std;


void solve(stack<int> &st, int k){
	if(k == 1){
		st.pop();
		return;
	}
	int temp = st.top();
	st.pop();
	solve(st, k-1);
	st.push(temp);
	return;
}



stack<int> delete_mid(stack<int> &st, int size){
	if(st.size() == 0) return st;
    int k = (size/2) + 1;
	solve(st, k);
	return st;
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(3);
    st.push(1);
    st.push(6);
    stack<int> ans = delete_mid(st, 5);
    while(ans.size() != 0){
    	int x = ans.top();
    	cout << x << endl;
    	ans.pop();
    }    
}