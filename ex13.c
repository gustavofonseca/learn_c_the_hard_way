#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("Error: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++) {
        char raw_letter = argv[1][i];
        char letter;
        if(raw_letter >= 65 && raw_letter <= 90) {
            letter = raw_letter + 32;
        } else if(raw_letter > 90 && raw_letter <= 122) {
            letter = raw_letter;
        } else {
            printf("The letter is out of range.\n");
            return 1;
        }

        switch(letter) {
            case 'a':
                printf("%d: 'A'\n", i);
                break;

            case 'e':
                printf("%d: 'E'\n", i);
                break;

            case 'i':
                printf("%d: 'I'\n", i);
                break;

            case 'o':
                printf("%d: 'O'\n", i);
                break;

            case 'u':
                printf("%d: 'U'\n", i);
                break;

            case 'y':
                if(i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                } 
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}


