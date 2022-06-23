    #include<stdio.h>
    int main()
    {
    int i=1;
    int sum=0;
    int count=0;
    for(i=1;i<=100;i++)
    { if(i%6==0 && i%4!=0)
       {
            sum=sum+i;
            printf("numbers are:%d\n",i);
       }
    }
    printf("sum is:%d",sum);

    return 0;
    }
