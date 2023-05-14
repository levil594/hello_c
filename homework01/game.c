#include <stdio.h>

int game1;
int print_game_title_screen()
{
	printf("##############################");
	printf("##                          ##");
	printf("##    임시 게임 이름        ##");
	printf("##                          ##");
	printf("##                          ##");
	printf("##                          ##");
	printf("## 1. Game Start            ##");
	printf("##                          ##");
	printf("## 2. Rules                 ##");
	printf("##                          ##");
	printf("## 3. Exit                  ##");
	printf("##                          ##");
	printf("##############################");

	return 0;
}

int game2;
int print_game_rules_screen()
{

	printf("##############################");
	printf("##                          ##");
	printf("##       You can move       ##");
	printf("##       using 'wasd'       ##");
	printf("##                          ##");
	printf("##   and press 'space bar'  ##");
	printf("##       You can jump       ##");
	printf("##                          ##");
	printf("##     back? Yes:1 No:2     ##");
	printf("##                          ##");
	printf("##############################");

	return 0;
}
int main()
{
	print_game_title_screen();
	printf("input> ");
	scanf("%d", &game1);
	while(game2 < 3)
	{
		if(game2 == 2)
		{
			print_game_rules_screen();
			printf("input> ");
			scanf("%d", game2);
			while(game2 < 3)
			{
				if(game2 == 1)
				{
					print_game_title_screen();
					printf("input> ");
					scanf("%d", &game1);
					break;
				}
				else
				{
					break;
				}
			}
		}
		else if(game1 == 3)
		{
			break;
		}
	}
	return 0;
}

