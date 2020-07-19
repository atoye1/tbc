
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum spectrum { red, orange, yellow, green, blue};
const char* colors[] = {"red", "orange", "yellow", "green", "blue"};

#define LEN 30

int main()
{
	char choice[LEN] = { 0 , };
	enum spectrum color;
	bool color_is_found = false;

	while (1)
	{
		//char input[LEN];
		//printf("Input a color name (empty line to quit):\n");	
		//if (getchar() == '\n') break;
		//scanf("%s", input);
		//printf("youre input value is --> %s\n", input);
		//for (int i = 0; i < 5; i++)
		//{
		//	if (strcmp(input, colors[i]) == 0)
		//	{
		//		printf("the color is %s\n", colors[i]);
		//		return 0;
		//	}
		//}
		//printf("please input a matching color\n");
		//while (getchar() != '\n') continue;
		
		puts("Input a color name (empty line to quit):");

		if (scanf("%[^\n]%*c", choice) != 1)
			break;

		for (color = red; color <=blue; color++)
		{
			if (strcmp(choice, colors[color]) == 0)
			{
				color_is_found = true;
				break;
			}
		}

		if (color_is_found)
			switch (color)
			{
				case red:
					puts("red roses");
					break;
				case blue:
					puts("blue roses");
					break;
				case green:
					puts("g roses");
					break;
				case yellow:
					puts("y roses");
					break;
				case orange:
					puts("oj roses");
					break;
			}
		else
			printf("Please try a different color %s.\n", choice);
		color_is_found = false;
	}
	puts("Goodbye!");

	return 0;
}
