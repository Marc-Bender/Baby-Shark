// Baby-Shark.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"


int main()
{
	const char * familymembers[] = { "Baby","Mommy", "Daddy","Grandpa","Grandma" };
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf("%s %s", familymembers[i], "Shark");
			for (int j = 0; j< 6; j++)
			{
				printf(" doo ");
			}
			printf("\n");
		}
		printf("%s %s", familymembers[i], "Shark!\n\n");
	}
	return 0;
}

