/*Program for NOT operation*/
#include <stdio.h>

int main(void) {
  int s;

  while(1)
  {
    printf("\nEnter the binary value:");
    scanf("%d", &s);

    if(s == 1 || s == 0)
    { 
      printf("Negation Operation is: %d \n", !s);
      break;
    }
    else
    {
      printf("Wrong Input. Should be Boolean value only!");
    }
  }
  return 0;
}
