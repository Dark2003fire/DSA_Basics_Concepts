#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int total_size ;
    int used_size;
    int *ptr;

};
void CreateArray(struct myArray *a , int tsize , int usize)
{
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int*) malloc (tsize * size of (int));

    a-> total_size = tsize;
    a-> used_size = usize;
    a-> ptr = (int*) malloc(tsize*size of (int));
}
void show (struct myArray*a)
{

for (int i = 0 ; i <a->used_size;i++)
{
    printf("%d\n" , (a-> ptr)[i]);
}
}
void setval(struct myArray*a)
{

}

