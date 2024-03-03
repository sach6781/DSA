#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	int b;
	int decimal;
	cin >> num;
	cin >> decimal;
	cin >> b;

    int total = 0;
    int p = 1;
	while(num > 0){
		int rem = num % b;
		num = num / b;
		total = total + rem * p;
		p = p * 10;
	}

	cout << "Ans - " << total;  
}