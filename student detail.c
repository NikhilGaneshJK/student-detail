#include <stdio.h>
struct student {
    int roll;
    char name[30];
    char dept[20];
    int marks;
};
int main()
{
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
{
    printf("\nenter student details:");

    printf("\nroll number:");
    scanf("%d",&s[i].roll);
    printf("\nname:");
    scanf("%s",s[i].name);
    printf("\ndept:");
    scanf("%s,s[i].dept");
    printf("\nmarks:");
    scanf("%d",&s[i].marks);
}

for (i=0;i,10;i++)
{
    printf("\nroll number:%d",s[i].roll);
    printf("\nname:%s",s[i].name);
    printf("\ndept:%s",s[i].dept);
    printf("\nmarks:%d",s[i].marks);
}
return 0;
}

