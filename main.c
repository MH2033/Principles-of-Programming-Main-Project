#include <stdio.h>
#include "game_console.h"
int main(int argc, char *argv[]) {
    if(load_config(What_in_it())) {
        printf("Error: Wrong settings");
        return 0;
    }
    initialization();
    run_game();
    return 0;
}