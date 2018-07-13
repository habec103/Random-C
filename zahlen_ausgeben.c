#include <stdarg.h>
#include <stdio.h>

void zahlen_ausgeben(int args, ...){
  va_list ap;
  va_start(ap, args);
  int i;
  for(i = 0; i < args; i++){
    printf("argument: %i\n",va_arg(ap, int));
  }
  va_end(ap);
}

int main(){
  zahlen_ausgeben(3, 26, 78, 9);
  return 0;
}
