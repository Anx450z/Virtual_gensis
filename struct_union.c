#include <stdio.h>
#include <stdint-gcc.h>

union A {
  uint32_t val;
  uint16_t sval;
  uint8_t cval;
};
struct emp
{
    int id;
    char name[20];
    double sal;

};

int main()
{
    struct emp* e2;
    struct emp e1[10]={
        {10,"ankur",456},{.name="varsha",.sal=0},[5]={34,"fddfgfg",54645}
    };
    e2=&e1;
    printf("name %s",e2->name);
    printf(" 2nd element %s",e1[1].name);
    for(int i=0;i<6;i++)
    {
        printf("%s\n",e2->name);
        printf("%d\n",e2->id);
        e2++;
    }
    union A a1;
a1.val  = 0x41424344;
a1.sval = 0x6364;
printf("%x\n",(int) a1.cval);
}
