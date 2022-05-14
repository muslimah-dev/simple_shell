#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <limits.h>

/* ERRORS */
#define BUFSIZE 256
#define ENOSTRING 1106
#define EILLEGAL 227
#define EWSIZE 410
#define ENOBUILTIN 415
#define EBADCD 726

extern char **environ;

/**
 * struct Linkedlist -  Data structure.
 * @string: memmber of the struct.
 * @next: next member.
 */
typedef struct linkedList
{
	char *string;
	struct linkedList *next;
} linked_t

/**
 * struct frm - forms of build settings.
 * @env: linked list of local env variables
 * @envList: array of env variables.
 * @args: array of argument string.
 * @buffer: array of user input.
 * @path: array of PATH loxaation.
 *
