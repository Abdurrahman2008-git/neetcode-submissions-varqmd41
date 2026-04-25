class Solution {
public:
    string minWindow(string s, string t) {
    string res="";
      
    for(int i=0;i<s.length();i++){
        
        for(int j=i;j<s.length();j++){
            string substr=s.substr(i,j-i+1);
            
            vector<int> cntS(128,0),cntT(128,0);
            for(char c:substr) cntS[c]++;
            for(char c:t)cntT[c]++;

            bool ok=true;

            for(int k=0;k<128;k++){
                if(cntT[k]>cntS[k]){
                    ok=false;
                    break;
                }
            }if(ok) {
                if(res == "" || substr.length() < res.length()) {
                    res = substr;
                }
            } 
        }
    }
    return res;
}
};
