#ifndef mycode_h
#define mycode_h
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[10];
    int number;
    int age;
    char level[6];
    char sex[3];
    char building[5];
    char floor[6];
    char room[4];
};
int n;
void open();
struct student s[100];
int menu();
void add();
int search();
int view();
int delete();
int change();

int num();
int names();
int rooms();
int buildings();
int sta();
int sushe();
int louceng();
int sushelou();
int normal();
void regis();

#endif
