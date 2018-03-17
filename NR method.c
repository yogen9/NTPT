#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x0;

    printf("Enter a,b,c for Equation like ax^2+bx+c=0: \n");
    scanf("%f%f%f",&a,&b,&c);

    printf("Enter the Xo :");
    scanf("%f",&x0);

    int i=1;float diff;
    float fx=1,fxi=0,x=0;
    while(1)
    {
        fx=(a*x0*x0)+(b*x0)+c;
        fxi=(2*a*x0)+b;
        x=x0-(fx/fxi);
        diff=x-x0;
        printf("x%d=%f\n",i,x);
        i++;
        if(diff<0.0001 && diff>-0.0001)
        {
            break;
        }
        x0=x;
    }
}

