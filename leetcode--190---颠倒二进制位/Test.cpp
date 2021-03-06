
//输入: 00000010100101000001111010011100
//输出 : 00111001011110000010100101000000
//解释 : 输入的二进制串 00000010100101000001111010011100 表示无符号整数 43261596，
//因此返回 964176192，其二进制表示形式为 00111001011110000010100101000000。



//思路：思路：此题只需要采用位运算，每次将原来的数字向左移动1位，就需要把该末尾加到我们的数字中去即可，
//此题需要注意的是一点要循环32次，不仅是有32位，最重要的不能判断到原来的数字为0就结束循环，
//这样就有可能的导致没有补足0所以要循环32次。同时对于左移而言，末尾全部补上的是0，
//而对于右移而言左边补的是原本最高位的数字，比如一个32位的数字最高位为1就全部补上1，如果为0 就全部补上0.这个知识点也是面试常考的。


class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t res;
		//vector<uint32_t> v;
		for (int i = 0; i<32; i++)
		{
			res = res << 1;
			res += n & 1;
			n = n >> 1;
		}
		return  res;
	}
};