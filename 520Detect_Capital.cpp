class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool ans = true;
        for(int i = 0 ; i < word.size() ; i++) {
            if(word[i] < 65 || word[i] > 90) {
                ans = false;
                break;
            }
        }
        if(ans) return true;
        ans = true;
          for(int i = 0 ; i < word.size() ; i++) {
            if(word[i] < 97 || word[i] > 122) {
                ans = false;
                break;
            }
        }
        if(ans) return true;

        ans = true;
           if(word[0] < 65 && word[0] > 90) return false;
           for(int i = 1 ; i < word.size() ; i++)
           {
               if(word[i] < 97 || word[i] > 122) return false;
           }
           return true;

    }
};