# include<stdio.h>
# include<math.h>

int main(void)
{
	//������ϵ�����浽�������
	int a,b,c; //�Ⱥű�ʾ��ֵ�������Ⱥű�ʾ��ֵ 
	printf("������a,b,c��ֵ\n");
	scanf("%d%d%d",&a,&b,&c);
	float delta;//Delta��ŵ���b��ƽ����4ac 
	double x1;
	double x2;
	delta=b*b-4*a*c;
 
	if(delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("�÷����������⣬X1=%f,x2=%f\n",x1,x2) ; 
	}
	else if (delta==0)
	{
		x1=(-b)/2*a;
		x2=x1;
		printf("�÷�����һ���⣬X1=x2=%f\n",x1);
	 } 
	 else
	 {
	 	printf("�޽⣬x1=%d,x2=%d\n",x1,x2) ;
	  } 
	  
getchar();
	  
return 0;	
}

