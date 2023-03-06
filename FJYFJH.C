#include<stdio.h>
struct Employee
{
int eid;
char name[20];
	struct address 
	{
	int hno;
	char zip[20];
	char city[20];
	char state[20];
	}a;
};
struct Employee *e;
int main()
{
printf("Enter employee id name ,address(hno,zip,city,state)");
scanf("%d%s%d%s%s%s",&e->eid,&e->name,&e->a.hno,e->a.zip,e->a.city,e->a.state);
printf("Eid=%d\n",e->eid);
printf("Eid=%s\n",e->name);
printf("e->a->hno=%d\n",e->a.hno);
printf("e->a->zip=%s\n",e->a.zip);
printf("e->a->city=%s\n",e->a.city);
printf("e->a->state=%s\n",e->a.state);
return 0;
}