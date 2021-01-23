#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float change;
    int n = 0;
    do
    {
     change = get_float("Change owed:");
    }
    while(change < 0);
    change = round(change * 100);
    while(change >= 25)
        {
            change = change - 25;
            n++;
        }
    while(change >= 10)
        {
            change = change - 10;
            n++;
        }
    while(change >= 5)
        {
            change = change - 5;
            n++;
        }
    while(change >= 1)
        {
            change = change - 1;
            n++;
        }
    
    
    
    
    printf("%d\n",n);
}