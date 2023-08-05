#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>

using namespace std;

int substring(vector<int> inp, vector<int> ans){

    if (inp.size() != 0){
        for(int i=0; i<inp.size() ; i++){
        ans.push_back(inp[i]);

        cout << inp[i] << endl;
        //cout << "Size of " << inp.size() << endl;
           
        for(int j=i+1; j<inp.size();j++){
            ans.push_back(inp[i]);
            ans.push_back(inp[j]);
            cout << inp[i] << inp[j] << endl;
        }
        
        inp.erase(inp.begin());
        substring(inp, ans);
            

        }
    }
    else{
        cout << inp[0];
    }
    //for (int i = 0; i< ans.size(); i++){
    //    cout << ans[i] <<endl;
    //}

}

int main(){

    cout << "Enter the array you want "<< endl;
    vector<int> inp{1,2,3,4};
    vector<int> par;
    vector<int> ans;
    substring(inp, par);


}