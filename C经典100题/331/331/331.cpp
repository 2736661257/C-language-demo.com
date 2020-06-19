
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	void enter_string(char str[]);
	void delete_string(char str[], char ch);
	/*void printf_string(char str[]);*/
	char str[80], c;
	enter_string(str);
	printf("please deletecharacter c\n");
	scanf("%c", &c);

	delete_string(str, c);

}
void enter_string(char str[])
{
	int i = 0;
	printf("please input string\n");
	while ((str[i] = getchar()) != '\n')
	{
			i++;
	}

	/*str[i] = '\n';*/

}
void delete_string(char str[], char ch)
{
	int i=0, j=0;
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] != ch)
		{
			str[j] = str[i];
			j++;
		}
		printf("%s\n", str);
	}
	
}