#include<stdio.h>
#include<math.h>

float x1,x2,disc;

void f1(int a,int b)//��disc������ʱ 
{
	x1=(-b+sqrt(disc))/(2*a);
	x1=(-b+sqrt(disc))/(2*a);
	printf("�÷�����������ͬ�Ľ⣺x1 = %f,x2 = %f��\n",x1,x2);
}
void f2(int a,int b)//��disc������ʱ 
{
	x1=(-b)/(2*a);
	printf("�÷�����������ͬ�Ľ⣺x1 = x2 = %f��\n",x1);
}

void f3(int a,int b)
{
	printf("�÷����޽�!");
}

int main()
{
	int a,b,c;
	printf("�������Ӧ�� a b c: ");
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
