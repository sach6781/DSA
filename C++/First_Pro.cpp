#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int num;
      cin>>num;
      int digit_sum = 0;
      while(num != 0){
      	int last_dig = num % 10;
        digit_sum = digit_sum + last_dig;
        num = num / 10;
      }
      cout << digit_sum << endl;

    }
}