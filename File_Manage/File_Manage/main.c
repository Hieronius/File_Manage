//
//  main.c
//  File_Manage
//
//  Created by Арсентий Халимовский on 24.12.2023.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000

int main(int argc, const char * argv[]) {
    FILE *file = NULL;
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("There is no file to read\n");
        exit(-1);
    }
    char content = fgetc(file);
    while (content != EOF) {
        printf("%c", content);
        content = fgetc(file);
    }

    fclose(file);
    return 0;
}

