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
//	//���ļ�test.txt
//	//���·��
//	//fopen("../../test.txt", "r");
//		//����·��
//	//fopen("C:\Users\Administrator\Documents\Visual Studio 2013\Projects\\test_10_27\\test_10_27\\test.txt", "r");
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//�򿪳ɹ�
//	//���ļ�
//
//	//�ر��ļ�
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
//	fgets(buf, 1024, pf);//get��'bit\n'
//	printf("%s", buf);//�Զ�����
//
//	fgets(buf, 1024, pf);//get��'world'
//	printf("%s", buf);//û���Զ�����
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
//	fputs("���\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	fputs(buf, stdout);//�������׼�����
//
//	//�ȼ���
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
//	//�Ը�ʽ������ʽд���ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//�Ը�ʽ������ʽд���ļ�
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
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
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
//	//�����Ƶ���ʽд�ļ�
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
//	//�����Ƶ���ʽ���ļ�
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
	//1.��λ�ļ�ָ��
	fseek(pf,2,SEEK_CUR);
	//2.��ȡ�ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}