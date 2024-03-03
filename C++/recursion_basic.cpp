#include<bits/stdc++.h>
using namespace std;

void print_num(int n){
	if(n == 1){
		cout << 1 << endl;
		return;
	}
	print_num(n-1);
	cout << n << endl;
}

int main(){
    int n = 5;
    print_num(5);
}