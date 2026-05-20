class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0;
        int c1=0;
        int c2=0;
        for(auto it:nums){
            if(it==0) c0++;
            else if (it==1) c1++;
            else c2++;
        }
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(c0>0){
                nums[i]=0;
                c0--;
            }else if(c1>0){
                nums[i]=1;
                c1--;
            }else{
                nums[i]=2;
                c2--;
            }
        }
    }
};