/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** can_open_file
*/

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include "my_printf.h"

int can_openread_file(char *path)
{
    struct stat st;
    char *buf = NULL;
    int fd = open(path, O_RDONLY, stat);
    int r = 0;
    if (fd == -1) {
        my_printf("./my_runner: bad file: can't open file\n");
        close(fd);
        return (0);
    }
    stat(path, &st);
    buf = malloc(sizeof(char) * (st.st_size + 1));
    r = read(fd, buf, st.st_size);
    free(buf);
    close(fd);
    if (r == -1) {
        my_printf("./my_runner: bad reading: can't read file\n");
        return (0);
    }
    return (1);
}