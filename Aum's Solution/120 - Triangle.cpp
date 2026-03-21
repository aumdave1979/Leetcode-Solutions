#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> triangle = {{2},{3,4},{6,5,7},{4,1,8,3}};
    int sum = 0;
    for(int i = 0; i < triangle.size(); i++){
        int mini = triangle[i][0];
        for(int j = 1; j < triangle[i].size(); j++){
            if(triangle[i][j] < mini){
                mini = triangle[i][j];
            }
        }
        sum += mini;
    }
    cout << sum << endl;
}