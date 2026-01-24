#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int size = tokens.size();
        stack<int> st;
        for(int i=0;i<size;i++){
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                int n;
                n = stoi(tokens[i]);
                st.push(n);
            }
            else{
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                if(tokens[i] == "+"){
                    int sum = first+second;
                    st.push(sum);
                }
                else if(tokens[i]=="-"){
                    int sub = second - first;
                    st.push(sub);
                }
                else if(tokens[i]=="*"){
                    int mul = first*second;
                    st.push(mul);
                }
                else{
                    int div = second/first;
                    st.push(div);
                }
            
            }
        }
    return st.top();
    }
};