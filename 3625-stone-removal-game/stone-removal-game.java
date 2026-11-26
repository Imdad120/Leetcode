class Solution {
    public boolean canAliceWin(int n) {
        int i = 10 ; 
        boolean Alice = true;
        while ( n >= i ){

            n = n-i;
            i--;
            Alice = !Alice;
        }
         if(Alice != true ) return true ;
         return false ;
    }
}