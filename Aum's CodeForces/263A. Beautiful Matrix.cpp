#include<bits/stdc++.h>
using namespace std;

int main(){
    int column;
    int row;
    for(int i=0;i<5;i++){
        vector<int> tempp;
        for(int j=0;j<5;j++){
            int temp;
            cin >> temp;
            if(temp==1){
                row = i;
                column = j;
                break;
            }
            tempp.push_back(temp);
        }
    }
    int distance  = abs(2-row)+ abs(2-column);
    cout << distance;
}