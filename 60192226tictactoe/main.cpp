#include <stdio.h>

void init_board(char board[][3])
{
	int x, y;
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			board[x][y] = ' ';
		}
	}
}

void show_board(char board[3][3])
{
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("---|---|---\n");
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		printf("---|---|---\n");
	}
}

int get_player_move(int player, char board[3][3])
{
	int x, y, done = 0;

	while (done != 1)
	{
		printf("(x, y) ��ǥ(����-1, -1): ");
		scanf("%d,%d", &x, &y);

		if (x == -1 && y == -1)
			return 1;

		if (board[x][y] == ' ')
			break;
		else
			printf("�߸��� ��ġ�Դϴ�.\n");
	}

	if (player == 0)
		board[x][y] = 'X';
	else
		board[x][y] = '0';
	return 0;
}



int main() {
	char board[3][3];
	int quit = 0;

	init_board(board);

	do {
		show_board(board);
		quit = get_player_move(0, board);
		show_board(board);
		quit = get_player_move(1, board);
	} while (quit == 0);
	{

	}

}