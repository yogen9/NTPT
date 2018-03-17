#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x0,x1;

    printf("Enter a,b,c for Equation like ax^2+bx+c=0: \n");
    scanf("%f%f%f",&a,&b,&c);

    printf("Enter the Xo and x1:");
    scanf("%f%f",&x0,&x1);

    int i=1;float diff;
    float fx0=1,fx1=0,fx=0,x=0;
    while(1)
    {
        fx0=(a*x0*x0)+(b*x0)+c;
        fx1=(a*x1*x1)+(b*x1)+c;
        x=x0-(fx1*(x1-x0)/(fx0-fx1));
        diff=x-x1;
        printf("x%d=%f\n",i,x);
        i++;
        if(diff<0.0001 && diff>-0.0001)
        {
            break;
        }
        x0=x;
        fx0=fx1;
        fx=(a*x*x)+(b*x)+c;
        fx1=fx;
    }
}

