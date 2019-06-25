#include <linux/unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
        int time = atoi(argv[1]);
        syscall(545, time);
        printf("[lwj delayed commit]changed commit time: %dus\n", time);
        return 0;
}

