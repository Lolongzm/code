#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define MAX 1000
//�����˼��ͨѶ¼�Ƿ����˵�Checkcapaticy����
//�޸���Add����
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
	struct PeoInfo *data;//���һ����Ϣ
	int size;//��¼��ǰ����Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};

void InfoContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
void DestoryContact(struct Contact* ps);