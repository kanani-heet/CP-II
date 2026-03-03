// Return the maximum of three floating-point numbers. 
#include <stdio.h>
float findMax(float a, float b, float c);

int main()
{
    float x,y,z,max;
    printf("Enter three floating-point numbers");
    scanf("%f %f %f",&x,&y,&z);
    max=findMax(x,y,z);
    printf("\nThe maximum number is: %.2f\n",max);
    return 0;
}

float findMax(float a, float b, float c) 
{
    float result;
    if (a>=b && a>=c) 
  {
        result =a;
        
  }   
   else if (b>=a && b>=c) 
  {
        result =b;
        
  } else 
  {
        result =c;
  }

    return result;
}
