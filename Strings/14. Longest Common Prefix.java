/*better approach*/

class Solution {
    public String longestCommonPrefix(String[] strs) {
        String res = strs[0];
        for(int i = 1; i < strs.length; i++){
            while(!strs[i].startsWith(res)){
                res = res.substring(0, res.length() - 1);
            }
        }
        return res;
    }
}

/*
class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder res = new StringBuilder(strs[0]);
        for(int i = 1; i < strs.length; i++){
            String item = strs[i];
            int k = 0, j = 0;
            while(k < item.length() && j < res.length()){
                if(item.charAt(k) != res.charAt(j)){
                    break;
                }
                k++;
                j++;
            }
            while(j < res.length()){
                res.deleteCharAt(j);
            }
        }
        return res.toString();
    }
}
*/
