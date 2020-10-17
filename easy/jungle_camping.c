#include <stdio.h>
#include <string.h>

int main()
{
	/* dictionary */
	char noises[7];
	char lion[] = "Grr";
	char tiger[] = "Rawr";
	char snake[] = "Ssss";
	char bird[] = "Chirp";
	int i;

	/* algorithm */
	scanf("%s %s %s %s %s %s %s", &noises[0], &noises[1], &noises[2], &noises[3], &noises[4], &noises[5], &noises[6], &noises[7]);

	for (i=0;i<7;i++){
		if (noises[i] == *lion){
			printf("Lion");
		}
		else if (noises[i] == *tiger){
			printf("Tiger");
		}
		else if (noises[i] == *snake){
			printf("Snake");
		}
		else if (noises[i] == *bird){
			printf("Bird");
		}
		printf(" ");
	}

	return 0;	
}
