#include <unistd.h>
#include "main.h"

int _putschar(char c)
{
  return write(1,&c,1);
}
