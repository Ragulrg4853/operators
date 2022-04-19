#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float v1;
  float v2;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &v1, &operator, & v2);

  switch(operator)
    {
    case '/': answer = v1/v1;
      break;
    case '*': answer = v1*v2;
      break;
    case '+': answer = v1+v2;
      break;
    case '-': answer = v1-v2;
      break;
    case '^': answer = pow(v1,v2);
      break;
    case 'r': answer = sqrt(v2);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",v1,operator, v2, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
