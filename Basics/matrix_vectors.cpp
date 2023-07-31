#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    vector<vector <int> > d_mat;

    for(int i=0; i<3 ;i++){
        vector<int> temp;
        for(int j=0; j<3; j++){
            temp.push_back(i);
        }
        d_mat.push_back(temp);
        }

    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
        cout << d_mat[i][j];
       }
       cout<<endl;
    }


}