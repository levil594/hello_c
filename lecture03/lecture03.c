#include<stdio.h>

int main()
{
	int game_state = 0;

	printf("연애 횟수를 입력하세요 :\n")
	scanf("%d",&game_state);
	
	if(game_state)
	{
		printf("나의 연애 경험 횟수 : %d 회",game_state);
	}
	else
	{
		printf("못했네 ㅄ ㅋㅋ");
	}
	return 0;
}
