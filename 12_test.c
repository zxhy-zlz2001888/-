#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int a = 0;
//	printf("����������\n");
//	scanf("%d\n", &a);
//	printf("a\n");
//
//
//	return 0;
// 
//}
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) !=EOF) {
//		putchar(ch);
//	}
//
//
//
//
//	return 0;
//}
//int main() {
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//��������,�������password������
//	while ((ch = getchar()) != '\n') {
//		;
//	}
//
//	printf("��ȷ��(Y/N):>");
//		ret = getchar();
//	if (ret == 'Y') {
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("ȷ�Ϸ���\n");
//	}
//
//	return 0;
//}
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch<'0' || ch >'9')
//		
//		{
//			continue;
//		}
//			putchar(ch);
//		
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	//��ʼ��  �ж�   ����
//		for (i = 1; i <= 10; i++) {
//		printf("%d", i);
//	}
//	return 0;
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i = 5) {
//			printf("haha\n");
//		}
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i=0; i<10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main() {
//	for (;;) {
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		int j = 0;
//		for(j = 0; j < 10; j++) {
//			printf("hehe\n");
//		}
//
//	}
//int main() {
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) {
//		for (; j < 10; j++) {
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main() {
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < +10);
//
//	return 0;
//}
//int main() {
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main() {
//	int i = 1;
//	do
//	{
//		if (i == 5) {
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++) {
//		ret = 1;
//    for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	sum = sum + ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++) {
//			ret = ret * n;
//            sum = sum + ret;
//		}
//		printf("sum = %d\n", sum);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++) {
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	//дһ������,��arr����(�����)���ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("�ҵ���. �±���: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz) {
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;     //���±�
//	int right = sz - 1;  //���±�
//
//	while (left <= right)
//	{
//int mid = (left + right)/2;
//	if (arr[mid] > k) {
//		right = mid - 1;
//	}
//	else if(arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		printf("�ҵ���,�±���: %d\n", mid);
//		break;
//	}
//	}
//	if (left > right) {
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//}
#include <string.h>
#include <windows.h>
#include <stdlib.h>


//int main() {
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr[0])-2;//err
//	int right = strlen(arr1) - 1;
//	while (left < right) {
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	//��Ϣһ��
//	Sleep(1000);
//	system("cls");//ִ��ϵͳ�����һ������ - cls -  �����Ļ
//	left++;
//	right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) {
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else {
//			printf("�������\n");
//		}
//	}
//	if (i == 3) {
//		printf("�������������, �˳�����");
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//�㷨ʵ��
//	//a�з����ֵ
//	//b��֮
//	//c�з���Сֵ
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main() {
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n) {
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main() {
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++) {
//	   //�ж�year�Ƿ�Ϊ����
//	   //1.�ܱ�4�������Ҳ��ܱ�100����������
//	  //2. �ܱ�400����������
//		if (year % 4 == 0 && year % 100 != 0) {
//			printf("%d ", year);
//			count++;
//		}
//		else if(year%400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main() {
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
//        printf("%d ", year);
//		count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j == i) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//	}

#include <math.h>
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)){
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2) {
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main() {
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++) {
//		if (b >= 20) {
//			break;
//		}
//		if (b % 3 == 1) {
//			b = b + 3;
//			continue;
//		}
//		b = b + 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		 if (i / 10 == 9) {
//			count++;
//		}	
//	}
//printf("count = %d\n", count);
//	return 0;
////}
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main() {
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,- 9,-10 };
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main() {
//	int i = 0;
//		//ȷ����ӡ9��
//		for (i = 1; i <= 9; i++) {
//			//��ӡһ��
//			int j = 1;
//		
//			for (j = 1; j <= i; j++) {
//				printf("%d*%d=%-2d ", i, j, i * j);
//			}
//			printf("\n");
//		}
//	
//	return 0;
//}
#include <time.h>


//void menu() {
//	printf("*****************************\n");
//	printf("****   1. play   0.  exit  **\n");
//	printf("*****************************\n");
//}
//void game() {
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;    //���ղµ�����
//	//��ʱ����������������������ʼ��
//	
//	ret = rand()%100+1;//���������
//	//printf("%d\n", ret);
//	//������
//	while (1) {
//		printf("�������");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("�´���\n");
//		}
//		else if (guess < ret) {
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���\n");
//			break;
//		}
//	}
//}
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main() {
//again:
//	printf("hehe\n");
//	goto again;
//
//
//	return 0;
//}
//int main() {
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- ִ��ϵͳ�����
//	system("shutdown -s -t 600");
//again:
//	printf("��ע��,��ĵ�����10�����ڹػ�,�����������,��ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "����") == 0) {        //�Ƚ������ַ���-strcmp()
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main() {
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- ִ��ϵͳ�����
//	system("shutdown -s -t 600");
//	while (1) {
//		printf("��ע��,��ĵ�����10�����ڹػ�,�����������,��ȡ���ػ�\n������>:");
//		scanf("%s", input);
//		if (strcmp(input, "����") == 0) {        //�Ƚ������ַ���-strcmp()
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
#include "12.h"
void menu() {
	printf("****************************\n");
	printf("********   1. play   *******\n");
	printf("********   0. exit   *******\n");
	printf("****************************\n");
}
void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų�����׵���Ϣ
	char show[ROWS][COLS] = {0};
	//printf("ɨ��\n");
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(mine, ROWS, COLS, '#');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);


	//ɨ��
	FindMine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
        scanf("%d", &input);
	switch (input) {
	case 1:
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("ѡ�����,����ѡ��!\n");
		break;
	}
	} while (input);
}
int main() {
	test();

	return 0;
}

