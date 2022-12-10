#include "functions.c"
#ifndef INC_1_FUNCTIONS_H
#define INC_1_FUNCTIONS_H
int *memory(int n);
char **memoryChar(int n);
int isLetter(char s);
int strLen(char* string);
void strCopy(char *s1,char **s2);
int countWords(char **string);
void merge(char ***arr, int **size, int left, int mid, int right);
void mergeSort(char*** arr, int** sort, int left, int right);
void copyingAndSizes(int argc, char **inputStrings, char **argv, int **size);
void deletingArr(char **arr, int n);
void printString(char* string);
void output(int argc, int* size, char **string);
#endif //INC_1_FUNCTIONS_H
