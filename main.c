#include<stdio.h>
#include<string.h>

struct student_info
{
	char name[7];
	int  age;
	char sex[3];
	char id[10];
};
int main()
{
	struct student_info student1 = { "臧高强", 28, "男", "B19031328" };
	printf("姓名：%s\n",student1.name);		//结构体变量.成员
	printf("年龄：%d岁\n", student1.age);
	printf("性别：%s\n", student1.sex);
	printf("学号：%s\n", student1.id);

	struct student_info* p = &student1;
	printf("姓名：%s\n",(*p).name);
	printf("年龄：%d岁\n",(*p).age);

	printf("性别：%s\n",p->sex);	//指针指向对象的成员 结构体指针->成员
	printf("学号：%s\n", p->id);	//p指向的student的id

	strcpy_s(student1.name,sizeof(p->name)/sizeof(char) ,"胡一博");
	printf("姓名：%s\n",student1.name);

	return 0;
}