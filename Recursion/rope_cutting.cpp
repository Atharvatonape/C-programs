#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int rope(int n, int a, int b, int c, vector<int> par){
    if(n != 0){
        if(n-a == 0 || n-b == 0 || n-c == 0 ){
            par.push_back(a);
        }
        else if(n-a != 0){
            par.push_back(a)
            rope(n-a, a,b,c,par);
        }
        else if(n-b != 0){
            par.push_back(b)
            rope(n-b, a,b,c,par);
        }
        else if(n-c != 0){
            par.push_back(c)
            rope(n-c, a,b,c,par);
        }

    }    

}

int main(){
    cout << "Enter the number you want to solve for "<< endl;
    int n,a,b,c;
    cin >> n;
    cout << "Enter the 3 parameters you want "<< endl;
    vector<int> ans;
    vector<int> par;
    ans = rope(n, a , b, c, par);   

}