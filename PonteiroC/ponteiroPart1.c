#include <stdio.h>
#include <stdlib.h>


int main(){

int x = 10;
int *p;
p = &x;

printf("x = %d\n", x);
printf("*p = %d\n", *p);
printf("&x = %p\n", &x);
printf("p = %p\n",p);

return 0;

}

