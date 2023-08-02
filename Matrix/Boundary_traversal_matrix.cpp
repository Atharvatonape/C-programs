#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    cout << "Welcome to Snake traversal method in MAtrix 12369874";
    int m=0,n=2;
    cout << "\n\n";
    int arr[m][n];
//
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n ; j++){
            cout << "Enter the matrix elements " << i+1 << " " << j+1 << endl;
            cin >> arr[i][j];
        }
    }
    int temp =1;
    
    for(int temp = 1; temp < 5; temp++){

        if(temp == 1){
            for(int i=0; i < 1; i++){
                for(int j=0; j < n ; j++){
                    cout << arr[i][j] << " ";
                }
                //cout << endl;
            }
            
        }
        else if (temp == 3){
            for(int i=m-1; i == m-1; i++){
                for (int j=n-2; j >=0 ; j--){
                    cout << arr[i][j]<< " ";
            }
            //cout << endl;
            }
        }
        
        else if (temp == 2){
            for(int i=1; i < m; i++){
                cout << arr[i][n-1]<< " ";
            }
            //cout << endl;
        }
        else {
            for(int i=m-1; i > 0; i--){
                if(i != m-1){
                    cout << arr[i][0]<< " ";
                }
                
            }
            //cout << endl;
        }

    }

  }



