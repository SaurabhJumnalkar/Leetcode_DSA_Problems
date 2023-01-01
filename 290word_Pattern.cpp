class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string str;
        unordered_map<string , char> mp1;
        unordered_map<char , string> mp2;
        int i = 0;
        while(ss>>str){
            if(i==pattern.size()) return false;
            if(mp1.find(str)!= mp1.end() || mp2.find(pattern[i])!=mp2.end()){
                if(mp1[str]!=pattern[i]&&mp2[pattern[i]]!=str) return false;

            }else{
                mp2[pattern[i]] = str; 
                mp1[str] = pattern[i];
            }
            i++;
        }
        return true&&i==pattern.size();
    }
};