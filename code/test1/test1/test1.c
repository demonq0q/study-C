#define _CRT_SECURE_NO_WARNINGS 1
//1��д����������main������
//2��C�����Ǵ��������ĵ�һ�п�ʼִ�е�
//3��C���Դ������main����-���
//4��printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ��
//5��printf ��ʹ�ã�Ҳ�ô��к�������ͷ�ļ� stdio.h��


#include <stdio.h>


//int main()
//{
//	printf("hello,world");
//	return 0;
//}


#include <limits.h>

//int main()
//{
//	printf("int �洢��С��%d \n", sizeof(int));
//	printf("short �洢��С��%d \n", sizeof(short));
//	printf("char �洢��С��%d \n", sizeof(char));
//	printf("long �洢��С��%d \n", sizeof(long));
//	printf("long long �洢��С��%lu \n", sizeof(long long));
//	printf("float �洢��С��%lu \n", sizeof(float));
//	printf("double �洢��С��%lu \n", sizeof(double));
//	return 0;
//}

//int main()
//{
//	//����һ������
//	//����  �������� = ֵ�� //�Ƽ�   
//	//���� ���������֣�//���Ƽ�
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

//%d - ����
//%f - float
//%lf - double


//	//ȫ�ֱ��� - {}�ⲿ�����
//int a = 100;
//
//int main()
//{
//	//�ֲ����� - {}�ڲ������
//
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//
//	//�������ȫ�ֱ����;ֲ�����������дһ����
//
//	int a = 10;
//
//	printf("%d", a);
//
//	return 0;
//}


//дһ��������2�������ĺ�
//scanf���������뺯��
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