#include<stdio.h>
int main()
{

  int i=1;
  int n;
  scanf("%d",&n);
  double sum=0;
  for(i=1;i<=n;i++)
  {
      sum=sum+(double)1/i;

  }
  printf("%lf",sum);
  return 0;
}
