#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count =0;
    int temp = n/5;
    count+=temp;
    if(n%5 == 0){
        cout << count;
    }
    else{
        cout << count + 1;
    }
    return 0;
}