// the c++ code implementation
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        for(char c:s)  ans^=c;
        for(char d:t)  ans^=d;

        return ans;       
    }
};

// the python code implementation is 
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        a=0
        for i in s:
            a=a^ord(i)
        for i in t:
            a=a^ord(i)
        return chr(a)       
        
