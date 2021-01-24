#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

const int totalChar = 256;
const int primeNumber = 13;

void search (char pat[], char text[])
{
    int patLenght = strlen(pat);
    int textLenght = strlen(text);
    int patHash = 0;
    int textHash = 0;
    int hash = 1;
}

int main()
{
    char text[] = "ABCCDEFGH";
    char pat[] = "CCD";

    // A prime number
    search(pat, text);
    return 0;
}
