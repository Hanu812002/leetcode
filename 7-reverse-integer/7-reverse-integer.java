class Solution {
    public int reverse(int x) {
        String a = x + "";
        String res = "";
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) == '-')
                continue;
            res = a.charAt(i) + res;
        }
        if (a.charAt(0) == '-')
            res = "-" + res;
        try {
            int uwu = Integer.parseInt(res);
            return uwu;
        }
        catch (NumberFormatException e) {
            return 0;
        }
    
    }

}