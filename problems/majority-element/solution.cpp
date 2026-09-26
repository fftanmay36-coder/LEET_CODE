class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 =0;
        int count2 =0;
        int el;

        for (int i = 0 ; i<n ; i++) {
            if (count1 == 0) {
                count1 = 1;
                el = nums[i];
            }
            else if (nums[i] == el) {
                count1++;
            }
            else {
                count1--;
            }
        } 

        for (int i =0 ; i<n ; i++) {
            if (nums[i] == el) {
                count2 ++;
            }
        }
            if (count2 > n/2){
                return el;
            }
        return 0;
    }
};