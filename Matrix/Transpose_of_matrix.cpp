#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

int main() {

    cout << "Welcome to Matrix Transpose method ";
    int m=3,n=3;
    cout << "\n\n";
    int arr[m][n];

// MAtrix creation

    for (int i = 0; i < m; i++){
        for(int j = 0; j < n ; j++){
            cout << "Enter the matrix elements " << i+1 << " " << j+1 << endl;
            cin >> arr[i][j];
        }
    }
    cout << "\n\n";

    int trans_arr[n][m];
    int dup_arr[m];

// Algorithm
    for(int i=0; i<n; i++){
        cout << "Loop contact "<< i+1<< endl;
        for(int j=0; j<m; j++){
            dup_arr[j] = arr[j][i]; 
            cout << "first loop " << dup_arr[j]<< endl;
        }

        for(int k =0; k < m; k++){
            //cout << "Second  "<<trans_arr[i][k] << endl;

            trans_arr[i][k] = dup_arr[k];  
            cout << "Second loop "<<trans_arr[i][k] << endl;
        }
        

    }

// Output

    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            cout << trans_arr[i][j];
        }
        cout << endl;
    }


    


}