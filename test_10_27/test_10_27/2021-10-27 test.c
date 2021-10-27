#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//fopen("../../test.txt", "r");
//		//绝对路径
//	//fopen("C:\Users\Administrator\Documents\Visual Studio 2013\Projects\\test_10_27\\test_10_27\\test.txt", "r");
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//打开成功
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include<string.h>
//#include<errno.h>
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//printf("%s\n", strerror(errno));
//return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}


//#include<string.h>
//#include<errno.h>
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//#include<string.h>
//#include<errno.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 1024, pf);//get到'bit\n'
//	printf("%s", buf);//自动换行
//
//	fgets(buf, 1024, pf);//get到'world'
//	printf("%s", buf);//没有自动换行
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<string.h>
//#include<errno.h>
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("你好\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//从标准输入流读取
//	fputs(buf, stdout);//输出到标准输出流
//
//	//等价于
//	//gets(buf);
//	//puts(buf);
//	return 0;
//}

//struct S
//{
//	int n; 
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14f, "world" };
//	FILE * pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//以格式化的形式写入文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//以格式化的形式写出文件
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//struct S
//{
//	int n; 
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14, "abcd" };
//	char buf[1024] = { 0 };
//
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//
//	//从buf中读取格式化的数据到tmp中
//	struct S tmp = { 0 };
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n,tmp.score,tmp.arr);
//
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	double score;
};

//int main()
//{
//	struct S s = { "zhangsan", 20, 85.5 };
//	FILE *pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S tmp = { 0 };
//	FILE *pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//1.定位文件指针
	fseek(pf,2,SEEK_CUR);
	//2.读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}