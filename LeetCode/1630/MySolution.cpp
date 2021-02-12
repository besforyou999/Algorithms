class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        int len = l.size();
        
        vector<bool> ans;
        
        for(int i=0; i < len ; i++) {// len queries
        
            int pl = l[i];
            int pr = r[i];
            
            vector<int> temp;
            
            for(int j=pl ; j <= pr ; j++) {
                temp.push_back(nums[j]);
            }
            
            sort(temp.begin(), temp.end());
            
            int diff = temp[1] - temp[0];
            int check = 1;
            
            for(int z=1; z < temp.size() ; z++) {
                if(temp[z] - temp[z-1] != diff) {
                    check = 0;
                }
            }
            
            if(check == 1) {
                ans.push_back(true);
            }
            else if(check == 0 ) {
                ans.push_back(false);
            }
        }
        
        
        return ans;
    }
};
