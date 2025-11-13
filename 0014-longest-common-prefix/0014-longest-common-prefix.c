class Solution {
    public String longestCommonPrefix(String[] strs) {
        int len = strs.length;
        int smal = strs[0].length();
        for(int i=1; i<len; i++){
            if(strs[i].length()<smal){
                smal=strs[i].length();
            }
        }
        int count = 0;
        int cnt=0;
        boolean x = true;
        for(int i=0; i<smal; i++){
            cnt=0;
            for(int j = 0; j<len-1; j++){
                if(strs[j].charAt(i)==strs[j+1].charAt(i)){
                    cnt++;
                }
                else{
                    return strs[0].substring(0,count);
                }
            }
            
            if(cnt==(len-1)){
                count++;
            }
        }
        return strs[0].substring(0,count);
    }
}