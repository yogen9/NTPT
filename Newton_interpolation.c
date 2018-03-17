#include<stdio.h>
int fact(int x)
{
    if(x==1 || x==0)
        return 1;
    else
        return x*fact(x-1);
}
int main()
{
    int n,i,k;
    printf("How many values of x:\n");
    scanf("%d",&n);
    float x[n],y[n],x0,y0;
    printf("Enter the values of x(up to 10):\n");
    for(i=0;i<9;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("Enter the corresponding value of y:");
    for(i=0;i<9;i++)
    {
        scanf("%f",&y[i]);
    }
    float d[n][n];
    for(i=0;i<n;i++)
    {
      for(k=0;k<n;k++)
      {
          if(i=0)
          {d[0][k]=y[k+1]-y[k];}
          d[i][k]=d[i-1][k+1]-d[i-1][k];
      }
    }
    float p=(x0-x[0])/(x[1]-x[0]),sum=y[0],p[n];
    p[0]=p;
    for(k=1;k<n-1;k++)
        {
            p[k]=p[k-1]*(p[k-1]-k);
            sum=sum+(p[k]*d[k][0])/fact(k);
        }
    printf("sum=",sum);



}
