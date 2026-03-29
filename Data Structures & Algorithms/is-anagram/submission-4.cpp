#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int  freq1[26]={0};
    int  freq2[26]={0};

    bool isAnagram(string& s,string &t){
        for(char &c:s){
            int index= c -'a';
            freq1[index]++;
        }
        for(char &x:t){
            int index=x-'a';
            freq2[index]++;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        
        
        return true;
    }
};