#include <stdio.h>
int main()
{
    FILE * fout = fopen("file.txt", "w");

    printf("Hellow World\n");
    fprintf(fout, "Hellow World¦bÀÉ®×¸Ì\n");
}
