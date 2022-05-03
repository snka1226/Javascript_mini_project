#include <stdio.h>

int main()
{
    int n, i, tolow=1, tooluur=1, t;
    scanf("%d", &n);
    for(i=1; i<=2*n-1; i++)
    {
        t = tooluur;
        while(t--)
        {
            printf("*");
        }
        printf("\n");
        if(tooluur == n)
        {
            tolow = 2;
        }
        if(tolow == 1)
        {
            tooluur++;
        }
        else
        {
            tooluur--;
        }
    }
}