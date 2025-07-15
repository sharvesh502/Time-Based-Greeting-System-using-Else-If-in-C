
#include <stdio.h>

void main()
{
    int a;
    printf("Enter the time:");
    scanf("%d",&a);
    
    if(a<0 || a>23)
    {
        printf("Invalid Time");
        
    }
    else if(a>=0 && a<=11 )
    {
        printf("Good Morning");
    }
    else if(a>=12 && a<=16)
    {
        printf("Good afternoon");
        
    }
    else if(a>=17 && a<=20)
    {
        printf("Good Evening");
    }
    else if(a>=21 && a<=23)
    {
        printf("Good Night");
    }
}
