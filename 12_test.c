#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int a = 0;
//	printf("请输入数字\n");
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
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码,并存放在password数组中
//	while ((ch = getchar()) != '\n') {
//		;
//	}
//
//	printf("请确认(Y/N):>");
//		ret = getchar();
//	if (ret == 'Y') {
//		printf("确认成功\n");
//	}
//	else {
//		printf("确认放弃\n");
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
//	//初始化  判断   调整
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
//	//写一个代码,在arr数组(有序的)中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("找到了. 下标是: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz) {
//		printf("找不到\n");
//	}
//
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;     //左下标
//	int right = sz - 1;  //右下标
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
//		printf("找到了,下标是: %d\n", mid);
//		break;
//	}
//	}
//	if (left > right) {
//		printf("找不到\n");
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
//	//休息一秒
//	Sleep(1000);
//	system("cls");//执行系统命令的一个函数 - cls -  清空屏幕
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
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) {
//			printf("登录成功\n");
//			break;
//		}
//		else {
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3) {
//		printf("三次密码均错误, 退出程序");
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
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
//	   //判断year是否为闰年
//	   //1.能被4整除并且不能被100整除是闰年
//	  //2. 能被400整除是闰年
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
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
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
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
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
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
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
//	int max = arr[0];//最大值
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
//		//确定打印9行
//		for (i = 1; i <= 9; i++) {
//			//打印一行
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
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;    //接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	
//	ret = rand()%100+1;//生成随机数
//	//printf("%d\n", ret);
//	//猜数字
//	while (1) {
//		printf("请猜数字");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了\n");
//		}
//		else if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//	//system()- 执行系统命令的
//	system("shutdown -s -t 600");
//again:
//	printf("请注意,你的电脑在10分钟内关机,如果输入人民,就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "人民") == 0) {        //比较两个字符串-strcmp()
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
//	//system()- 执行系统命令的
//	system("shutdown -s -t 600");
//	while (1) {
//		printf("请注意,你的电脑在10分钟内关机,如果输入人民,就取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "人民") == 0) {        //比较两个字符串-strcmp()
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
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查出的雷的信息
	char show[ROWS][COLS] = {0};
	//printf("扫雷\n");
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(mine, ROWS, COLS, '#');
	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);


	//扫雷
	FindMine(mine, show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
        scanf("%d", &input);
	switch (input) {
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("选择错误,重新选择!\n");
		break;
	}
	} while (input);
}
int main() {
	test();

	return 0;
}
//end
