#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

int main(void){
    // std::string buf(1000, '\x45');
    // std::ofstream data("data.txt");
    // for(auto &s : buf ){
    //     data << s; 
    // }
    char buf[1024] = {0};
    const char* filename = "data.txt";
    FILE *fp = fopen(filename, "w");
    if(fp == NULL){
        fprintf(stderr, "fopen file failed");
        exit(EXIT_FAILURE);
    }
    fprintf(fp, "hola cristian\n");
    // fgets(buf, 1024, fp);
    // printf("datos: %s\n", buf);
    fclose(fp);
    return EXIT_SUCCESS;
}