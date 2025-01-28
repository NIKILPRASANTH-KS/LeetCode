class Solution {
    public boolean judgeSquareSum(int c) {
        long num=c;
        for(long i=0;i*i<=c;i++){
            long diff=num-i*i;
            long root=(long)Math.sqrt(diff);

            if(root*root-diff==0) return true;    
        }
        return false;
    }
}