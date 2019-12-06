#include<stdio.h>
#define value 100

void fillTable(double* arr,int* x,int* y)
{
  for(int i=0;i<*x;i++)
  {
      for(int j=0;j<*y;j++)
      {
          printf("enter value (%d,%d)\n",i,j);
          scanf("%lf",arr++);
      }
  }


}
void showTable(double *ptr,int x,int y)
{
    printf("Results: \n\n");
  for(int i=0;i<x;i++)
  {

      for(int j=0;j<y;j++)
      {
         printf("%lf\t",*ptr++);
      }
       printf("\n");
  }

}
int mulTable(double* p1,double* p2,double* res,int a,int b,int c,int d)
{
    if(b!=c)
    {
       printf("Multiply Not Possible\n");
       return 0;
    }
    else
    {
        printf("Multiply \n");
        double sum=0;
        for(int row=0;row<a;row++)
        {
            for(int col=0;col<d;col++)
            {
                for(int i=0;i<b;i++)
                {
                    sum+=(*p1+i+b*row)*(*p2+d*i+col);
                    printf("%lf\t",sum);
                }
                *res++=sum;
                sum=0;
            }
        }
        return 1;
    }
}
