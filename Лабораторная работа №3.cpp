#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<malloc.h>

class st
{
	char name[100];
	int mass;
	int height;

	class message
	{
	public:
		char msg[100];//��������� ���������
	}str;
public:
	void vv(st ones, st two, st three, st four, st five)
	{
		printf("\n%s", ones.name);
		printf("\n%s", two.name);
		printf("\n%s", three.name);
		printf("\n%s", four.name);
		printf("\n%s\n", five.name);
		printf("\n���� � ��� �������� � ������ %s:%d     %d", ones.name, ones.height, ones.mass);
		printf("\n���� � ��� �������� � ������ %s:%d     %d", two.name, two.height, two.mass);
		printf("\n���� � ��� �������� � ������ %s:%d     %d", three.name, three.height, three.mass);
		printf("\n���� � ��� �������� � ������ %s:%d     %d", four.name, four.height, four.mass);
		printf("\n���� � ��� �������� � ������ %s:%d     %d", five.name, five.height, five.mass);
	}
public:
void print()
{
	printf("������� ��� ������� ��������:");
	gets_s(ones.name);
	printf("������� ��� ������� ��������:");
	gets_s(two.name);
	printf("������� ��� �������� ��������:");
	gets_s(three.name);
	printf("������� ��� ��������� ��������:");
	gets_s(four.name);
	printf("������� ��� ������ ��������:");
	gets_s(five.name);
}
public:
void pr()
{
	printf("������� ���� � ��� ������� ��������:");
	scanf("%d", &ones.height); while (getchar() != '\n');
	scanf("%d", &ones.mass); while (getchar() != '\n');
	printf("������� ���� � ��� ������� ��������:");
	scanf("%d", &two.height); while (getchar() != '\n');
	scanf("%d", &two.mass); while (getchar() != '\n');
	printf("������� ���� � ��� �������� ��������:");
	scanf("%d", &three.height); while (getchar() != '\n');
	scanf("%d", &three.mass); while (getchar() != '\n');
	printf("������� ���� � ��� ��������� ��������:");
	scanf("%d", &four.height); while (getchar() != '\n');
	scanf("%d", &four.mass); while (getchar() != '\n');
	printf("������� ���� � ��� ������ ��������:");
	scanf("%d", &five.height); while (getchar() != '\n');
	scanf("%d", &five.mass); while (getchar() != '\n');
}
public:
st doc(st* a)//�������� ������������� ���������
{
	a = (st*)malloc(sizeof(st));
	printf("\n������� ������ ��������\n������� ���:");
	gets_s(a->name);
	printf("%s", a->name);
	printf("\n�������� �� ���������,������� ������������ ���������\n���� ���������:");
	gets_s(a->str.msg);
	printf("%s", a->str.msg);

	return *a;
}
}ones, two, three, four, five;
st* a = new st[5];









int main()
{

	SetConsoleCP(1251);
	setlocale(LC_ALL, "russian");
	ones.print();
	ones.pr();
	ones.vv(ones, two, three, four, five);
	ones.doc(a);
	delete a;


}