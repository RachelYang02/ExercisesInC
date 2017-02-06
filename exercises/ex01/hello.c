/*  Rachel Yang
    Turning on optimization I didn't see anything different. It does finish
    its operation faster.
    When printing x, again no noticeable difference other than its speed.
    When printing y, again no noticeable difference between no optimization
    and optimization. x no longer prints, y does.
    Conclusion: optimization does not impact behavior of program, simply
    speed. 
*/
# include <stdio.h>
# include <stdlib.h>

int main() {
  int x = 5;
  int y = x + 1;
  printf("%i\n",y);
}
