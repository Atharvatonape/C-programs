#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){

    vector<int> arra;
    int *min , *max ;
    int temp =0;
    min = &temp;
    max = &temp;

    arra.push_back(3);
    arra.push_back(4);
    arra.push_back(5);
    arra.push_back(6);

    for (int i=0; i<4; i++){

        if (i == 0){
            *min = arra[i];
            *max = arra[i];   
            }

        if (*max < arra[i]){

            max = &arra[i];

        }
        if (*min > arra[i]){

            *min = arra[i];
            
        }
    }

    cout << *min << endl;
    cout << *max <<endl;


}