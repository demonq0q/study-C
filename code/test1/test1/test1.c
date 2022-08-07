#define _CRT_SECURE_NO_WARNINGS 1
//1、写出主函数（main函数）
//2、C语言是从主函数的第一行开始执行的
//3、C语言代码得有main函数-入口
//4、printf - 库函数 - 在屏幕上打印信息的
//5、printf 的使用，也得打招呼（引用头文件 stdio.h）


#include <stdio.h>


//int main()
//{
//	printf("hello,world");
//	return 0;
//}


#include <limits.h>

//int main()
//{
//	printf("int 存储大小：%d \n", sizeof(int));
//	printf("short 存储大小：%d \n", sizeof(short));
//	printf("char 存储大小：%d \n", sizeof(char));
//	printf("long 存储大小：%d \n", sizeof(long));
//	printf("long long 存储大小：%lu \n", sizeof(long long));
//	printf("float 存储大小：%lu \n", sizeof(float));
//	printf("double 存储大小：%lu \n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	//创建一个变量
//	//类型  变量名字 = 值； //推荐   
//	//类型 变量的名字；//不推荐
//	int age = 20;
//	double weight = 70.6;
//
//	age = age + 1;
//	weight = weight - 10.1;
//	printf("%d\n", age);       
//	printf("%lf\n", weight);
//	
//
//	return 0;
//}

//%d - 整型
//%f - float
//%lf - double


//	//全局变量 - {}外部定义的
//int a = 100;
//
//int main()
//{
//	//局部变量 - {}内部定义的
//
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//
//	//不建议把全局变量和局部变量的名字写一样的
//
//	int a = 10;
//
//	printf("%d", a);
//
//	return 0;
//}


//写一个代码求2个整数的和
//scanf函数是输入函数
int main()
{
	int a = 11;
	int b = 20;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("a+b=%d\n", sum);
	return 0;
}