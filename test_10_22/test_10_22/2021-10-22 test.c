#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str1);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//
//
//	//1.��str1����׷��һ��str1
//	//strcat(str1, str1);strcat�����޷�׷���Լ�
//	strncat(str1, str1,len); //abcdefabcdef
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//int FindNum(int arr[3][3],int k,int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x<=*px-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y; 
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;//��7
//	int x = 3;
//	int y = 3;
//	//�����Ͳ���
//	int ret = FindNum(arr, k, &x,&y);
//	if (ret == 1)
//	{
//		printf("�ҵ���,����Ϊ��(%d,%d)\n",x,y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//
#include<assert.h>
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//while(*str)
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abxed");
//	printf("%d", len);
//	return 0;
//}







//char* my_strcpy(char * dest, char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char * ret = dest;//����srcָ����ַ�����destָ��Ŀռ䣬����\0��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�ĵؿռ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[] = { "abcdeff" };
//	char arr2[] = {"bit"};
//	//char arr2[]={'b','i','t'};����ʾ��
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}



//char *my_strcat(char * dest, const char * src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char * ret = dest;
//	while (*dest != 0)
//	{
//		dest++;
//	}
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);//��Ŀ�ĵص�\0����׷�ӣ�ԭ�ַ���\0Ҳ��׷�ӵ�Ŀ�ĵ��ռ�
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char *str1, const char *str2)
//{
//	while (*str1 == *str2)
//	{
//
//		str1++;
//		str2++;
//		if (!(*str1))
//		{
//			return 0;
//		}
//
//	}
//
//	return(*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "baef";
//	char* p2 = "aef";
//	int ret = my_strcmp(p1, p2);//����λ����Ƚ�
//	printf("ret=%d", ret);
//	return 0;
//}

//char * strncpy(const char* dest, const char* src, int k)
//{
//	char * cp = dest;
//	while (k&&(*cp++ = *src++))
//		k--;
//	if (k)
//		while (--k)
//			*cp++ = '\0';
//	
//	return dest;
//}
//
//
//int main()
//{
//	char arr1[10] = "abcefgh";
//	char arr2[] = "hell";
//	strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}


//char *my_strcat(char * dest, const char * src,int k)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char * ret = dest;
//	while (*dest != 0)
//	{
//		dest++;
//	}
//
//	while (k--)
//	{
//		if (*src!='\0')
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2,3);//��Ŀ�ĵص�\0����׷�ӣ�ԭ�ַ���\0Ҳ��׷�ӵ�Ŀ�ĵ��ռ�
//	printf("%s\n", arr1);
//	return 0;
//}

//[�˴���Ϊ������]
//int strncmp( char* str1, char* str2,int k)
//{
//	/*int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	assert(k <= len1 + 1);
//	assert(k <= len2 + 1);*/
//	int ret = 0;
//	while (k)
//	{
//		if (*str1 == '\0')
//		{
//			*str1 = '\0';
//		}
//		else if (*str2 == '\0')
//		{
//			*str2 = '\0';
//		}
//		ret = *str1++ - *str2++;
//		k--;
//	}
//	return ret;
//}
//
//int main()
//{
//	const char * p1 = "abcad";
//	const char * p2 = "abc";
//	int k = 5;
//	int ret = strncmp(p1, p2,k);
//	printf("%d", ret);
//	return 0;
//}





//#include<string.h>
//char * my_strstr(const char *p1,const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ���
//		}
//
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//cur�ߵ���\0,���Ҳ����ִ���ƥ��
//}
//	
//
//int main()
//{
//	char * p1 = "abbbcdef";
//	char * p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else
//	{
//		printf("�ҵ����ִ�%s\n",ret);
//	}
//	return 0;
//}



//int main()
//{
//	char arr[] = "lolongzm@163.com";
//	char *p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}

//#include<errno.h>
//int main()
//{
//	////������    ������Ϣ
//	////0 -      No error 
//	////1 -      Operation not permitted
//	////2 -
//	////...
//	//char *str = strerror(errno);
//	//printf("%s\n", str);
//	////errno��һ��ȫ�ֵĴ�����ı���
//	////��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//No such file or directory
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	char ch = 'w';
//	//int ret = islower(ch);//�Ƿ�ΪСд��ĸ
//	int ret = isdigit(ch);//�Ƿ�Ϊʮ��������
//	printf("%d\n", ret);
//	return 0;
//}
#include<ctype.h>

int main()

{

	char ch = 'q';

	char ret = toupper(ch);
	char final = tolower(ret);
	printf("%c\n",ret );
	printf("%c\n", final);
	return 0;

}