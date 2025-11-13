class Solution {
    public boolean isPalindrome(int x) {
        int n = 0;
        for(int i=x; i>0; i=i/10){
            n = (n*10) + (i%10);
        }
        if(n==x){
            return true;
        }
        else{
            return false;
        }
    }
}