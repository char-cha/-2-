#define _CRT_SECURE_NO_WARNINGS 1
//2.1变量名
//知识点：1.下划线通常被视为字母，用于命名较长的变量名称
//2.但由于库例程的名字通常为下划线开头，所以变量不用下划线开头
//3.注意事项，大写字母用于常量命名，小写字母用于变量命名
//4.关键语句不可用作变量名称，如if 符号函数之类的关键字保留于语言文字本身使用

//2.2数据类型及长度
//类型例举
//char 字符型，一个字节，8个比特 取值范围为-128-127
//int 整型，反映整数最自然长度
//float 单精度浮点型 
//double 双精度浮点型
//short与long用于限定整型 16位 32位 

// PS:short 的长度不能大于 int，long 的长度不能小于 int。 
//   这就意味着，short 并不一定真的”短“，long 也并不一定真的”长“，
//   它们有可能和 int 占用相同的字节数。 
//   在 16 位环境下，short 的长度为 2 个字节，int 也为 2 个字节，long 为 4 个字节。

//练习2-1
#include<stdio.h>
//#include<limits.h>　　　
//方法一
//main()
//{
//	//显示类型
//	printf("singned char min = %d\n", SCHAR_MIN);
//	printf("signed char max = %d\n", SCHAR_MAX);
//	printf("signed short min = %d\n", SHRT_MIN);
//	printf("signed short max = %d\n", SHRT_MAX);
//	printf("signed int min =  %d\n", INT_MIN);
//	printf("signed int max = %d\n", INT_MAX);
//	printf("signed long min = %d\n", LONG_MIN);
//	printf("signed long max =%d\n", LONG_MAX);
//	//不显示类型
//	printf("unsigned char max = %u\n", UCHAR_MAX);
//	printf("unsigned short max = %u\n", USHRT_MAX);
//	printf("unsigned long max = %u\n", UINT_MAX);
//	printf("unsigned int max = %u\n", UINT_MAX);
//
//}

//知识点：1.#include<limits.h> 定义各种数据类型最值的常量
//		  2.取值范围在头文件<limits.h>中定义

//方法2
main()
{
	printf("signed char min =%d\n", -(char)((unsigned char)~0 >> 1));//目的：为了转化为目的类型
	printf("signed char max =%d\n", (char)((unsigned char)~0 >> 1));
	printf("signed short min =%d\n", -(short)((unsigned short)~0 >> 1));
	printf("signed short max =%d\n", (short)((unsigned short)~0 >> 1));
	printf("signed int min =%d\n", -(int)((unsigned int)~0 >> 1));
	printf("signed int max =%d\n", (int)((unsigned int)~0 >> 1));
	printf("signed long min =%d\n", -(long)((unsigned long)~0 >> 1));
	printf("signed long max =%d\n", (long)((unsigned long)~0 >> 1));
	//符号变量
	printf("unsigned char max= %u\n", (unsigned char)~0);
	printf("unsigned short max= %u\n", (unsigned short)~0);
	printf("unsigned long max= %u\n", (unsigned long)~0);
	printf("unsigned int max= %u\n", (unsigned int)~0);
	

}
//~0是把数字0的各个二进制位全部转化为1
	//由此扩展
	//以下假设为32位系统；
		/*0的补码是0x00000000；
		0则是：0xFFFFFFFF（是按位取反，包括符号位，跟“取反”不是一个概念）
		0xFFFFFFFF的原码是0x80000001即 - 1；
		所以~0 == -1；

		由此也可以解释
		~1 == -2；
		~2 == -3*/

//0 >> 1 把数字右移一位


