#include<bits/stdc++.h>
using namespace std;

int main(){
	int num1;
	int num2;
	int b;
	cin >> b >> num1 >> num2;

    int sums = 0;
    int carry = 0;
    int p = 1;

	while(num1 > 0 || num2 > 0 || carry > 0){
		int dig1 = num1 % 10;
		int dig2 = num2 % 10;
		num1 = num1 / 10;
		num2 = num2 / 10;
		int dig = dig1 + dig2 + carry;

        carry = dig / b;
        dig = dig % b;

        sums = sums + (dig * p);
        p = p * 10;

	}

	cout << "Ans - " << sums;  
}