#define _CRT_SECURE_NO_WARNINGS 1
#include"2021-10-10 game.h"
void game()
{
	//�׵���Ϣ�洢
	char mine[ROWS][COLS] = { '0' };
	//�Ų�������׵���Ϣ
	char show[ROWS][COLS] = { '0' };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ��Ϸ����
	DisplayBoard(show,ROW,COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine(mine,show, ROW, COL);

}

void menu()
{
	printf("**********************\n");
	printf("******  1.play  ******\n");
	printf("****** ******** ******\n");
	printf("******  0.exit  ******\n");
	printf("**********************\n");

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
		if (input == 1)
		{
			system("cls");
			game();

		}
		else if (input == 0)
		{
			printf("�˳���Ϸ");
			break;
		}
		else
		{
			printf("���벻�Ϸ����������룺>");
		}


	} while (input);
}

int main()
{
	test();
	return 0;
}