#include<bits/stdc++.h>
using namespace std;

void insert_num(stack<int> &st, int num){
	if(st.size() == 0 || st.top() < num){
		st.push(num);
		return;
	}
	int temp = st.top();
	st.pop();
	insert_num(st, num);
	st.push(temp);
}

void sort_st(stack<int> &st){
	if(st.size() == 1){
		return;
	}
	int temp = st.top();
	st.pop();
	sort_st(st);
	insert_num(st, temp);
}

int main(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(3);
    st.push(1);
    st.push(6);
    st.push(5);
    sort_st(st);
    while(st.size()!=0){
    	int x = st.top();
        cout << x << endl;
        st.pop();
    }
    
}