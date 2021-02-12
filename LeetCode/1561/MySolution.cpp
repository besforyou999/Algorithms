class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int len = piles.size();
        
        int ans = 0;
        
        sort( piles.begin(), piles.end() );
        
        for(int i = 1 ; i <= len/3 ; i++ ) {
            ans += piles[len - ( i * 2 )];
        }
                
        return ans;
    }
};
