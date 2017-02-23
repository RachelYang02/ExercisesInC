/*
An implementation of "tee" that takes the same command-line
arguments: a function that reads standard input and writes it
to both standard output and one or more files.
*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int count = 0;
    char ch;
    char input[1000];
    int a_flag;

    while ((ch=getopt(argc,argv,"a")) != EOF)
      switch (ch){
        case 'a':
        a_flag = 1; // if -a option, set flag to 1
        break;
      }
      argc -= optind;
      argv += optind;

      scanf("%99[^\n\t]", input); // reads from stdin
      printf("%s\n", input);  // prints to stdout

      for (count=0; count<argc; count++){
        if (a_flag){
          FILE *file = fopen(argv[count],"a");
          fprintf(file, "%s\n", input);
          fclose(file);
        }
        else {
          FILE *file = fopen(argv[count], "w");
          fprintf(file, "%s\n", input);
          fclose(file);
        }
      }
      return 0;
}

/*
I had difficulties figuring out the arguments, especially what the string format
should be in.

Next time I would rely less heavily on examples, and try harder to write it
from scratch before checking in with resources.

My code doesn't do as much error debugging.
*/
