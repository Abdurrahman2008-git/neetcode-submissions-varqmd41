class Solution {
public:
    
int evalRPN(vector<string>& tokens) {

    while (tokens.size()>1)
    {
        for(int i=0;i<tokens.size();i++){

            if(tokens[i]=="+"
                ||tokens[i]=="-"
                ||tokens[i]=="*"
                ||tokens[i]=="/"
            ){
                int a =stoi(tokens[i-2]);
                int b =stoi(tokens[i-1]);
                int result=0;
                char op=tokens[i][0];
                
                switch (op)
                {
                    case '+':
                    result = a+b;
                    break;

                    case '-':
                    result = a-b;
                    break;

                    case '*':
                    result = a*b;
                    break;

                    case '/':
                    result = a/b;
                    break;
                }

                tokens.erase(tokens.begin()+i-2,tokens.begin()+i+1);
                tokens.insert(tokens.begin()+i-2,to_string(result));
                break;
            }
        }
    }
    return stoi(tokens[0]);
    
}
};
