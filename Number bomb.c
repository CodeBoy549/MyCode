/*
Editor: Dev-C++ 5.11
Compiler: GCC
Additional compilation instructions: -O2 -std=c11
Code language: C
Make time: Aug. 8th,2025 16:44
Debug time: Aug. 8th,2025 17:01 
Finish time: Aug. 8th,2025 17:34
This is a game for "number bomb".
Everyone is welcome to correct errors and optimize the overall code!
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max_n 500
#define min_n 50
int main(){
	printf("This is \'number bomb\' game.\n");
	int choice;
	char more;
	printf("Please choose an options.\n");
	printf("  1) Guess number\n");
	printf("  2) Exit the game\n");
	printf("Your options(number):  ");
	scanf("%d",&choice);
	while(getchar()!='\n');
	if(choice==2){
		printf("Press \'Enter\' key to continue......");
		while(getchar()!='\n');
		return 0;
	}
	while(1){
		srand(time(NULL));
		int answer=min_n+rand()%(max_n-min_n+1);
		int guess;
		printf("Please guess a number(50~500):  ");
		while(1){
			scanf("%d",&guess);
			if(guess>max_n||guess<min_n){
				printf("Sorry.The number is not in the expected range\n");
				printf("Game over!\n");
				while(getchar()!='\n');
				printf("Press \'Enter\' key to continue......");
				while(getchar()!='\n');
				return 0;
			}else if(guess<answer){
				printf("Sorry.The number is small.Try again(50~500):  ");
			}else if(guess>answer){
				printf("Sorry.The number is big.Try again(50~500):  ");
			}else{
				printf("Congratulations!You win!\n");
				while(getchar()!='\n');
				break;
			}
		}
		printf("Do you want to one more game?(\'y\' or \'n\')\n");
		scanf("%c",&more);
		while(getchar()!='\n');
		if(more=='N'||more=='n'){
			printf("Press \'Enter\' key to continue......");
			while(getchar()!='\n');
			return 0;
		}
	}
	return 0;
}
