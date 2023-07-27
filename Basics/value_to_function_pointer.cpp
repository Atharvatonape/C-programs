#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

void add(int* a1 , int* b1, int* temp1){
    *temp1 = *a1 + *b1;
}

int main(){
    int aa = 10, bb = 10, temp =0;
    int* a = &aa;
    int* b = &bb;
    int* te = &temp;
    add(a,b,te);
    cout << *te;
}