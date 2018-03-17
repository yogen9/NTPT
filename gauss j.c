#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float a[4];
    float b[4];
    float c[4];
    int i;

    printf("Enter the coefficient of first equation:");
    for(i=0;i<4;i++)
       {
          scanf("%f",&a[i]);
       }
    printf("Enter the coefficient of second equation:");
    for(i=0;i<4;i++)
       {
          scanf("%f",&b[i]);
       }
    printf("Enter the coefficient of third equation:");
    for(i=0;i<4;i++)
       {
          scanf("%f",&c[i]);
       }

    float f1,f2;
    if(a[0]==0)
    {   f1=0;
        f2=0;
    }
    else
    { f1=b[0]/a[0];
      f2=c[0]/a[0];
    }
    for(i=0;i<4;i++)
    {
      b[i]=b[i]-(f1*a[i]);
      c[i]=c[i]-(f2*a[i]);
    }

    printf("\n_________________________\n");
    for(i=0;i<4;i++){printf("%f ",a[i]);}
    printf("\n");
    for(i=0;i<4;i++){printf("%f ",b[i]);}
    printf("\n");
    for(i=0;i<4;i++){printf("%f ",c[i]);}
    printf("\n_________________________");


    float f3;
    if(b[1]==0)
         {f3=0;}
    else {f3=c[1]/b[1];}
    for(i=1;i<4;i++)
    {
      c[i]=c[i]-(f3*b[i]);
    }

    printf("\n_________________________\n");
    for(i=0;i<4;i++){printf("%f ",a[i]);}
    printf("\n");
    for(i=0;i<4;i++){printf("%f ",b[i]);}
    printf("\n");
    for(i=0;i<4;i++){printf("%f ",c[i]);}
    printf("\n_________________________");

    float f4,f5;
    if(c[2]==0)
    {   f4=0;
        f5=0;
    }
    else
    { f1=a[2]/c[2];
      f2=b[2]/c[2];
    }
    for(i=2;i<4;i++)
    {
        a[i]=a[i]-(f4*c[i]);
        b[i]=b[i]-(f5*c[i]);
    }

    printf("\n_________________________\n");
    for(i=0;i<4;i++){printf("%f ",a[i]);}
    printf("\n");
    for(i=0;i<4;i++){printf("%f ",b[i]);}
    printf("\n");
    for(i=0;i<4;i++){printf("%f ",c[i]);}
    printf("\n_________________________");

    float f6;
    if(b[1]=0){f6=0;}
    else {f6=a[1]/b[1];}

    a[1]=a[1]-(f6*b[1]);
    a[3]=a[3]-(f6*b[3]);

    printf("\n_________________________\n");
    for(i=0;i<4;i++){printf("%f ",a[i]);}
    printf("\n");
    for(i=0;i<4;i++){printf("%f ",b[i]);}
    printf("\n");
    for(i=0;i<4;i++){printf("%f ",c[i]);}
    printf("\n_________________________\n");

    float x,y,z;
    if(c[2]==0 || b[1]==0 || a[0]==0)
    {
        z=0;y=0;x=0;
    }
    else {
    x=a[3]/a[0];
    y=b[3]/b[1];
    z=c[3]/c[2];}


    printf("The Solution:\n");
    printf("x=%f\ny=%f\nz=%f",x,y,z);
}



