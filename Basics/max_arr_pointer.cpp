#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    cout << "Maximum in a array using pointer " << endl;
    
    int arr[5] = {1,2,3,4,5};
    int *ptr = 0;

    for (int i=0; i<5; ++i){
        if(ptr < &arr[i]){
            cout << "Processing ........." << endl;
            ptr = &arr[i];
            cout << ptr << endl;
        }
    }
    cout << "The pointer is pointing the highest number in the array which is -- "<< *ptr ;


}