 #include<stdio.h>
 #include<math.h>
  int main()
  {

   int a,b,c;
   scanf("%d\n%d\n%d",&a,&b,&c);

   if(pow(a,2)==pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(a,2)+pow(b,2))
       printf("they are side of the right angle");

    else
        printf(" They are not right angle");
    return 0;

  }
