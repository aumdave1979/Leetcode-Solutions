#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> approch1(vector<int> &arr)
{
    vector<vector<int>>ans;
    int mini=INT32_MAX;
    for (int i=0;i<arr.size();i++){
        for (int j = i+1;j<arr.size();j++){
            int difference = abs(arr[i] - arr[j]);
            if (difference < mini){
                mini=difference;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++){
        for (int j=i+1;j<arr.size();j++){
            int diff = abs(arr[i] - arr[j]);
            if (diff == mini){
                int a = min(arr[i], arr[j]);
                int b = max(arr[i], arr[j]);
                ans.push_back({a, b});
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {4,2,1,3};
    vector<vector<int>> ans;
    int mini = INT32_MAX;
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        int diff = arr[i]-arr[i-1];
        if(diff <= mini){
            mini = diff;
        }
    }
    for(int i = 1;i<arr.size();i++){
        int diff = arr[i]-arr[i-1];
        if(diff == mini){
            ans.push_back({arr[i-1],arr[i]});
        }
    }
}

