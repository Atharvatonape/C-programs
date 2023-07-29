#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    cout << "Welcome to Snake traversal method in MAtrix ";
    int m=3,n=3;
    cout << "\n\n";
    int arr[m][n];

    for (int i = 0; i < m; i++){
        for(int j = 0; j < n ; j++){
            cout << "Enter the matrix elements " << i+1 << " " << j+1 << endl;
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        if (i %2 == 0){
            
            for(int j = 0; j < n ; j++){
            cout << arr[i][j];
            }

        }
        else {
            for(int j = m-1; j>=0 ; j--){
                cout << arr[i][j];
            
            }
        }
  }
}


