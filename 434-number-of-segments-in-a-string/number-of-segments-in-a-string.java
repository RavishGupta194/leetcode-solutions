class Solution {
    public int countSegments(String s) {
        if(s.length()==0){
            return 0;
        }
        String r = s.trim();
        if(r.length()==0){
            return 0;
        }

        String[] result = r.split("\\s+");
        return result.length;
    }
}