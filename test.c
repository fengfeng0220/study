#define _CRT_SECURE_NO_WARNINGS  1

#pragma warning(disable:4996)

//hello world
//stdio -std ��׼ i input  o output
//.h - ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
//4.ö�ٳ���
//ö�� - һһ�о�
//�Ա� �У�Ů������
//
//��ԭɫ��R��G��B
//
//����һ��ö������
//enum �Ǹ�ö�ٹؼ���
//enum Sex
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//
//int main()
//{
//	//enum Sex sex = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	num = 20;
//	return 0;
//}
//
//3. #define ����ı�ʶ������
//
//#define MAX 100
//#define ZHANGSAN 1000
//
//int main()
//{
//	int a = MAX;
//	//MAX = 200;
//	printf("a = %d\n", a);
//	int arr[MAX] = { 0 };
//	return 0;
//}

//int main()
//{
//	//1.���泣��
//	100;//���泣��
//	3.14;//
//	/*int a = 100;
//	if (a == 5)
//	{
//	
//	}
//	*/
//	//2.const ���εĳ�����
//	//int a = 10;//a�Ǳ���
//	//printf("a = %d\n", a);//10
//	//a = 20;//�ı�a��ֵ
//	//printf("a = %d\n", a);//20
//
//	//const int a = 10;//a�Ǳ���
//	//printf("a = %d\n", a);//10
//
//	//a = 20;//�ı�a��ֵ
//	//printf("a = %d\n", a);//20
//
//	//����Ĵ���
//	//C99��׼֮ǰ������Ĵ�С��ָ�������ǳ���
//	//C99֮������һ���䳤����ĸ������ʹ�ñ�����
//	//const int n = 10;//n��const�����ˣ����г����ԣ����ǻ��Ǳ���
//	//int arr[10] = {0};//
//
//
//	return 0;
//}

//һ�������п����ж��.c�ļ�
//�����.c�ļ���ֻ����һ��main����

//int main()
//{
//	{
//		//a����
//		int a = 10;
//		printf("%d\n", a);
//		//a����
//	}
//	//a�ڴ��������ٵĹ������������������ڣ��ֲ�������
//	printf("%d\n", a);
//
//	return 0;
//}
////ȫ�ֱ������������ھ��������������������

//�ֲ������������򣺾����Լ����ڵľֲ���Χ
//ȫ�ֱ����������򣺾�����������

//extern�������ⲿ���ŵ�

//extern int g_val;
//
//int main(void)
//{
//	printf("%d\n",g_val);
//	return 0;
//}

//int a = 10;
//
//void test()
//{
//	printf("a3 = %d\n", a);
//}
//
//int main()
//{
//	{
//		printf("a1 = %d\n", a);
//	}
//	printf("a2 = %d\n", a);
//	test();
//
//	return 0;
//}


//int main()
//{
//	//{}-�����
//	int b = 100;
//	{
//		int a = 10;
//		printf("%d\n", a);
//		printf("b = %d\n", b);
//	}
//	printf("b = %d\n",b);
//	return 0;
//}

//int main(void)
//{
//	//д���������������ĺ�
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a, &b);
//	int c = a + b;
//	printf("%d\n",c);
//
//	return 0;
//}

////ȫ�ֱ���-���ڴ������ⲿ�ľ���ȫ�ֱ���
//int a = 100;
//
//int main()
//{
//	int a = 10;//�ֲ�����-���ڴ������ڲ��ľ��Ǿܲ�����
//	//�ֲ�������ȫ�ֱ������ֳ�ͻ��ʱ�򣬾ֲ�����
//	printf("%d",a);//�˸�a�����ʲô��
//	{
//		int a = 1;//�˸�aΪ�ֲ�����
//	}
//	return 0;
//}

//int main()
//{
//	//����
//	short age = 20;
//	float weiget = 55.6f;//ֱ��д���ĸ�����Ĭ��������double
//	char ch = 'a';//''�ַ� ""�ַ��� 
//
//	return 0;
//	//һ������ռ�����ַ�
//}

//
//int main(void)
//{
//	%d ��ʾ��ӡ��������
//	sizeof  ��c���Ե�һ��������
//	sizeof������Ƕ�Ӧ���͵ı�����ռ�ڴ�Ĵ�С
//	sizeof ����Ľ�����ֽ�
//	printf("%d\n",sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	
//
//	return 0;
//}


//int main(int argc, char* argv[])
//{
//	return 0;
//}
////void����ȷ��������main��������Ҫ����
//int main(void)
//{
//	return 0;
//}
//int main()
//{
//	return 0;
//}
//void main()
//{
//
//}

//printf - ���
//scanf - ����

//int main(void)
//{
//	int a = 0;
//	scanf("%d",&a);//scanf_s-VS�ṩ
//	//gcc clang ����ʶscanf_s
//	//ʧȥ�˿�ƽ̨
//	printf("%d\n",a);
//	return 0;
//}



//
//main-������
//�����Ǵ�main�����ĵ�һ�п�ʼִ��
//main�����ǳ�������-����ֻ��һ��
//

//int main(void)
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
////����0��ʾ��ȷ����
//}


////�ȽϾɵ�д��
//void main(void)
//{
//	printf("hehe\n");
//}


//
//Fn - �������ܼ�
//f10 ������

//int main(void)
//{
//	//printf-��ӡ����
//	//�⺯����ʹ��Ҫ����ͷ�ļ�
//	//
//	printf("hello world\n");
//	system("pause");//system��һ��ִ��ϵͳ����ĺ���-pause
//	return 0;
//}


//
//���д���
//ctrl+f5
//�����ctrl+f5û��Ӧ
//fn+ctrl+f5���߹ص�fn����Ctrl+f5
//����ִ����ֱ�Ӿͽ����ˣ�����û�п������н��
//1.������Ŀ����
//2.system("pause");