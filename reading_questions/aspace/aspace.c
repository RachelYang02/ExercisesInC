/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int global;

void stack_down() {
  /*  prints address of local variable and checks whether
      stack grows down
  */
  int x = 2;
  printf ("Address of local variable is %p\n", &x);
  printf ("stack grows down \n");
}

int main ()
{
    int local = 5;
    void *p = malloc(128);
    // address of p proves that heap grows up
    void *r = malloc(128);

    // allocate two chunks with size of rando number
    int random = 2;
    void *random1 = malloc(random);
    void *random2 = malloc(random);

    printf ("Address of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    stack_down();
    printf ("Address of p is %p\n", p);
    printf ("Address of r is %p\n", r);

    printf ("Address of random one is %p\n", random1);
    printf ("Address of random two is %p\n", random2);

    return 0;
}
