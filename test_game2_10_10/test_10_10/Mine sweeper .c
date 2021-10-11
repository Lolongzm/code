#define _CRT_SECURE_NO_WARNINGS 1
#include"2021-10-10 game.h"
void game()
{
	//雷的信息存储
	char mine[ROWS][COLS] = { '0' };
	//排查出来的雷的信息
	char show[ROWS][COLS] = { '0' };
	//初始化雷阵
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印游戏界面
	DisplayBoard(show,ROW,COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
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

		printf("请选择:>");
		scanf("%d", &input);
		if (input == 1)
		{
			system("cls");
			game();

		}
		else if (input == 0)
		{
			printf("退出游戏");
			break;
		}
		else
		{
			printf("输入不合法，重新输入：>");
		}


	} while (input);
}

int main()
{
	test();
	return 0;
}