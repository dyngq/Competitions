#include <stdio.h>

typedef struct
{
    char name[11];
    char id[11];
    int mark;
}Student;

int main()
{
    int n;
    scanf("%d",&n);
    Student stu[n];
    int max = 0,max_num;
    int min = 100,min_num;
    int temp,temp_num;
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %d",stu[i].name,stu[i].id,&stu[i].mark);
        temp = stu[i].mark;
        if(temp > max)
        {
            max = temp;
            max_num = i;
        }
        if(temp < min)
        {
            min = temp;
            min_num = i;
        }
    }
    printf("%s %s\n",stu[max_num].name,stu[max_num].id);
    printf("%s %s",stu[min_num].name,stu[min_num].id);
    return 0;
}
