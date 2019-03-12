/*
 * tictactoe.c
 *
 *  Created on: Feb 19, 2019
 *      Author: itopa
 */
#include <stdio.h>

void printBoard(char board[][3]);
int winCondition1(char tictac[][3]);
int winCondition2(char tictac[][3]);
void player1Input(int index1, int index2, char tictac[][3]);
void player2Input(int index1, int index2, char tictac[][3]);


void main()
{
	printf("tic tac toe\n");
	char tictac[3][3];
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			tictac[i][j] = '*';

	for(int i = 1; i < 6; i++)
	{
		int index1 = 0;
		int index2 = 0;
		printBoard(tictac);
		printf("Player 1 select the row for your marked spot: ");
		fflush(stdout);
		scanf("%d",&index1);
		printf("Player 1 select the column for your marked spot: ");
		fflush(stdout);
		scanf("%d", &index2);
		player1Input(index1, index2, tictac);
		if(winCondition1(tictac))
		{
			printBoard(tictac);
			printf("Player 1 wins!\n");
			break;
		}
		printBoard(tictac);
		if(i == 5)
		{
			printf("Game tied!\n");
			break;
		}
		printf("Player 2 select the row for your marked spot: ");
		fflush(stdout);
		scanf("%d", &index1);
		printf("Player 2 select the column for your marked spot: ");
		fflush(stdout);
		scanf("%d", &index2);
		player2Input(index1, index2, tictac);
		if(winCondition2(tictac))
		{
			printBoard(tictac);
			printf("Player 2 wins!\n");
			break;
		}
	}

}


void printBoard(char board[][3])
{
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
		{
			printf("%2c", board[i][j]);
			if( j == 2)
				printf("\n");
		}
}

int winCondition1(char tictac[][3])
{
	if(tictac[0][0] == 'X' && tictac[0][0] == tictac[0][1]
	        && tictac[0][1] == tictac[0][2])
		return 1;
	else if(tictac[0][0] == 'X' && tictac[0][0] == tictac[1][1]
			&& tictac[1][1] == tictac[2][2])
		return 1;
	else if(tictac[1][0] == 'X' && tictac[1][0] == tictac[1][1]
			&& tictac[1][1] == tictac[1][2])
		return 1;
	else if(tictac[2][0] == 'X' && tictac[2][0] == tictac[2][1]
			&& tictac[2][1] == tictac[2][2])
		return 1;
	else if(tictac[0][0] == 'X' && tictac[0][0] == tictac[0][1]
		    && tictac[0][1] == tictac[0][2])
		return 1;
	else if(tictac[0][1] == 'X' && tictac[0][1] == tictac[1][1]
			&& tictac[1][1] == tictac[2][1])
		return 1;
	else if(tictac[0][2] == 'X' && tictac[0][2] == tictac[1][2]
			&& tictac[1][2] == tictac[2][2])
		return 1;
	else if(tictac[2][0] == 'X' && tictac[2][0] == tictac[1][1]
			&& tictac[1][1] == tictac[0][2])
		return 1;
	else
		return 0;
}

int winCondition2(char tictac[][3])
{
	if(tictac[0][0] == 'O' && tictac[0][0] == tictac[0][1]
		        && tictac[0][1] == tictac[0][2])
			return 1;
		else if(tictac[0][0] == 'O' && tictac[0][0] == tictac[1][1]
				&& tictac[1][1] == tictac[2][2])
			return 1;
		else if(tictac[1][0] == 'O' && tictac[1][0] == tictac[1][1]
				&& tictac[1][1] == tictac[1][2])
			return 1;
		else if(tictac[2][0] == 'O' && tictac[2][0] == tictac[2][1]
				&& tictac[2][1] == tictac[2][2])
			return 1;
		else if(tictac[0][0] == 'O' && tictac[0][0] == tictac[0][1]
			    && tictac[0][1] == tictac[0][2])
			return 1;
		else if(tictac[0][1] == 'O' && tictac[0][1] == tictac[1][1]
				&& tictac[1][1] == tictac[2][1])
			return 1;
		else if(tictac[0][2] == 'O' && tictac[0][2] == tictac[1][2]
				&& tictac[1][2] == tictac[2][2])
			return 1;
		else if(tictac[2][0] == 'O' && tictac[2][0] == tictac[1][1]
				&& tictac[1][1] == tictac[0][2])
			return 1;
		else
			return 0;
}

void player1Input(int index1, int index2, char tictac[][3])
{
	tictac[index1][index2] = 'X';
}

void player2Input(int index1, int index2, char tictac[][3])
{
	tictac[index1][index2] = 'O';
}
