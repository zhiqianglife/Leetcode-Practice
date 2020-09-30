/*
给定一个整数数组  nums，求出数组从索引 i 到 j  (i ≤ j) 范围内元素的总和，包含 i,  j 两点。

示例：

给定 nums = [-2, 0, 3, -5, 2, -1]，求和函数为 sumRange()

sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3
说明:

你可以假设数组不可变。
会多次调用 sumRange 方法。
*/

/*class NumArray {
public:
    vector<int> m_nums;
    NumArray(vector<int>& nums) {
        m_nums = nums;
    }

    int sumRange(int i, int j) {
        int res = 0;
        for (int k = i; k <= j; ++k) {
            res += m_nums[k];
        }
        return res;
    }
};*/

class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums) {
        sum.resize(nums.size() + 1);
        sum[0] = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum[i + 1] = sum[i] + nums[i];
        }
    }

    int sumRange(int i, int j) {
        int res = 0;
        return sum[j + 1] - sum[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
