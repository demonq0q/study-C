#include <stdio.h>
//
//
//���������������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������
//
//int b = 90;    //ȫ�ֱ���
//int main()
//{
//	printf("1��b=%d\n", b);
//	printf("heihei\n");
//	
//	
//	{
//		int a = 11;
//		printf("a=%d\n", a);
//		printf("2��b=%d\n", b);
//	}
//	printf("3��b=%d",b);
//	return 0;
//}
//
////����һ�±���
//extern int z_f;
//
//int main()
//{
//	printf("z_f=%d \n ",z_f);
//	return 0;
//}
//
//
////��������
////�������������ڣ������� ����������֮���ʱ���
////
////�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
////ȫ�ֱ������������ڣ��������������
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
//����
//
//#define max 1000
//
//int main()
//{
//	1�����泣��
//	3.14;
//	10;
//	"A";
//	"abcde";
//
//	2��const���εĳ�����
//	const int num = 10; //������ - ���г����ԣ����ܱ��ı�����ԣ�
//	//num = 20;
//
//	int arr[10] = {0}; //10��Ԫ��
//
//	const int n = 10;
//	int arr2[n] = {0}; //n�Ǳ��������ﲻ����
//	printf("num=%d", num);
//
//	3��define ����ı�ʶ������
//	max = 20000;  //����д���������޸�
//	/*int n = max;
//	printf("n=%d",n);*/
//	
//	return 0;
//}

//�Ա�
//enum Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	//ö�ٳ���
//	MALE = 3, //����ֵ
//	FEMALE,
//	SECRET,
//};
//
//int main()
//{
//	//4��ö�ٳ���
//	//����һһ�оٵĳ���
//
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}



//�ַ�������һ���ַ�
//1����˫������������һ���ַ�
//�ַ����ڽ�β��λ��������һ��\0���ַ�
//\0���ַ����Ľ���������־

int main()
{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//char arr[] = "hello";
	
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));


	//���ַ�������
	//int len = strlen("abc"); //string length
	//printf("����Ϊ%d\n", len);

	//��ӡ�ַ���
	/*printf("%s\n",arr1);
	printf("%s\n",arr2);*/

	return 0;
}

