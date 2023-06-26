class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count[2001]={0};
        int visited[1001]={0};
        for (int num: arr){
            count[1000+num]++;
        }
        for(int i=0; i <2001 ; i++){
            if(count[i]!=0){
                if(visited[count[i]]==1){
                    return false;
                }
                visited[count[i]]=1;
            }
        }
        return true;
        }
};
