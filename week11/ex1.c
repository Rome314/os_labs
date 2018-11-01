
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>

int main(){

    int file = open("./ex1.txt", O_RDWR);
    struct stat buffer;
    fstat(file, &buffer);

    const char *phrase = "This is a nice day\n";
    size_t size = strlen(phrase) + 1;
    lseek(file, size-1, SEEK_SET);
    write(file,"", 1);

    char *map = mmap(0, size, PROT_READ | PROT_WRITE, MAP_SHARED, file, 0);
    memcpy(map, phrase, strlen(phrase));
    msync(map, size, MS_SYNC);
    munmap(map, size);

    close(file);


    return 0;
}
