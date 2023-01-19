#include <stdio.h>
#include <string.h>


int main(void)
{
        char name[30];
        printf("before : ");
        scanf("%s", name);
        printf("\nAfter : ");
        for (int i = 0 ; i <= strlen(name) ; i++)
        {
                if (name[i] >= 'a' && name[i] <= 'z')
                {
                        printf("%c" , name[i] -32);
                
		}
		else if (name[i] == 32)
		{
			printf("_");
		}	
                else 
                {
                        printf("%c", name[i]);
                }
                
        }printf("\n");  

}       

