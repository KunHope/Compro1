#include<stdio.h>

void main()
{
    int K;
    scanf("%d",&K);
    int arr[K][K];
    for(int scan=0;scan<K;scan++)
    {
        for(int scan2=0;scan2<K;scan2++)
        {
            scanf("%d",&arr[scan][scan2]);
        }
    }

    int up=0,down=0;
    for(int Rup=0;Rup<K;Rup++)
    {
        for(int Cup=1+Rup;Cup<K;Cup++)
        {
          up+=arr[Rup][Cup];
        }
    }

    for(int Rdown=1;Rdown<K;Rdown++)
    {
        for(int Cdown=0;Cdown<Rdown;Cdown++)
        {
          down+=arr[Rdown][Cdown];
        }
    }

    printf("%d\n",up);
    printf("%d",down);
}
