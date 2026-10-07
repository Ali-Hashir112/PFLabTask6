#include <stdio.h>

int main(void) {

    int code[10], left[10], right[10];
    int accepted = 0, flagged = 0, highest;

    for (int i = 0; i < 10; i++) {
        
        do {
            
            printf("Enter access code %d (1-255): ", i + 1);
            scanf("%d", &code[i]);
            
        } while (code[i] < 1 || code[i] > 255);
    }

    highest = code[0];

    for (int i = 0; i < 10; i++) {
        left[i] = code[i] << 2;
        right[i] = code[i] >> 1;

        printf("\nEmployee: %d\n", i + 1);
        printf("Original: %d\n", code[i]);
        printf("Left shifted: %d\n", left[i]);
        printf("Right shifted: %d\n", right[i]);

        if (left[i] > 100 && right[i] % 2 == 0) 
        {
            printf("Accepted\n");
            accepted++;
        } 
        else 
        {
            printf("Flagged\n");
            flagged++;
        }

        if (code[i] > highest) 
        {
            highest = code[i];
        }
    }

    printf("\nAccepted codes: %d\n", accepted);
    printf("Flagged codes: %d\n", flagged);
    printf("Highest original access code: %d\n", highest);

    printf("Codes with right shifted value > 20: ");
    
    for (int i = 0; i < 10; i++) {
        
        if (right[i] > 20)
        {
            
            printf("%d ", code[i]);
        }
    }
    printf("\n");

    return 0;
}