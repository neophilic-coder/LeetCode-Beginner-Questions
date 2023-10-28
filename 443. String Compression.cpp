class Solution {
public:
    int compress(vector<char>& chars) {
        int count;
        int i = 0;
        int ansIndex =0 ; //not taking a separate space, we are incorporating answer in the input character array
        int n = chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            int count = j-i;
            chars[ansIndex++] = chars[i];
            //for separating the numbers more than 10 value
            
            if(count>1){
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ansIndex++] = ch;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};
