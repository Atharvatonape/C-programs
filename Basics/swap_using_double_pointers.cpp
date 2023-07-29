#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    
    int arra[] = {1,2,3,4,5};
    int* start, *end;

    start = &(arra[0]);
    end = &(arra[sizeof(arra)]);

    for(int i=0; i<(sizeof(arra)); i++){

        if ( start != end  ){
            int temp = 0;
            temp = *start;
            *start = *end;
            end = &temp;

            start = &(arra[i+1]);
            end = &(arra[sizeof(arra)-1]);
        }
        

    }

    for(int i=0; i<(sizeof(arra)); i++){
        cout << arra[i];
    }


}