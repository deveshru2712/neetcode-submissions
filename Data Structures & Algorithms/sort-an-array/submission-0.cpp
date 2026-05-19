class Solution {
   public:

    void merge(vector<int>& x, int start, int middle, int end) {
        int left = start;
        int right = middle + 1;

        vector<int> temp;

        while (left <= middle && right <= end) {
            if (x[left] <= x[right]) {
                temp.push_back(x[left]);
                left++;
            } else {
                temp.push_back(x[right]);
                right++;
            }
        }

        while (left <= middle) {
            temp.push_back(x[left]);
            left++;
        }

        while (right <= end) {
            temp.push_back(x[right]);
            right++;
        }

        // Copy temp back into original array
        for (int i = start; i <= end; i++) {
            x[i] = temp[i - start];
        }
    }

    void mergesort(vector<int>& x, int start, int end) {
        if (start >= end) return;

        int mid = (start + end) / 2;

        mergesort(x, start, mid);
        mergesort(x, mid + 1, end);

        merge(x, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};