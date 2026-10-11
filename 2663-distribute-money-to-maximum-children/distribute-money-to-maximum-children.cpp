class Solution {
public:
    int distMoney(int money, int children) {
        money = money - children;
        if(money < 0)
            return -1;
        
        int ans = min(money / 7, children);
        money = money - ans * 7;
        children = children - ans;
        
        if(children == 0 && money > 0) {
            ans--;
        }

        if(children == 1 && money == 3) {
            ans--;
        }

        return ans;
    }
};