#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    for(int i=0;i<n;i++){
        vector<int>confi;
        for(int j=0;j<3;j++){
            int temp;
            cin >> temp;
            confi.push_back(temp);
        }
        int count1=0;
        for(int k=0;k<confi.size();k++){
            if(confi[k]==1){
                count1++;
            }
        }
        if(count1>=2){
            count++;
        }
    }
    cout << count;
}