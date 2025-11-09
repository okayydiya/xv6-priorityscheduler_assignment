#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
  int pid = fork();

  if(pid < 0){
    printf(1, "Fork failed\n");
    exit();
  }

  // Child: high priority (10)
  if(pid == 0){
    setpriority(getpid(), 10);
    for(int i = 0; i < 10; i++){
      printf(1, "Child (High Priority) running: %d\n", i);
      sleep(20);
    }
    printf(1, "Child finished\n");
    exit();
  }

  // Parent: low priority (3)
  setpriority(getpid(), 3);
  for(int i = 0; i < 10; i++){
    printf(1, "Parent (Low Priority) running: %d\n", i);
    sleep(20);
  }
  printf(1, "Parent finished\n");

  wait();
  exit();
}
