#include<stdio.h>
 int main()
{
int count=1,year_num;
float Rate;
unsigned long CurrentYr;
unsigned long NextYr;

while (count<=1)
{
    printf("Enter the initial egret population:3000 ");
    scanf("%d",&CurrentYr);
    printf("Enter the rate:20% ");
    scanf("%f",&Rate);

    printf("Year  Population\n");
    printf("----  ----------\n");



    if ((CurrentYr>0 && CurrentYr<1000000) && (Rate>0 && Rate<4))
    {
        NextYr = CurrentYr;
        for(year_num=0;year_num<=25;year_num++)
        {
            NextYr = 20 * NextYr * (1-NextYr/1000000);
            printf("%4d%12d\n",year_num,NextYr);

        }
        break;
    }

    else if ((CurrentYr < 0 || CurrentYr > 1000000) || (Rate<0 || Rate>4))
    {
        printf("Invalid Input!");
        printf("Enter the initial egret population: ");
        scanf("%d",&CurrentYr);
        printf("Enter the rate: ");
        scanf("%f",&Rate);
    if ((CurrentYr>0 && CurrentYr<1000000) && (Rate>0 && Rate<4))
    {
        NextYr = CurrentYr;

        for(year_num=0;year_num<=25;year_num++)
        {
            printf("%4d%12d\n",year_num,NextYr);
            NextYr = Rate * NextYr * (1-NextYr/1000000);


        }
        break;

    }
    else
    {
        printf("No more chance ! Bye ! ");
    }
}
return 0;
}
}
