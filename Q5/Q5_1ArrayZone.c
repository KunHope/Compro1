#include<stdio.h>

void main()
{
    int R,C;
    scanf("%d",&R,&C);
    int num[R][C];
    for(int Roll=0;Roll<R;Roll++)
    {
        for(int Coll=0;Coll<C;Coll++)
        {
            scanf("%d",&num[Roll][Coll]);
        }
    }
}
