#include <stdio.h>
#include <string.h>


#define MAX_LENGTH 100

struct champion {
    char *name;
    int hp;
    int mp;

};

int main(){
    char champ_name[MAX_LENGTH];
    char *teemo = malloc(MAX_LENGTH * sizeof(char));
    int hp = 100;
    int mp = 100;
    printf("hp: %i, mp:%i", hp, mp);
    return 0;
}