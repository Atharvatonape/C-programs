#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    cout << "Program for vector size and resizing " << endl;
    vector<int> arra;

    for (int i =1; i<11; i++){
        arra.push_back(i);
    }

    cout << arra.size() << endl;
    int ptr = 14;

    for (int i=0; i<10; i++){
        if(arra[i] == 5){
            arra[i] = ptr;

        }
    }

    int temp = arra.size();
    cout << temp << endl;

    for (int i=0; i<temp; i++){
        //cout<<"Entered thee loop" << endl;
        cout<< arra[i]<< ",";
    }
    cout<<endl;

    


}