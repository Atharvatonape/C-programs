#include <iostream>
using namespace std;

class Solution {
public:
    void printArrayRecursively(int arr[], int n) {
        if (n > 0) {
            printArrayRecursively(arr, n - 1); 
            cout << arr[n-1]; // Recursive call
        }return; // Base condition
        
    }
};

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;
    while(T--) {
        int N;
        cout << "Enter the size of the array: ";
        cin >> N;
        int arr[N];
        cout << "Enter the array elements: ";
        for(int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.printArrayRecursively(arr, N);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

//  if (n-1 >= 0){
//         cout << arr[n-1];
//         printArrayRecursively(arr, n-1);