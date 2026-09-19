class Solution {
public:
    int secondHighest(string s) {
        string update = "";
        for (unsigned char c : s) {
            if (std::isdigit(c)) {
                update += c;
            }
        }
        
        if (update.empty())
            return -1;

        int largest = -1;
        int slargest = -1;
        
        // Instead of stoll + while loop, just loop through your update characters directly:
        for (char c : update) {
            int d = c - '0';
            if (d > largest) {
                slargest = largest;
                largest = d;
            }
            else if (d > slargest && d != largest) {
                slargest = d;
            }
        }

        return slargest;
    }
};