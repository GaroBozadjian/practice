#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
  pid_t child;
  printf("the main program process ID is %d\n",getpid());
  child=fork();
  if(child !=0){
     printf("Hello World\n");
     printf("This is the parent process, with an ID %d\n",getpid());
     printf("The child's process ID id %d\n",child);

  }
  else
    printf("This is child process with ID %d\n",getpid());
  return 0;
}
