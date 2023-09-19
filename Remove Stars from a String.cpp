class Solution {
public:
    string removeStars(string s) {
        string ans ="";
        int i = 0;
        while(i<s.length()){
            if(s[i] == '*'){
                if(!ans.empty())
                    ans.pop_back();
                i++;
            }
            
            else{
                ans+= s[i];
                i++;
            }
        }
        return ans;
    }
};
