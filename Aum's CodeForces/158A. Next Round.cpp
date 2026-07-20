#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n;
    cin >> k;   
    int count=0; 
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int maxi = arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=maxi && arr[i]>0){
            count++;
        }
    }
    cout << count;
}