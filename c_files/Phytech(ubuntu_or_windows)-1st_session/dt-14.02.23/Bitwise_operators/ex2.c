#include <stdio.h>
int main()
{
    int a, j;
    printf("enter the value of a is:");
    scanf("%d", &a);
    printf("binary form of a given number\n");
    for (int i = 7; i >= 0; i--)
    {
        j = (a >> i) & 1;
        printf("position: %d\n", i);
        printf("binary value: %d\n", j);
        if(j == 1)
        {
            printf("the bulb will glow\n");
        }
    }

    return 0;
}
