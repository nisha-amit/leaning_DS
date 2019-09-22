#include <sys/resource.h>
#include <sys/syscall.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
// #include <linux/oom.h>
// #include <linux/input.h>
// #include <linux/if_link.h>
// #include <linux/loop.h>
// #include <linux/audit.h>


int main(){
  printf("%d", __NR_getRandom);
  return 1;
}
