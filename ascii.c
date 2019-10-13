#include<stdio.h>
int main()
{

    char a,b,c,d,e;
    printf("Enter 5 characters\n");
    scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);
    int sum = a+b+c+d+e;
    printf("Sum of Ascii of characters is %d\n",sum);
    float avg = sum/5.00;
    printf("Average of ascii sum is = %f\n",avg);
    int trunc = avg;
    float dec = avg- trunc;
    if(dec>=0.5)
    {trunc++;
    printf("Average after rounding off = %d",trunc);}
    else
        printf("Average after rounding off = %d",trunc);
        return 0;
}
