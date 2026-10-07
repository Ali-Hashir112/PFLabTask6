#include <stdio.h>
#include <string.h>

int main() {
    
    char username[22];
    int vowels = 0, consonants = 0;

    printf("Enter username (max 20 characters): ");
    fgets(username, sizeof(username), stdin);

    for (int i = 0; username[i] != '\0'; i++) {
        char ch = username[i];

        if (ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';

        if (ch >= 'A' && ch <= 'Z') {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        username[i] = ch;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Uppercase username: %s\n", username);

}