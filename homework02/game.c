#include <stdio.h>
#include <string.h>
//#include <screen.c>

int width = 30;
int height = 15;

int clearBuffer(char* screenBuf, int width, int height)
{
    int i = 0;
    int j = 0;
    while (j < height)
    {
        while (i < width + 1)
        {
            if (i == width)
                screenBuf[i + (j * (width + 1))] = '\n';
            else
            {
                if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))
                    screenBuf[i + (j * (width + 1))] = '#';
                else
                    screenBuf[i + (j * (width + 1))] = ' ';
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    screenBuf[height * (width + 1) - 1] = '\0';
}

int writeStringToBuffer(const char* string, int x, int y, char* screenBuf)
{
    int index = y * (width + 1) + x;
    int length = strlen(string);
    
    if (x < 0 || x + length > width || y < 0 || y >= height)
    {
        return 0;
    }
    for (int i = 0; i < length; i++)
    {
        if (index + i < width * height) 
        {
            screenBuf[index + i] = string[i];
        }
    }

    return 1;
}


//게임 타이틀 스크린
int gametitleScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, width, height);
	writeStringToBuffer(screenBuf,"Legendary Sword Adventure", width / 2-7, height / 2-2, screenBuf);
	writeStringToBuffer(screenBuf,"1. Game Start", width / 2-5, height / 2-1, screenBuf);
	writeStringToBuffer(screenBuf,"2. Rules", width / 2-5, height / 2 , screenBuf);
	writeStringToBuffer(screenBuf,"3. options", width / 2-4, height / 2+1, screenBuf);

	return 0;
}

//게임 룰 스크린
int gamerulesScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, width, height);
	writeStringToBuffer(screenBuf,"Rules", width / 2-7, height / 2-2, screenBuf);
	writeStringToBuffer(screenBuf,"move with the WASD", width / 2-5, height / 2-1, screenBuf);
	writeStringToBuffer(screenBuf,"attack with the space bar", width / 2-5, height / 2, screenBuf);
	writeStringToBuffer(screenBuf,"go back?", width / 2-4, height / 2+1, screenBuf);
	

	printf("%s\n input> \n", screenBuf);

	return 0;
}

//게임  옵션 스크린
int gameoptionScreenBuffer(char* screenBuf, int width, int height)
{
	clearBuffer(screenBuf, width, height);	
	writeStringToBuffer(screenBuf,"Sound   <- 50% ->", width / 2-7, height / 2-2, screenBuf);
}

int main()
{
	char screenBuf[465]; 
	int ScreenNumber = 1;
	
	while (1)
	{
		if (ScreenNumber == 1)
		{
			gametitleScreenBuffer(screenBuf, width, height);
		}
		else if (input == 2)
		{
			gamerulesScreenBuffer(screenBuf, width, height);
		}
		else if (input == 3)
		{
			gameoptionScreenBuffer(screenBuf, width, height);
		}
		
		printf("%s\n", screenBuf);

		int choose;
		if (scanf("%d", &choose) @ = 1)
		{
			printf("제대로 입력하지 않으면 죽여버리겠다.\n");
			while (getchar() @ = '\n');
			continue;
		}
		
		if (ScreenNumber == 1)
		{
			if (choose == 2)
			{
				ScreenNumber = 3;
			}
			else if (choose == 3)
			{
				ScreenNumber = 4;
			}
			else if (choose == 4)
			{
				break;
			}
		}
		else if (ScreenNumber == 3) 
        	{
            		if (choose == 1) 
            		{
                	ScreenNumber = 1;
            		} 
            		else if (choose == 2) 
            		{
                
            		}
        	} 
	}
	return 0;
}

