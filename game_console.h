#ifndef P_O_P_MAIN_PROJECT_GAME_CONSOLE_H
#define P_O_P_MAIN_PROJECT_GAME_CONSOLE_H

#include <stdio.h>

struct rpoint{
    char symbol;
    int score;
    int num;
};

struct opponent{
    char rival;
    char dest;
};

struct put{
    char key;
    char symbol;
    int limit;
};

struct dimension{
    int x;
    int y;
};
struct file_name{
    char *file;
    struct file_name* next;
};

struct opp_list{
    struct dimension pos;
    struct opp_list *next;
};

int load_config(char *);
int load_map(FILE *);
int load_settings(FILE *);
void random_gen(int n,char b);
void initialization();
void move_up(struct dimension *pos,char obj,int score[],int i);
void move_down(struct dimension *pos,char obj,int score[],int i);
void move_right(struct dimension *pos,char obj, int score[],int i);
void move_left(struct dimension *pos,char obj,int score[],int i);
void move_player(char c);
void print_map();
void hidecursor();
void cd(char *dir);
void run_game();
void put_dblock(struct dimension);
void delay(int number_of_seconds);
char *What_in_it(void);
int A_I(int i,int j,struct dimension op);
int FindCloseFood(struct dimension op);
void *move_computer(void *);

#endif