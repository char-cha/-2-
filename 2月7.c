#define _CRT_SECURE_NO_WARNINGS 1
//2.1������
//֪ʶ�㣺1.�»���ͨ������Ϊ��ĸ�����������ϳ��ı�������
//2.�����ڿ����̵�����ͨ��Ϊ�»��߿�ͷ�����Ա��������»��߿�ͷ
//3.ע�������д��ĸ���ڳ���������Сд��ĸ���ڱ�������
//4.�ؼ���䲻�������������ƣ���if ���ź���֮��Ĺؼ��ֱ������������ֱ���ʹ��

//2.2�������ͼ�����
//��������
//char �ַ��ͣ�һ���ֽڣ�8������ ȡֵ��ΧΪ-128-127
//int ���ͣ���ӳ��������Ȼ����
//float �����ȸ����� 
//double ˫���ȸ�����
//short��long�����޶����� 16λ 32λ 

// PS:short �ĳ��Ȳ��ܴ��� int��long �ĳ��Ȳ���С�� int�� 
//   �����ζ�ţ�short ����һ����ġ��̡���long Ҳ����һ����ġ�������
//   �����п��ܺ� int ռ����ͬ���ֽ����� 
//   �� 16 λ�����£�short �ĳ���Ϊ 2 ���ֽڣ�int ҲΪ 2 ���ֽڣ�long Ϊ 4 ���ֽڡ�

//��ϰ2-1
#include<stdio.h>
//#include<limits.h>������
//����һ
//main()
//{
//	//��ʾ����
//	printf("singned char min = %d\n", SCHAR_MIN);
//	printf("signed char max = %d\n", SCHAR_MAX);
//	printf("signed short min = %d\n", SHRT_MIN);
//	printf("signed short max = %d\n", SHRT_MAX);
//	printf("signed int min =  %d\n", INT_MIN);
//	printf("signed int max = %d\n", INT_MAX);
//	printf("signed long min = %d\n", LONG_MIN);
//	printf("signed long max =%d\n", LONG_MAX);
//	//����ʾ����
//	printf("unsigned char max = %u\n", UCHAR_MAX);
//	printf("unsigned short max = %u\n", USHRT_MAX);
//	printf("unsigned long max = %u\n", UINT_MAX);
//	printf("unsigned int max = %u\n", UINT_MAX);
//
//}

//֪ʶ�㣺1.#include<limits.h> �����������������ֵ�ĳ���
//		  2.ȡֵ��Χ��ͷ�ļ�<limits.h>�ж���

//����2
main()
{
	printf("signed char min =%d\n", -(char)((unsigned char)~0 >> 1));//Ŀ�ģ�Ϊ��ת��ΪĿ������
	printf("signed char max =%d\n", (char)((unsigned char)~0 >> 1));
	printf("signed short min =%d\n", -(short)((unsigned short)~0 >> 1));
	printf("signed short max =%d\n", (short)((unsigned short)~0 >> 1));
	printf("signed int min =%d\n", -(int)((unsigned int)~0 >> 1));
	printf("signed int max =%d\n", (int)((unsigned int)~0 >> 1));
	printf("signed long min =%d\n", -(long)((unsigned long)~0 >> 1));
	printf("signed long max =%d\n", (long)((unsigned long)~0 >> 1));
	//���ű���
	printf("unsigned char max= %u\n", (unsigned char)~0);
	printf("unsigned short max= %u\n", (unsigned short)~0);
	printf("unsigned long max= %u\n", (unsigned long)~0);
	printf("unsigned int max= %u\n", (unsigned int)~0);
	

}
//~0�ǰ�����0�ĸ���������λȫ��ת��Ϊ1
	//�ɴ���չ
	//���¼���Ϊ32λϵͳ��
		/*0�Ĳ�����0x00000000��
		0���ǣ�0xFFFFFFFF���ǰ�λȡ������������λ������ȡ��������һ�����
		0xFFFFFFFF��ԭ����0x80000001�� - 1��
		����~0 == -1��

		�ɴ�Ҳ���Խ���
		~1 == -2��
		~2 == -3*/

//0 >> 1 ����������һλ


