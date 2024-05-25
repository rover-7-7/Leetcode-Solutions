class Solution {
public:
    bool chck(char a,char b){
        if(a=='[' && b==']')return true;
        if(a=='{' && b=='}')return true;
        if(a=='(' && b==')')return true;
        return false;
    }
    bool isValid(string s) {
        int i=0;
        if(s[i]==']' || s[i]=='}' || s[i]==')')return false;
        stack<char> st;

        while(i<s.size()){
         if(s[i]=='[' || s[i]=='{' || s[i]=='(')st.push(s[i]);
        else if (st.empty())
                return false;
        else if(st.size()>0 && chck(st.top(),s[i])){

            st.pop();
         }
         else return false;
        
        i++;}
if(st.size()==0)return true;
return false;
    }
};