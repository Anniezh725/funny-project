

struct {
    char *name;
    int hp;
    int mp;
    struct character *idk;

}
character;


void main(){
    character *teemo = malloc(sizeof(character));
    int hp = 100;
    int mp = 100;
    printf("hp: %i, mp:%i", hp, mp)

}