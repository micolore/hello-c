#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


  char name [100];
  char * desc;

  strcpy(name,"james");
  desc = (char *)malloc(30 * sizeof(char));

  if(desc == NULL){
    fprintf(stderr,"error - unable to malloc mememory\n");   
  }
  else
  {
    strcpy(desc,"this is desc for memory 2\n");
  }

  desc =  realloc(desc,100*sizeof(char));
  if(desc == NULL){
    fprintf(stderr,"error unable to allocate required memory\n");
  }
  else{
    strcat(desc,"she is very good !");
  }

  printf("name = %s\n",name);
  printf("desc: %s\n",desc);

  free(desc);
  return 0;
}
