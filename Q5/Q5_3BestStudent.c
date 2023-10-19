#include<stdio.h>
#include<limits.h>
struct Student
{
    char ID[8+1];
    char name[30+1];
    char surname[50+1];
    float grade;
}typedef ST;

void main()
{
    int N;
    scanf("%d",&N);
    ST num[N];
    for(int i=0;i<N;i++)
    {
        scanf("%s",num[i].ID);
        scanf("%s",num[i].name);
        scanf("%s",num[i].surname);
        scanf("%f",&num[i].grade);
    }

    float max=INT_MIN;
    int nmax=0;
    for(int i=0;i<N;i++)
    {
        if(num[i].grade>max)
        {
            max=num[i].grade;
            nmax=i;
        }
    }

    printf("%s ",num[nmax].ID);
    printf("%s ",num[nmax].name);
    printf("%s ",num[nmax].surname);
    printf("%.2f",num[nmax].grade);
}
