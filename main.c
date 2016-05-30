#include<stdio.h>
#include<math.h>
dic(float a,float b,float c)
{
float x1,x2,D;
D=b*b-4*a*c;
if(D<0)
{printf("no roots");}
if(D>=0)
{
x1= (-b + sqrt(D))/(2*a);
x2= (-b - sqrt(D))/(2*a);
printf("x1 = %g , x2 = %g",x1,x2);
}
}

int main()
{ float a,b,c;
printf("INput a,b,c:");
scanf("%f%f%f",&a,&b,&c);
dis(a,b,c);
}