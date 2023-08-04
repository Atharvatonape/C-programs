#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    long long toh(int N, int from, int to, int aux) {
        if (from > to || from > aux){
            cout << "move disk 1 from rod 1 to rod 3" << endl;
        }
        else if (to < from || to > aux){
            if(to < from){
                int temp;
                temp = to;
                to = from;
                from = temp; // Fixed incorrect variable assignment
                cout << "move disk 2 from rod 1 to rod 3" << endl;
                toh( N, from, to, aux);
            }
            else{
                int temp;
                temp = to;
                to = aux;
                aux = temp; // Fixed incorrect variable assignment
                cout << "move disk 2 from rod 2 to rod 3" << endl;
                toh(N, from, to, aux);
            }
        }
        else {
                cout << "move disk 1 from rod 1 to rod 3" << endl;
                cout << "move disk 2 from rod 2 to rod 3" << endl;

        }
        return 0; // Return statement added to prevent a compilation error
    }
};

int main() {
    int T;
    cin >> T; //testcases
    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N; //taking input N
        cout << "Test case " << t << ": " << "N = " << N << endl;

        //calling toh() function
        Solution ob;
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
