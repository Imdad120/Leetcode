class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c = 0;
        char a = '\0'; // Fixed: removed 'int' and used null character
        char b = '\0'; // Fixe
        
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                c++;
                if (c == 1) {
                    a = s1[i];
                    b = s2[i];
                } else if (c == 2) {
                    // Fixed: wrapped the entire condition in outer parentheses
                    if ((a != s2[i]) || (b != s1[i])) {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return (c == 0) || (c == 2);
    }
};
