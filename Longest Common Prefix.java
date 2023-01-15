import java.util.*;
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0)
                return "";
        
        //sorting the array of strings
            Arrays.sort(strs);
            String initial = strs[0];
            String end = strs[strs.length - 1];
            int result = 0;
            while(result < initial.length())
            {
                if (initial.charAt(result) == end.charAt(result))
                    result++;
                else
                    break;
            }
        
        //if condition result==0 true then initial substring is...
            return result == 0 ? "" : initial.substring(0, result);
    }
}
