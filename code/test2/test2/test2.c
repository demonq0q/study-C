#include <stdio.h>
//
//
//作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程
//
//int b = 90;    //全局变量
//int main()
//{
//	printf("1、b=%d\n", b);
//	printf("heihei\n");
//	
//	
//	{
//		int a = 11;
//		printf("a=%d\n", a);
//		printf("2、b=%d\n", b);
//	}
//	printf("3、b=%d",b);
//	return 0;
//}
//
////声明一下变量
//extern int z_f;
//
//int main()
//{
//	printf("z_f=%d \n ",z_f);
//	return 0;
//}
//
//
////生命周期
////变量的生命周期，变量的 创建和销毁之间的时间段
////
////局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
////全局变量的生命周期：程序的生命周期
//
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d",a);
//	}
//	
//	return 0;
//}
//
//
//常量
//
//#define max 1000
//
//int main()
//{
//	1、字面常量
//	3.14;
//	10;
//	"A";
//	"abcde";
//
//	2、const修饰的常变量
//	const int num = 10; //常变量 - 具有常属性（不能被改变的属性）
//	//num = 20;
//
//	int arr[10] = {0}; //10个元素
//
//	const int n = 10;
//	int arr2[n] = {0}; //n是变量，这里不可行
//	printf("num=%d", num);
//
//	3、define 定义的标识符常量
//	max = 20000;  //错误写法，不得修改
//	/*int n = max;
//	printf("n=%d",n);*/
//	
//	return 0;
//}

//性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE = 3, //赋初值
//	FEMALE,
//	SECRET,
//};
//
//int main()
//{
//	//4、枚举常量
//	//可以一一列举的常量
//
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}



//字符串就是一串字符
//1、用双引号括起来的一串字符
//字符串在结尾的位置隐藏了一个\0的字符
//\0是字符串的结束结束标志

int main()
{
	//字符数组 - 数组是一组相同类型的元素
	//char arr[] = "hello";
	
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));


	//求字符串长度
	//int len = strlen("abc"); //string length
	//printf("长度为%d\n", len);

	//打印字符串
	/*printf("%s\n",arr1);
	printf("%s\n",arr2);*/

	return 0;
}

