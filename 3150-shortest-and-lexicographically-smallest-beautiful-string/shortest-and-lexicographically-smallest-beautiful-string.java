class Solution {
    public String shortestBeautifulSubstring(String s, int k) {

        int count = 0;
        int i = 0;
        int j = 0;

        String ans = "";

        while (j < s.length()) {

            // j wale character ko window me add karo
            if (s.charAt(j) == '1') {
                count++;
            }

            j++;

            // Agar exactly k ones hain
            while (count == k) {

                // Current substring
                String current = s.substring(i, j);

                // Agar pehli valid substring hai
                if (ans.equals("")) {
                    ans = current;
                }

                // Agar current substring chhoti hai
                else if (current.length() < ans.length()) {
                    ans = current;
                }

                // Agar dono ki length same hai
                else if (current.length() == ans.length()) {

                    // Lexicographically chhoti string choose karo
                    if (current.compareTo(ans) < 0) {
                        ans = current;
                    }
                }

                // Ab i ko aage move karo
                // Agar i wala character 1 hai,
                // to count ko decrease karo
                if (s.charAt(i) == '1') {
                    count--;
                }

                i++;
            }
        }

        return ans;
    }
}