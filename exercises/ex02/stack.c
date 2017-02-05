/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

/*  Rachel Yang
foo() sets all of the elements in the array equal to 42.
bar() increments through the array and sets each element
equal to its index.
main() will print the array with the indices as its elements
and return 0.

compile error:
stack.c: In function ‘foo’:
stack.c:29:5: warning: function returns address of local variable [-Wreturn-local-addr]
     return array;
     ^
not getting what we want -- we want what values are in the array
but it seems like from this error the compiler is telling us
that we are returning the address.

run result:
0
0
865947264
32589
866035040

run result after uncommenting printf statements:
0x7ffe4444c590
0x7ffe4444c590
0
1
2
3
4
here the first two outputs are the addresses of foo and bar's arrays
instead of the values within them.

*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    for (i=0; i<SIZE; i++) {
	printf("%d\n", array[i]);
    }

    return 0;
}
