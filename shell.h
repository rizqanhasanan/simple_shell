#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <signal.h>
#define PROMPT "Shell $ "


/**
 * struct builtin_d - Defines the builtins functions.
 * @built: The name of the build in command.
 * @f: A pointer to the right builtin function.
 */
typedef struct builtin_d
{
  char *built;
  void (*fun)(char *);
} builtin_t;

extern char **environ;

char **token_interface(char *, const char *, int);
int count_token(char *, const char *);
char **tokenize(int, char *, const char *);
void create_child(char **, char *, int, char **);
void exam_line(char *, size_t, int, char **);
char *path_finder(char *);
int str_len(char *);
int find_path(char *);
char **tokenize_path(int, char *);
char *search_directories(char **, char *);
char *path_builder(char *, char *);
void double_free(char **);
void single_free(int, ...);

/*Builtin functions*/
int built_in(char **, char *);
void (*check_built_ins(char *))(char *);
void exit_s(char *);
void env_s(char *);
void cd_s(char *);

/*some functions*/
int _strcmp(char *, char *);
char *_strdup(char *);
void print_str(char *, int);
int print_number(int);
int _write_char(char);

/* Handle error functions*/
void error_printing(char *, int, char *);
void exec_error(char *, int, char *);

#endif
