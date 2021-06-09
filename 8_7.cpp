#include<stdio.h>

float f1(int (*stu)[6])
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += *(*(stu + i));
	}
	return (1.0 * sum) / 4;
}  

void f2(int(*stu)[6])
{

	/*for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			printf("%d ", *(*(stu + a) + b));
		}
		printf("\n\n");
	}*/
	int s = 0;//记录不及格学生的人数
	int fail[4] = { 0 };//记录不及格学生的学号

	for (int a = 0; a < 4; a++)//排查有两门以上不及格的学生
	{
		int c = 0;//记录有几门课不及格
		for (int b = 0; b < 5; b++)
		{
			int f = (*(*(stu + a) + b));
			if (*(*(stu + a) + b) < 60)
			{
				c++;
			}
		}
		if (c > 2)//判断不及格的科数是否大于2
		{
			s++;//不及格人数加1
			fail[s - 1] = *(*(stu + a) + 5);//记录不及格学生学号
		}
	}
	printf("有%d名学生不及格。\n\n", s);
	for (int a = 0; a < s; a++)//输出他们的学号和全部课程成绩及平均成绩
	{
		int sum = 0;
		int k = 0;//用于输出课程
		printf("第%d位不及格学生的学号：%d\n\n", a + 1, fail[a]);
		printf("全部课程成绩为：");
		while (k < 5)
		{
			printf("%d ", *(*(stu + fail[a] - 1) + k));
			sum += *(*(stu + fail[a] - 1) + k);
			k++;
		}
		printf("\n");
		printf("平均成绩为：%d", sum / 5);
		printf("\n\n");
		
	}

}

void f3(int (*stu)[6])//找出平均成绩在90分以上或者全部课程成绩在85分以上的学生。
{
	for (int a = 0; a < 4; a++)//找出平均成绩在90分以上
	{
		int sum = 0;
		for (int b = 0; b < 5; b++)
		{
			sum += *(*(stu + a) + b);
		}
		if ((sum / 5) > 90)
			printf("学号为 %d 的同学平均成绩在90分以上。\n\n", a + 1);
	}

	for (int a = 0; a < 4; a++)//全部课程成绩在85分以上的学生
	{
		int c = 0;//用于判断
		for (int b = 0; b < 5; b++)
		{
			if (*(*(stu + a) + b) > 85)
			{
				c++;
			}
			else
				break;
		}
		if (c == 5)
			printf("学号为 %d 的同学全部课程成绩在85分以上。\n\n", a + 1);

	}
}

int main()
{
	//4个学生5门课，可以用数组的方法处理
	int stu[4][6] = { {97,95,94,94,94,1},
					  {18,49,37,89,84,2},
					  {86,96,89,87,95,3},
					  {89,37,64,19,35,4} };
	//每组数，前5个数是成绩， 最后的数是学号

	for (int a = 0; a < 4; a++)
	{
		printf("第%d个学生的5门功课的成绩和学号依次是：\n\n", a + 1);
		for (int b = 0; b < 6; b++)
		{
			printf("%d ", stu[a][b]);
		}
		printf("\n\n");
	}

	float ave = f1(stu);//第一门课程的平均分
	printf("第一门课程的平均分:%f\n\n", ave);
	f2(stu);//找出两门以上课程不及格的学生，输出他们课程的学号和全部课程成绩及平均成绩。
	f3(stu);//找出平均成绩在90分以上或者全部课程成绩在85分以上的学生。


	return 0;
}