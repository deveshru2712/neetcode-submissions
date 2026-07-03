class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zCount = count(nums.begin(),nums.end(),0);
        if(zCount>=2){
            vector<int>temp(n,0);
            return temp;
        }else if(zCount==1){
            vector<int>temp;
            int t = 1;
            int zIndex = -1; 
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    zIndex=i;
                }else{
                    t*=nums[i];
                }
            }
            for(int i=0;i<n;i++){
                if(i!=zIndex){
                    temp.push_back(0);
                }else{
                    temp.push_back(t);
                }
            }
            return temp;
        }

        int t = 1;
        vector<int>temp;
        for(int i=0;i<n;i++){
            t*=nums[i];
        }
        for(int i=0;i<n;i++){
            temp.push_back(t/nums[i]);
        }
        return temp;
    }
};
