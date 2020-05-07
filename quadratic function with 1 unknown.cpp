# include<stdio.h>
# include<math.h>

int main(void)
{
	//把三个系数保存到计算机中
	int a,b,c; //等号表示赋值，两个等号表示赋值 
	printf("请输入a,b,c的值\n");
	scanf("%d%d%d",&a,&b,&c);
	float delta;//Delta存放的是b的平方减4ac 
	double x1;
	double x2;
	delta=b*b-4*a*c;
 
	if(delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("该方程有两个解，X1=%f,x2=%f\n",x1,x2) ; 
	}
	else if (delta==0)
	{
		x1=(-b)/2*a;
		x2=x1;
		printf("该方程有一个解，X1=x2=%f\n",x1);
	 } 
	 else
	 {
	 	printf("无解，x1=%d,x2=%d\n",x1,x2) ;
	  } 
	  
getchar();
	  
return 0;	
}

