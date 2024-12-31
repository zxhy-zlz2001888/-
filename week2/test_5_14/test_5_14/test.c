#include <stdio.h>
//int main() {
//	double  a = 5 / 2.0;
//	printf("a = %lf\n", a);
//
//	return 0;
//}
//int main() {
//	int a = 16;
//	//>> -- 右移操作符
//	//移动的是二进制位
//	//10000
//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main() {
//	int a = -1;
//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	//& - 按2进制与
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);*/
//	//| - 按2进制位或
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}
//int main() {
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	int a = 3;
//	int b = 5;
//	int tmp = 0;   //临时变量
//	printf("before: a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after: a=%d b=%d\n", a, b);
//	return 0;
//}
//int main() {
//	//异或的方法
//	int a = 3;
//	int b = 5;
//	printf("before: a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after: a=%d b=%d\n", a, b);
//	return 0;
//}

//int main() {
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);  //3 - 011
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (1 == ((num >> i)&1)) {
//			count++;
//	}
//		
//	}
//	//统计num的补码有几个1
//	/*while (num)
//	{
//		if (num % 2 == 1) {
//			count++;
//			num = num / 2;
//		}*/
//	/*}*/
//	printf("%d\n", count);
//	return 0;
//}
//int main() {
//	int a = 10;
//	a = a + 2;
//	a += 2; //符合复制符
//	a = a >> 1;
//	a >>= 1;
//	a = a & 1;
//	a &= 1;
//	printf("%d\n", a);
//	return 0;
//}
//int main() {
//	int a = 0;
//	if (a) {
//		printf("hehe\n");
//	}
//	//printf("%d\n", !a);
//	if (!a) {
//		printf("呵呵\n");
//	}
//
//
//	return 0;
//}
//int main() {
//	int a = -5;
//	a = -a;
//
//
//	return 0;

//int main() {
//	int a = 10;
//	int* p = &a ; //取地址操作符
//	*p = 20;  //解引用操作符
//	return 0;
//}
//int main() {
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof计算的是变量所占内存空间的大小,单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main() {
//	int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int[10]));
//	return 0;
//}
//int main() {
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//
//	return 0;
////}
//int main() {
//	int a = 0;
//	printf("%d\n", ~a);
//	printf("%d\n", a);
//	return 0;
//}
//int main() {
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n",a);
//	a = a & (~(1<<2));
//	printf("%d\n", a);
//	return 0;
//}
//int main() {
//	int a = 10;
//	printf("%d\n", ++a);//前置++,先++,后使用
//	printf("%d\n", a++);//后置++,先使用,后++
//	return 0;
//}
//int main() {
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[]) {
//	printf("%d\n", sizeof(ch));
//}
//int main() {
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}0000011
// 0000101

//int main() {
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}
//int main() {
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	if (a > 5) {
//		b = 3;
//	}
//	else {
//		b = -3;
//	}
//	b = (a > 5 ? 3 : -3);
//
//	return 0;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b) {
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	max = (a > b ? a : b);
//	return 0;
//}

//int main() {
//	int a[10] = { 0 };
//	a[4] = 10;
//
//	
//	return 0;
//}

//int get_max(int x, int y) {
//
//	return x > y ? x : y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//创建一个结构体类型-struct   Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main() {
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	 struct Stu s1 = {"张三", 20, "2019010305"};
//	 struct Stu* ps = &s1;
//
//	 printf("%s\n", ps->name);
//	 printf("%d\n", ps->age);
//	 //结构体指针->成员名
//
//	/* printf("%s\n", (*ps).name);
//	 printf("%d\n", (*ps).age);*/
//	/* printf("%s\n", s1.name);
//	 printf("%d\n", s1.age);
//	 printf("%s\n", s1.id);*/
//	 //结构体变量,成员名
//	return 0;
//}


//int main() {
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main() {
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6) {
//		printf("a");
//	}
//	if (a == 0xb600) {
//		printf("b");
//	}
//	if (a == 0xb6000000){
//		printf("c");
//	}
//	return 0;
//}
//int main() {
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int c = b + a * 3;
//	return 0;
//}

//int main() {
//	int c = 5;
//	c + --c;
//	return 0;
//}

//int main() {
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("a = %d\n", a);
//	return 0;
//}
//int main() {
//	int a = 10;
//	int* p = &a;
//	printf("");
//
//
//	return 0;
//}
//int main() {
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	/*char* pc = &a;
//	*pc = 0;*/
//	*pa = &a;
//	printf("%p\n", pa);
//	/*printf("%p\n", pc);*/
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = 1;
//	}
//
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++) {
//		p++;
//	}
//	return 0;
//}
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	
//
//	return 0;
//}
//int main() {
//	int* p ;
//	*p = 20;
//
//
//
//	return 0;
//}
   
//int main() {
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++) {
//     
//	}
//	return 0;
//}

//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int main() {
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	 pa = NULL;
//	 *pa = 10;
//	return 0;
//}


//int main() {
//	int* p = NULL;
//	int a = 10;
//	p = &a;
//	if (p != NULL) {
//		*p = 20;
//	}
//	return 0;
//}

//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *p);
//		//p = p + 1;
//		p++;
//	}
//	return 0;
//}
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (i = 0; i < 5; i++) {
//		printf("%d ", *p);
//		//p = p + 1;
//		p-=2;
//	}
//	return 0;
//}
//#define N_VALUES 5
//float values[N_VALUES];
//float *vp;
////指针+-整数;指针的关系运算
//for (vp = &values[0]; vp < &values[N_VALUES];)
//{
//	*vp++ = 0;
//
//}

//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n",  & arr[0] - &arr[9]);
//	return 0;
//}
//int my_strlen(char* str){
//	char* start = str;
//	char* end = str;
//	while (*end) {
//		end++;
//	}
//	return end - start;
//}
//int main() {
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//	*--vp = 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1. &arr - &数组名 - 数组名不是首元素的地址 - 取出的是整个数组的地址
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%p ======= %p\n", p+i,&arr[i]);
//	}
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa; //ppa就是二级指针
//	printf("%d\n", **ppa);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	//整型数组 - 存放整型
//	//字符数组 - 存放字符
//	//指针数组 - 存放指针
//	int* arr2[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d ",  * (arr2[i]));
//	}
//	return 0;
//}

//int main() {
//	{
//		int a = 10;
//	}
//
//
//
//	return 0;
//}

//void Init(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//把数组初始化为0
//	print(arr, sz);
//	Reverse(arr, sz);
//	print(arr, sz); //把数组打印
//	return 0;
//}

//int main() {
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++) {
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;		
//	}
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int i;
//int main() {
//	i--;
//	if (i > sizeof(i)) {
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main() {
//
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n:", a, b, c);
//	return 0;
//}
//int count_bit_one(unsigned int n) {
//	int count = 0;
//	while (n) {
//		if (n % 2 == 1) {
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int count_bit_one( int n) {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (((n >> 1) & 1) == 1) {
//			count++;
//		}
//
//	}
//	return count;
//}

//int count_bit_one(int n) {
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	
//	return count;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制(补码)表示中有几个1
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//
//	system("pause");//system库函数-执行系统命令-pause(暂停)
//	return 0;
//}

//int get_diff_bit(int m, int n) {
//	int tmp = m^n;
//	int count = 0;
//	/*return count_bit_one(tmp);*/
//	while (tmp) {
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//
//
//	return 0;
//}

//void print(int m) {
//	int i = 0;
//	printf("奇数位: \n");
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位: \n");
//	for (i = 31; i >= 1; i -= 2) {
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main() {
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//void print(int *p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(p + i));
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//int Fun(int n) {
//	if (n == 5) {
//		return 2;
//	}
//	else
//	{
//		return 2 * Fun(n + 1);
//	}

//}
//void print_table(int n) {
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
//void reverse_string(char arr[]) {
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//
//	while (left<right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}	
//}

//void reverse_string(char* arr) {
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1) >= 2)
//	reverse_string(arr+1);
//	arr[len - 1] = tmp;
//}
//int main() {
//	char arr[] = "abcdefghi";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//int DigitSum(unsigned int num) {
//	if (num > 9) {
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//double Pow(int n, int k) {
//	if (k < 0) {
//		return (1.0 / (Pow(n, -k)));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Pow(n, k - 1);
//	}
//}
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	//int ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}

//描述一个学生-一些数据

//struct 结构体关键字 Stu - 结构体标签 struct Stu - 结构体类型
//struct Stu {
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}s1, s2, s3;
//typedef struct Stu {
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;
//int main() {
//	struct Stu s1;     //局部变量
//	Stu s2;
//	return 0;
//}

//typedef struct Stu {
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main() {
//	Stu s1 = { "张三", 20, "15236996663", "男" };//局部变量
//	struct Stu s2 = { "旺财", 30, "18888888888", "保密"};
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T {
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main() {
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", {100, 'w', "hello world",3.14}, arr};
//	printf("%s\n", t.ch);
//	printf("%\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.s.arr);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu {
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu tmp) {
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//void print2(Stu* ps) {
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main() {
//	Stu s = { "李四", 40, "15988886688", "男" };
//	print1(s);
//	print2(&s);
//	return 0;
//}
//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}
//Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main() {
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	return 0;
//}
//void test2() {
//	printf("hehe\n");
//}
//void test1() {
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main() {
//	test();
//	return 0;
//}

//int main() {
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++) {
//			ret *= j;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 10; i++) {
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

int main() {
	//strcpy
	char arr1[] = "#########";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr2);
	return 0;
}
//int main() {
//
//
//	return 0;
//}