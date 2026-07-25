#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    int years =0;
    
    while(a<=b){
        a*=3;
        b*= 2;
        years++;
    }
    cout << years;
}