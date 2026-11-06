the c++ code implementation is 
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans;
        string word="";
        while(ss >> word)
        {
            if(!ans.empty()) ans= " "+ans;
            ans=word+ans;
        }
        return ans;
        
    }
};
