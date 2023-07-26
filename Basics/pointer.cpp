#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    int a = 8;
    int b = 10;
    int *ptr1 , *ptr2;
    
    ptr1 = &a;
    ptr2 = &b;
    
    int c;
    
    c = *ptr2;
    
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    cout << "This is the new program";
    
    
	
}