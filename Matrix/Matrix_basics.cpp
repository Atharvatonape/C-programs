#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    cout << "This is a 2d matrix basic program \n" << endl;
    int m = 3, n =3;
    int arra[m][n];

    for (int i=0; i<m; i++){
        for(int j = 0 ; j<n; j++){
            cout << "Enter the array element for the position \n"<< i+1 << "," << j+1 << endl;
            int temp;
            cin >> temp;
            arra[i][j] = temp;
        }
    }
    //display

    for (int i=0; i<m; i++){
        for(int j = 0 ; j<n; j++){
            cout << arra[i][j];
        }
        cout << endl;
    }
}