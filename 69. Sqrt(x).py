class Solution(object):
    def mySqrt(self, x):
        ans=0;
        if(x>=0):
            ans =(int)(math.sqrt(x))
            return ans
        else:
            return 0
