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
	
	printf("���ñݾ��� �Է��ϼ���:");

	while(a>=1000)
	{
		scanf("%d",&a);
		if(a>=1000)
		{
			printf("�ٽ� �Է��ϼ���");
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
		printf("���� ���:%d %d %d\n",Q,W,E);
		if(Q==W&&Q==E)
		{
			printf("2���Դϴ�");
			printf("�ݾ��� %d�Դϴ�.\n",A*3);
		}
		else if(Q==7&&W==7&&E==7)
		{
			printf("1���Դϴ�");
			printf("�ݾ��� %d�Դϴ�\n",A*5);
		 } 
		else if((Q==W&&Q!=E)||(Q==E&&Q!=W)||(W==E&&W!=A))
		{
			printf("3���Դϴ�");
			printf("�ݾ��� %d�Դϴ�.\n",A*2);
		}
		else
		{
			printf(" ������\n");
			printf("�ݾ��� %d�̴�",0);
		}
		printf("���� ��� �Ұ�?\n");
		printf("1.����\n");
		printf("2.����\n");
		printf("3.����\n");
		scanf("%d",&b); 
	
	
		 
	}
}
