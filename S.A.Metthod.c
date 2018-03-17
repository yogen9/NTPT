#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x0;

    printf("Enter a,b,c for Equation like ax^3+bx^2+cx+d=0: \n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    hell:
    printf("Enter the value of x0: ");
    scanf("%f",&x0);
    if(x0==0)
    {   goto hell;   }

    int i=1,n=0;
    float x;
    printf("How many itteration :");
    scanf("%d",&n);

    while(i<=n)
    {
        x=sqrt(-(d+c*x0)/((a*x0)+b));
        printf("x%d",i);
        printf("= %f \n",x);
        x0=x;
        i++;
    }
}
