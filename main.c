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
	struct student_info student1 = { "갸�ǿ", 28, "��", "B19031328" };
	printf("������%s\n",student1.name);		//�ṹ�����.��Ա
	printf("���䣺%d��\n", student1.age);
	printf("�Ա�%s\n", student1.sex);
	printf("ѧ�ţ�%s\n", student1.id);

	struct student_info* p = &student1;
	printf("������%s\n",(*p).name);
	printf("���䣺%d��\n",(*p).age);

	printf("�Ա�%s\n",p->sex);	//ָ��ָ�����ĳ�Ա �ṹ��ָ��->��Ա
	printf("ѧ�ţ�%s\n", p->id);	//pָ���student��id

	strcpy_s(student1.name,sizeof(p->name)/sizeof(char) ,"��һ��");
	printf("������%s\n",student1.name);

	return 0;
}