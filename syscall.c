#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/random.h>
#include <errno.h>
//#include <random.h>
 
extern char **environ;
 
void testsyscall(int a1, int b2, int c3, int d4, int e5, int f6, char **test) {
    int dummy;
    long getrandom_ret = syscall(__NR_getrandom, &dummy, 2, 0);
    if(getrandom_ret == -1) {
        printf("Error no:%d\n", errno);
    }
    printf("Got Random %ld\n", getrandom_ret);
    printf("Sum: %d\n", (a1+b2+c3+d4+e5+f6));
}
 
int main(int argc, char **argv) {
    printf("value at environ's value: %p\n", *environ);
    printf("Sample getenv: %s\n", getenv("ANDROID_ROOT"));
 
    testsyscall(1,2,3,4,5,6, environ);
 
    printf("value at environ's value: %p\n", *environ);
    printf("Sample getenv: %s\n", getenv("ANDROID_ROOT"));
 
    printf("\nHappily finishing the program\n");
    return 0;
}