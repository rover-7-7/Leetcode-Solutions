class Solution {
public:
  
    bool rotateString(string s, string goal) {
        for(int i=0;i<=s.size();i++){
            s.push_back(s[0]);
            string temp=s.erase(0,1);
            if(s==goal){
                return true;
            }
        }
        return false;
        
    }

};