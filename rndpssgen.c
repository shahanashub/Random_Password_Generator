#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generatePassword(int length)
{
char charset[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+~`-={}[]:';<>?,./\|";
int charsetSize=sizeof(charset)-1;

srand(time(NULL));

printf("Generated Password:");

for(int i=0;i<length;i++)
{
int index=rand()%charsetSize;
printf("%c", charset[index]);
}
printf("\n");
}

int main()
{
int length;

printf("Enter the desired password length:");
scanf("%d", &length);

if(length>0)
{
generatePassword(length);
}
else
{
printf("Please enter a valid length.\n");
}

return 0;
}
	

