#include <stdio.h>
int main()
{
	printf("*** This is a program still Building ***\n");
	int week=0, date=0, time=0;
	//现在定义所有用户的数据，先定义一个我的数据，有课为0，无课为1
	int wuzhihong[7][4] = {{1,0,0,0},{0,0,0,1},{0,0,1,1},{1,0,1,1},{0,1,0,1},{1,1,1,1},{1,1,1,1}};

	//下面先写按用户查询
	printf("Input the user you want to see: wuzhihong\n");
	//现在跳过判断用户阶段，默认wuzhihong
	//等一下在这边插入个user=wuzhihong，字符串是真的迷，不会

/*
	printf("请输入要查询的周数（从5-17）: ");
	scanf("%d",&week);
	week-=1;
*/

/*
	在wuzhihong定义的时间超出范围时，仍然有有效值出现
	for (int i = 0; i < 10; i++)
	{
		for (int n = 0; n < 10; n++)
		{
			printf("wuzhihong [%d][%d] is %d\n",i,n,wuzhihong[i][n] );
		}
	}
*/

	printf("Please input Day of Week(From 1-7): ");
	scanf("%d",&date);
	date-=1;
//为直观输入，计数从1开始，内部减1以符合逻辑
	printf("Which class you want to search(From 1-4): ");
	scanf("%d",&time);
	time-=1;

//因为无法解决超出范围还是会出现有效值的情况，这里人工做一个判断
	if (date<=6&&time<=3)
	{
		;
	}else{
		printf("The Time you input is incorrect, the program will now exit.\n");
		return 1;
	}

	if (wuzhihong[date][time]==1)
	{
		printf("Free\n");
	}
	else if (wuzhihong[date][time]==0)
	{
		printf("Busy\n");
	}
	else
	{
		printf("Error\n");
	}
	
	//考虑循环或goto，以及退出处理
	return 0;
}