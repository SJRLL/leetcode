�� 1 + 2 + ... + n ��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C����

ʾ�� 1��

���� : n = 3
 ��� : 6
	  ʾ�� 2��

  ���� : n = 9
   ��� : 45

//����һ���ݹ����
class Solution {
public:
	int sumNums(int n) {
		n && (n += sumNums(n - 1));
		return n;
	}
};

//�����������������
class ConSum     //�ù��캯��ʵ��
{
public:
	ConSum()      //���ô���n����������n�ι��캯��
	{
		n++;
		sum += n;
	}
	static int GetSum()
	{
		return sum;
	}
	static int n;   //�þ�̬���ݴ洢�ſɴﵽ�ۼ�Ч��
	static int sum;
};

int ConSum::n = 0;       //��ʼ����̬��Ա
int ConSum::sum = 0;
class Solution {
public:
	int sumNums(int n) {
		ConSum::n = 0;       //��ʼ����̬��Ա
		ConSum::sum = 0;
		ConSum *a = new ConSum[n];
		return ConSum::GetSum();   //���ʾ�̬��Ա���������������÷�
	}
};
