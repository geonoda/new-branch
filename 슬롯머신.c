#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InputMoney();
void Run();
int A;
int main void void vidxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
int main(void)
{
	srand(time(NULL));
	
	Run();
	printf("%d",A);
	return 0;
}
void InputMoney()
{
	int a=1000;
	
	printf("배팅금액을 입력하세요:");

	while(a>=1000)
	{
		scanf("%d",&a);
		if(a>=1000)
		{
			printf("다시 입력하세요");
		}
		else
		{
			A=a;
		 } 
	}

	
	
}
void Run()
{
	
	int b=1;
	
	while(b<3)
	{
		int Q=rand()%10;
		int W=rand()%10;
		int E=rand()%10;
		
		InputMoney();
		printf("게임 결과:%d %d %d\n",Q,W,E);
		if(Q==W&&Q==E)
		{
			printf("2등입니다");
			printf("금액은 %d입니다.\n",A*3);
		}
		else if(Q==7&&W==7&&E==7)
		{
			printf("1등입니다");
			printf("금액은 %d입니다\n",A*5);
		 } 
		else if((Q==W&&Q!=E)||(Q==E&&Q!=W)||(W==E&&W!=A))
		{
			printf("3등입니다");
			printf("금액은 %d입니다.\n",A*2);
		}
		else
		{
			printf(" 꼴지다\n");
			printf("금액은 %d이다",0);
		}
		printf("게임 계속 할겨?\n");
		printf("1.실행\n");
		printf("2.도움말\n");
		printf("3.종료\n");
		scanf("%d",&b); 
	
	
		 
	}
}
