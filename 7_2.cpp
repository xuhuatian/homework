#include<stdio.h>
#include<math.h>

float x1,x2,disc;

void f1(int a,int b)//当disc大于零时 
{
	x1=(-b+sqrt(disc))/(2*a);
	x1=(-b+sqrt(disc))/(2*a);
	printf("该方程有两个不同的解：x1 = %f,x2 = %f。\n",x1,x2);
}
void f2(int a,int b)//当disc等于零时 
{
	x1=(-b)/(2*a);
	printf("该方程有两个不同的解：x1 = x2 = %f。\n",x1);
}

void f3(int a,int b)
{
	printf("该方程无解!");
}

int main()
{
	int a,b,c;
	printf("请输入对应的 a b c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	disc=b*b-4*a*c; 
	
	if(disc>0)
	f1(a,b);
	else if(disc == 0)
	f2(a,b);
	else
	f3(a,b);
	
	return 0;
}
