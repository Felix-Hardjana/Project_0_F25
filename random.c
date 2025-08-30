#include <stdlib.h>


void rand_string(char *s, size_t size){

    for(size_t i = 0; i < size; i++){
        s[i] = 'a' + rand()%26; //randomize all the letter selection
    }
    s[size] = '\0'; // the last space in the size is always null terminator in string
}
