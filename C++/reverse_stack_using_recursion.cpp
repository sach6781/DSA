#include<bits/stdc++.h>
using namespace std;


void reverse_st(stack<int> &st){
	
}



stack<int> reverse_stack(stack<int> &st, int size){
	if(size == 0 || size == 1) return st;
	reverse_st(st);
	return st;
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(3);
    st.push(1);
    st.push(6);
    stack<int> ans = reverse_stack(st, 5);
    while(ans.size() != 0){
    	int x = ans.top();
    	cout << x << endl;
    	ans.pop();
    }    
}