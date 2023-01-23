#include <stdio.h>
int main(void)
{
    int num;
    char text[20];
    printf("enter your number : ");
    scanf("%d",&num);
    sprintf(text,"%d",num);
    printf("you have entred the number %s \n", text);
    
}
