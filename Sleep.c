#include <stdio.h>
#include <Windows.h>
int main(void)
{
	int i;
	
	for(i=1; i<=1000; i++)
	{
		printf("%d",i);
		Sleep(1000);
	}
	
	return 0;
}
