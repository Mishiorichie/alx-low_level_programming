#!/bin/bash
#include <unistd.h>

int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, str, 58);
    return (1);
}

