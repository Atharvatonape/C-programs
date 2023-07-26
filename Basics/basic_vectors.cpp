#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    cout <<"This is the program for the vectors " <<endl;
    vector<int> arra;
    for(int i=1; i<6; i++){
        arra.push_back(i);
    }

    for (int i=0; i<5 ;i++){
        cout << arra[i] << endl;
    }

}