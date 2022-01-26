#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, sum=0;

    a=1;
    do
    {
        sum=sum+pow(a,4);
        a++;
    }
    while(a<=100);

    printf("1^4+2^4+3^4+..............+100^4 = %d",sum);


    getch();
    return 0;
}
