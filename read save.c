#include "headers.h"
int read_save(void){
    FILE *file;
    int number = -1;
    file = fopen("save.txt","r");
    if (file != NULL){
        fscanf(file,"%d",&number);
    }
    return number;
}
void scoreboard(void){
    if (read_save() != -1){

    }
}