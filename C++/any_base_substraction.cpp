#include<bits/stdc++.h>
using namespace std;

int main(){
	int num1;
	int num2;
	int b;
	cin >> b >> num1 >> num2;

    int subs = 0;
    int c = 0;
    int p = 1;

	while(num2 > 0){
		int d1 = num1 % 10;
		int d2 = num2 % 10;
		num1 = num1 / 10;
		num2 = num2 / 10;
		
		int d = 0;
		d2 = d2 + c;

		if(d2 >= d1){
			c = 0;
			d = d2 - d1;
		}else{
			c = -1;
			d = d2 - d1 + b;
		}

        subs = subs + (d * p);
        p = p * 10;

	}

	cout << "Ans - " << subs;  
}