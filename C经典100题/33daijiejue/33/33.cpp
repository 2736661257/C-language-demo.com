//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//char* deleteCharacters(char * str, char * charSet)
//{
//	int hash[256];
//	if (NULL == charSet)
//		return str;
//	for (int i = 0; i < 256; i++)
//	{
//		hash[i]=0;
//	}
//	for (int i = 0; i < strlen(charSet); i++)
//	{
//		hash[charSet[i]] = 1;
//	}
//	int currentIndex = 0;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (!hash[str[i]])
//			str[currentIndex++] = str[i];
//	}
//	str[currentIndex] = '\0';
//	return str;
//}
//int main()
//{
//	char s[2] = "a";
//	char s2[5] = "aca";
//	printf("%s\n", deleteCharacters(s2, s));
//	return 0;
//}



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
	gets(c);
	delete_string(str, c);

}
void enter_string(char str[])
{
	int i;
	printf("please input string\n");
	for (i = 0; i < 80; i++)
	{
		while ((str[i] = getchar()) != '\n')
		{
			;
		}

	}
	

}
void delete_string(char str[], char ch)
{
	int i, j;
	for (i = j = 0; i < 80; i++)
	{
		while (str[i] != ch)
		{
			str[j] = str[i];
		}
	}
	str[j] = '\n';
	printf("%s\n", str);
}
