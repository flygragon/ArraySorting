#include<vector>
using namespace std;
///	�Խ���0,1,2�������������
///	���������1��2�ĸ���
///	Ȼ�����ζ�ԭ�������0,1,2��ֵ
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countof1 =0,countof2 =0,len =nums.size(),i;
        for (int i =0;i <len;i ++) {
            if (nums[i]&1) countof1 ++;	///	��1�ĸ���
            if (nums[i]&2) countof2 ++;	///	��2�ĸ���
        }
        for (i =0;i <len -countof1-countof2;)	///	�ȸ�ֵΪ0
        nums[i ++] =0;
        for (;i <len -countof2;)		///	�ٸ�ֵΪ1
        nums[i ++]=1;
        for (;i <len;) nums[i ++] =2;	///	���ֵΪ2
    }
};