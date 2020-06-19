#include<stdio.h>
int main()
{
	void varfunc();
	int i;
	for (i = 0; i < 3; i++)
	{
		varfunc();
	}
	return 0;
}
void varfunc()
{
	int var = 0;
	static int static_var = 0;
	printf("\40:var equal %d \n", var);
	printf("\40:static var equal %d \n", static_var);
	printf("\n");
	var++;
	static_var++;
}