
#define _CRT_SECURE_NO_WARNINGS
//typedef unsigned int uint;//����������unsigned int����Ϊuint
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//
//}Node;
//
//int main()
//{
//
//	unsigned int num = 0;
//	uint num2 = 0;
//	struct Node n;
//	Node n2;
//	return 0;
//}


//static
//���ξֲ�����
//����ȫ�ֱ���
//���κ���
#include<stdio.h>
//void test()  ///void������Ҫ�κη��أ�
//        ���ξֲ�����(�ı�洢λ��)
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
////ȫ�ֱ���
//
////�����ⲿ����(extern)
//extern int g_val;
//
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}




//���κ���
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}



////register   �Ĵ���
//
//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//����3����ڼĴ�����
//
//	return 0;
//}

//define�����ʶ������

//#define NUM 100
//int main()
//{
//	printf("%d\n",NUM);
//	int n = NUM;
//	printf("%d\n",n);
//	int arr[NUM] = { 0 };
//	return 0;
//}

//define�����
//�����в���
//#define ADD(x,y) ((x)+(y))
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ�����10
//	//&a;//����ַ������ 
//	//printf("%p\n", &a);
//	int* p = &a;//p����ָ�����,   *˵��p��ָ�������  int˵��pָ��Ķ�����int���͵�
//	*p=20;//�����ò���������˼��ͨ��p�д�ŵĵ�ַ���ҵ�p��Ӵָ��Ķ���*p����pָ��Ķ���
//	printf("%d\n", a);
//
//	/*char ch = 'w';
//	char* pc = $ch;*/
//	
//	return 0;
//}





//int main()
//{
//	//int* p;
//	//cher* p2;
//	//������ʲô���͵�ָ�붼���ڴ���ָ�����
//	//ָ�������������ŵ�ַ�� 
//	//ָ������Ĵ�Сȡ����һ����ַ���ʱ��Ҫ���ռ�
//	//32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�Сʱ4���ֽ�
//	//64λ�����ϵĵ�ַ��64bitλ - 8byte, ����ָ������Ĵ�Сʱ8���ֽ�
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}

//ѧ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//
//	//->
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct Stu s = {"����",20,"��","15144887755"};
//
//	//�ṹ�����.��Ա��
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
#include<stdio.h>

int main()
{
	in
	return 0;
}
