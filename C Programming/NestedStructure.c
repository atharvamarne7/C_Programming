#include<stdio.h>

struct Demo
{
    int i;
    float f;


};

struct Hello
{
    int no;
    float marks;
    struct Demo;        //Nested
};

int main()
{
   printf("size of hello structure is: %lu\n",sizeof (struct Hello));
   
    
    
    
    return 0;
}