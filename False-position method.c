#include<stdio.h>

int main()
{
    float a,b,c,x0,x1;

    printf("Enter a,b,c for Equation like ax^2+bx+c=0: \n");
    scanf("%f%f%f",&a,&b,&c);

    printf("Enter the Xo and X1\n");
    scanf("%f%f",&x0,&x1);

    float fx0,fx1;
    float fx=1,x=0.0;
    int i=2; float diff=0;

    while(1)   // here condition based on accuracy
    {
        fx0=((a*x0*x0)+(b*x0)+c);
        fx1=((a*x1*x1)+(b*x1)+c);

        printf("X%d = ",i); i++;
        x=x1-((fx1*(x0-x1))/(fx0-fx1));
        fx=(a*x*x)+(b*x)+c;
        printf("%f \n",x);
        diff=x-x1;
        if(fx0>0)
        {
            if(fx>0)
                x0=x;
            else
                x1=x;
        }
        if(fx1>0)
        {
            if(fx>0)
                x1=x;
            else
                x0=x;
        }
        if(diff<0.0001 && diff>-0.0001)
        {
            break;
        }
        fx0=fx1;
        fx1=fx;

    }

}
