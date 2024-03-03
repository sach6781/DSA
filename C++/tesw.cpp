#include<bits/stdc++.h>
using namespace std;


string MaxNInArr(int a[], int n, string b = ""){
            if(n==0) return b;
            int max = a[0];
            int indexOfMax = 0;
            int newArr[n];
            string valueF;
            for(int i = 0; i<n; i++){
                if(max < a[i]){
                    max = a[i];
                    indexOfMax = i;
                }
            }
            
            int c = 0;
            for(int i = 0; i<n; i++){
                if(indexOfMax != i){
                    newArr[c] = a[i];
                    c = c + 1;
                }
            }
            
            if(n > 0){
                b = b + to_string(max);
                valueF =  MaxNInArr(newArr, n - 1, b);
            }else{
                valueF =  b;
            }
            
            return valueF;
            
        }

string MaxNumber(int a[], int n)
        {
            return MaxNInArr(a, n);
        }



int main(){
    int n = 14;
    int arr[n] = {2,5 ,4 ,9 ,5 ,3 ,2 ,5 ,4 ,6 ,0 ,3 ,5 ,7};
    multiset<int> se;
    for(int num : arr){
        se.insert(num);
    }
    string ans = "";
    int a = 0;
    for(auto it = se.rbegin(); it!=se.rend();it++){
        ans = ans + to_string(*it);
    }
    cout << ans << " " << a; 
}