#include <iostream>
#include <stdio.h>
#include <stdlib.h>


main(int argc,char *argv[])
{
    FILE *fp;
    int ch;

    if(argc!=2){
        printf("\nNo file name!");
        return 1;

    }

    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file!");
        return 1;
    }

    ch=fgetc(fp);
    while(ch!=EOF){
        putchar(ch);
        ch=fgetc(fp);

    }

    fclose(fp);

    return 0;
}
