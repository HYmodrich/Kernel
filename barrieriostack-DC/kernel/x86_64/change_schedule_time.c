#include <linux/unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
        int time = atoi(argv[1]);
        syscall(546, time);
        printf("[lwj delayed commit]changed schedule time: %dus\n", time);
        return 0;
}
