#include<stdio.h>
 int main()
 {

     int month;
     double balance=0;
     scanf("%d",&month);
     for(int i=1;i<=month;i++)
     {

         balance=(100.00+balance)*1.0041;
         printf("%lf\n",balance);
     }
     return 0;
 }
