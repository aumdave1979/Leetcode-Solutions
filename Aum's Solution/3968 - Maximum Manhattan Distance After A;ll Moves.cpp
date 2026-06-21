#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(string moves) {
        int underscore = 0;
        vector<int> pos = {0,0};
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                pos[0]-=1;
            }
            else if(moves[i]=='R'){
                pos[0]+=1;
            }
            else if(moves[i]=='U'){
                pos[1]+=1;
            }
            else if(moves[i]=='D'){
                pos[1]-=1;
            }
            else if(moves[i] == '_'){
                underscore++;
            }
        }
        return ((abs(pos[0])+underscore)+ abs(pos[1]));
    }
};