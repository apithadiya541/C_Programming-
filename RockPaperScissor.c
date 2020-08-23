#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int RockPaperScissor(char you, char Computer){

	// returns 1 if you win, -1 if you lose and 0 if draw

	// Condition for draw if you and Computer both choose same like Rock-Rock, Paper-Paper, Scissor-Scissor

	if(you == Computer){

		return 0;

	}

	// Non-draw conditions are Rock-Paper, Rock-Scissor, Paper-Scissor, Paper-Rock, Scissor-Rock, Scissor-Paper
	// Rock -> 'r', Paper-> 'p', Scissor-> 's'

	if(you=='r' && Computer=='p'){

		return -1;

	}

	else if(you=='r' && Computer=='s'){

		return 1;

	}

	if(you=='p' && Computer=='s'){

		return -1;

	}

	else if(you=='p' && Computer=='r'){

		return 1;

	}

	if(you=='s' && Computer=='r'){

		return -1;

	}

	else if(you=='s' && Computer=='p'){

		return 1;

	}

}

void input()
{

	char  you, Computer;
	int number = rand()%100 + 1;

	if(number<33){

		Computer = 'r';

	}

	else if(number>33 && number<66){

		Computer='p';

	}

	else{

		Computer='s';

	}

	printf("\n\nEnter 'r' for Rock, 'p' for Paper and 's' for Scissor\n");

	scanf(" %c", &you);

	if( !((you == 'r') || (you == 'p') || (you == 's') ))
	{
		printf("\n\nPlease select a proper input\n\n");
		return;
	}

	int result = RockPaperScissor(you, Computer);
	if(result ==0){

		printf("Game draw!\n");

	}

	else if(result==1){

		printf("You win!\n");

	}

	else{

		printf("You Lose!\n");

	}

	printf("You choose %c and Computer choose %c. \n\n", you, Computer);
}

int main(){

	int result;
	char ch;

	srand(time(0));

	printf("\t\t\t\t\tWelcome to Rock, Paper, Scissor game\n\n\n");

	do
	{
		input();
		printf("\n\t\t\tdo u want to play again (Y/y)\n");//ask if u want play again
		scanf(" %c",&ch);
	}
	while(ch=='Y'||ch=='y');

}
