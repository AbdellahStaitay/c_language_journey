#include <stdio.h>
int main(void)
{	int i , points = 0 , answers[5];
	printf("Wlecome to the game \nPress 7 to start the game \nPress 0 to quit the game \n");
	scanf("%d", &i);
	switch (i)
	{	
		case 7 :
			printf("the game has started \n\n");
			break;
		case 0 :
			printf("the game has ended \n");
			break;
		default :
			printf("invalid input \n");
			break;
	}		
	if (i == 7)
	{
		printf("Q1) which one is the first search engine in internet? \n\n");
		printf("1) Google\n2) Archie\n3) Wait\n4) Altavista\n");
		printf("Enter your answer index (1-2-3-4) : ");
		scanf("%d", &answers[1]);

		if (answers[1] ==2)
		{
			points += 5;
			printf("correct Answer\nyour score is : %d \n\n",points);
		}	
		else 
		{	
			points += 0;
			printf("wrong Answer \nyour score is : %d \n\n" ,points);
		}
		
		printf("Q2) which one is the first web browser inventer in 1990 ?\n\n");
		printf("1) Internet Explorer\n2) Mosaic\n3) Mozilla\n4) Nexus\n");
		printf("Enter your answer index (1-2-3-4) : ");
		scanf("%d", &answers[2]);

		if (answers[2] == 4)
		{
			points += 5;
			printf("correct answer\nyour score is : %d \n\n",points);
		}	
		else
		{
			points += 0;
			printf("wrong answer\nyour score is : %d \n\n",points);
		}
		printf("Q3) First computer virus is known as\n\n");	
		printf("1) Rabbit\n2) Creeper Virus\n3) ELK Cloner\n4) SCA Virus\n");
		printf("Enter your answer index (1-2-3-4) : ");
		scanf("%d", &answers[3]);
		if (answers[3] == 2)
		{
			points += 5;
			printf("correct answer\nyour score is : %d \n",points);
		}	
		else
		{
			points += 0;
			printf("wrong answer\nyour scor is : %d \n", points);
		}	
		printf("Q4) Firewall in computer is used for : \n\n");
		printf("1) Security\n2) Data Transmission\n3) Monitoring\n4) Authentification\n");
		printf("Enter your answer indes (1-2-3-4) : ");
		scanf("%d",&answers[4]);
		if (answers[4] == 1)
		{
			points += 5;
			printf("correct answer\nyour score is : %d \n",points);

		}
		else
		{
			points += 0;
			printf("wrong answer\nyour score is : %d \n",points);
		}	
		printf("Q5) which of the following is not a database management software ?\n\n");
		printf("1) Mysql\n2) Oracle\n3) cobal\n4) Sybase\n");
		printf("Enter your answer index (1-2-3-4) : ");
		scanf("%d",&answers[5]);
	
		if (answers[5] == 3)
		{
			points += 5;
			printf("correct answer\nyour score is : %d \n",points);
		}	
		else 
		{	
			points += 0;
			printf("wrong answer\nyour score is : %d \n", points);
		}

		return 0;
	}	

}
		
