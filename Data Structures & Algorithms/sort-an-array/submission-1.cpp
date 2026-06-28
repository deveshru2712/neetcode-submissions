class Solution {
   public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size() - 1;
        Divide(0, n, nums);
        return nums;
    }

    void Divide(int start, int end, vector<int>& temp) {
        if (start >= end) return;
        int mid = start + (end - start) / 2;
        Divide(start, mid, temp);
        Divide(mid + 1, end, temp);
        Merge(start, mid, end, temp);
    }

    void Merge(int start, int mid, int end, vector<int>& temp) {
        vector<int> t;

        int i = start;
        int j = mid + 1;

        while (i <= mid && j <= end) {
            if (temp[i] <= temp[j]) {
                t.push_back(temp[i]);
                i++;
            } else {
                t.push_back(temp[j]);
                j++;
            }
        }

        while (i <= mid) {
            t.push_back(temp[i]);
            i++;
        }

        while (j <= end) {
            t.push_back(temp[j]);
            j++;
        }

        for (int k = 0; k < t.size(); k++) {
            temp[start + k] = t[k];
        }
    }
};