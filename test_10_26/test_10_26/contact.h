#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define MAX 1000
//增加了检测通讯录是否满了的Checkcapaticy函数
//修改了Add函数
#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

struct Contact
{
	struct PeoInfo *data;//存放一个信息
	int size;//记录当前已有元素个数
	int capacity;//当前通讯录的最大容量
};

void InfoContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
void DestoryContact(struct Contact* ps);