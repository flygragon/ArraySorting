#include<vector>
using namespace std;
///	对仅含0,1,2的数组进行排序
///	可以先求得1和2的个数
///	然后依次对原数组进行0,1,2赋值
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countof1 =0,countof2 =0,len =nums.size(),i;
        for (int i =0;i <len;i ++) {
            if (nums[i]&1) countof1 ++;	///	求1的个数
            if (nums[i]&2) countof2 ++;	///	求2的个数
        }
        for (i =0;i <len -countof1-countof2;)	///	先赋值为0
        nums[i ++] =0;
        for (;i <len -countof2;)		///	再赋值为1
        nums[i ++]=1;
        for (;i <len;) nums[i ++] =2;	///	最后赋值为2
    }
};