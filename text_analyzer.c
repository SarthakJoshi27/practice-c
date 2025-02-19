#include<stdio.h>
#include<string.h>
#include <ctype.h>

// int words(char *ch){
//     int count = 0, i = 0;
//     while(*ch){
//         if(isspace(*ch)) count++;
//     }
//     return count;
// }

int words(const char *str) {
    int count = 0, inWord = 0;

    while (*str) {
        if (isspace((unsigned char)*str)) {
            inWord = 0; // End of a word
        } else if (!inWord) {
            inWord = 1;
            count++; // Start of a new word
        }
        str++;
    }
    return count;
}

int vowels(char *ch){
    int count = 0, i = 0;
    while(ch[i] != '\0'){
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') count++;
        i++;
    }
    return count;
}

// int consonents(char *ch){
//     int count = 0, i = 0;
//     while(ch[i] != '\0'){
//         if (ch[i] == 'b' || ch[i] == 'c' || ch[i] == 'd' || ch[i] == 'f' || ch[i] == 'g' || ch[i] == 'h' || ch[i] == 'j' || ch[i] == 'k' || ch[i] == 'l' || ch[i] == 'm' || ch[i] == 'n' || ch[i] == 'p' || ch[i] == 'q' || ch[i] == 'r' || ch[i] == 's' || ch[i] == 't' || ch[i] == 'v' || ch[i] == 'w' || ch[i] == 'x' || ch[i] == 'y' || ch[i] == 'z' || ch[i] == 'B' || ch[i] == 'C' || ch[i] == 'D' || ch[i] == 'F' || ch[i] == 'G' || ch[i] == 'H' || ch[i] == 'J' || ch[i] == 'K' || ch[i] == 'L' || ch[i] == 'M' || ch[i] == 'N' || ch[i] == 'P' || ch[i] == 'Q' || ch[i] == 'R' || ch[i] == 'S' || ch[i] == 'T' || ch[i] == 'V' || ch[i] == 'W' || ch[i] == 'X' || ch[i] == 'Y' || ch[i] == 'Z') count++;
//         i++;
//     }
//     return count;
// }

int consonents(char *ch){
    int count = 0, i = 0;
    while(ch[i] != '\0'){
        if(!(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == ' ')) count++;
        i++;
    }
    return count;
}

int main(){
    int sw = 0, ch;
    char str[50];
    while(1){

        scanf("%d \t", &sw);
        // printf("\n");
        
        if(sw == 0) break;

        scanf("%d", &ch);
        while(getchar()!= '\n');
        switch(ch){
            case 1:
            printf("\nEnter a full line for word count: ");
            fgets(str, sizeof(str), stdin);
            printf("\nNumber of words: %d\n", words(str));
            break;

            case 2:
            printf("Enter a full line for vowel count : ");
            fgets(str, sizeof(str), stdin);
            printf("\n number of vowels : %d\n", vowels(str));
            break;

            case 3:
            printf("Enter a full line for consonents count : ");
            fgets(str, sizeof(str), stdin);
            printf("\n number of words : %d\n", consonents(str));
            break;

            default:
            break;
        }
    }
    return 0;
}
