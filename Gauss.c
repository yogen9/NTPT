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
      b[i]=b[i]-((f1)*a[i]);
      c[i]=c[i]-((f2)*a[i]);
    }

    float f3;
    if(b[1]==0)
         {f3=0;}
    else {f3=c[1]/b[1];}
    for(i=1;i<4;i++)
    {
      c[i]=c[i]-(f3)*b[i];
    }

    float x,y,z;
    if(c[2]==0 || b[1]==0 || a[0]==0)
    {
        z=0;y=0;x=0;
    }
    else{
    z=c[3]/c[2];
    y=(b[3]-(z*b[2]))/b[1];
    x=(a[3]-(z*a[2])-(y*a[1]))/a[0];}

    printf("The Solution:\n");
    printf("x=%f\ny=%f\nz=%f",x,y,z);
}

