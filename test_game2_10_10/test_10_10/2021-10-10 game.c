#define _CRT_SECURE_NO_WARNINGS 1
#include"2021-10-10 game.h"


void InitBoard(char mine[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			mine[i][j] = ret;
		}
	}

}

void DisplayBoard(char show[ROWS][COLS], int row, int col)
{
	int i = 1;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		int j = 1;
		printf("%d ",i);

		for (j = 1; j <= col; j++)
		{

			printf("%c ", show[i][j]);

		}
		printf("\n");

	}

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}


}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	 return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0' ;

}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x=0;
	int y=0;
	while (win<row*col-EASY_COUNT)
	{


		printf("请输入排查雷的坐标");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了！\n");
				DisplayBoard(mine,row, col);

				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				system("cls");
				DisplayBoard(show, row, col);
				win++;

			}
		}
		else
		{
			printf("输入非法，重新输入:>\n");
		}

	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");

	}
}


