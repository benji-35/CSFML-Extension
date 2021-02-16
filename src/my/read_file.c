/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** read_file
*/

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

char *read_file(char *path)
{
    struct stat st;
    int r = 0;
    char *buf = NULL;
    int fd = open(path, O_RDONLY, stat);

    stat(path, &st);
    buf = malloc(sizeof(char) * (st.st_size + 1));
    r = read(fd, buf, st.st_size);
    buf[st.st_size] = 0;
    close(fd);
    return (buf);
}