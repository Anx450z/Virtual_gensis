#include<stdio.h>

void fillTable(double *,int*,int*);
void showTable(double *,int,int);
int mulTable(double *,double*,double*,int,int,int,int);

int main()
{
    int a=5,b=5,c=0,d=0;
    printf("Table 1\n");
    scanf("%d", &a);
    scanf("%d", &b);
     printf("Table 2\n");
    scanf("%d", &c);
    scanf("%d", &d);

    double arr[a][b],arr2[c][d];
    double res[b][c];

    fillTable(*arr,&a,&b);
    showTable(*arr,a,b);

     fillTable(*arr2,&c,&d);
     showTable(*arr2,c,d);

     if(mulTable(*arr,*arr2,*res,a,b,c,d))
     {
         showTable(*res,a,d);
     }

}
