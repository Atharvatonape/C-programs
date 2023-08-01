#include <iostream>
#include <stdio.h>
using namespace std;

int fact(int n, int k){
    if (n==0 || n==1){
        if(n ==0 ){
            k = 0;
            return k;
        }
        else{
            return k;
        }
    }
    fact(n-1, n*k);
}

int main() {
    cout << "Enter the number you want the factorial for ";
    int n, k;
    cin >> n;
    k = fact(n,1);
    cout << k;
}



