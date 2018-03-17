#include<stdio.h>
int fact (int n)
{
  int fa;

  if(n==1)
    return 1;
  else
  {
    fa=n*fact(n-1);
    return fa;
  }
}
void main()
{
  float x[10],y[10],n,d[10][10],a,k;
  float p,ans,r[10];
  int i,j,c;

  printf("Enter no of values for X:");
  scanf("%f",&n);

  printf("\nEnter X\n");
  for(i=0;i<n;i++)
  {
    scanf("%f",&x[i]);
  }
  printf("\nEnter Y\n");
  for(i=0;i<n;i++)
  {
    scanf("%f",&y[i]);
  }

    k=1;
      for(i=0;i<n-1;i++)
      {
        for(j=0;j<n-k;j++)
        {
         if(i==0)
         { d[i][j]=(y[j+1]-y[j]);}
         else
         { d[i][j]=(d[i-1][j+1]-d[i-1][j]);}
        }
        k++;
      }

next:
  printf("You have to find Y(a) where a is :");
  scanf("%f",&a);
  p=(float)(a-x[0])/(x[1]-x[0]);

  k=1;
  r[0]=p;
  for(j=1;j<n-1;j++)
  {
     r[j]=(r[j-1]*(p-k))/(k+1);
     k++;
  }

  ans=y[0];
  for(j=0;j<n-1;j++)
  {
    ans = ans + (float)(r[j]*d[j][0]);
  }
  printf("\nY(%f)= %f",a,ans);
  printf("\nEnter 1 for do it again \n");
  printf("0 for exit\n");
  scanf("%d",&c);
  if(c==1)
    goto next;
  else
     {;}
}
