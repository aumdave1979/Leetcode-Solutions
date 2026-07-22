#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int upCount=0;
    int loCount=0;

    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            upCount++;
        }
        else
        {
            loCount++;
        }
    }
    if(upCount<=loCount){
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
}