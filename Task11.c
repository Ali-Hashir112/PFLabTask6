#include <stdio.h>

int main(void) {

    int priority[5], speed[5], left[5], right[5];
    int high = 0, medium = 0, normal = 0;

    for (int i = 0; i < 5; i++) {

        do {
            printf("Enter priority code of vehicle %d: ", i + 1);
            scanf("%d", &priority[i]);
        } while (priority[i] < 0 || priority[i] > 15);

        printf("Enter speed of vehicle %d: ", i + 1);
        scanf("%d", &speed[i]);
    }

    for (int i = 0; i < 5; i++) {
        left[i] = priority[i] << 2;
        right[i] = priority[i] >> 1;

        printf("Vehicle: %d Original: %d Left-Shift: %d Right-Shift: %d Speed: %d ", i + 1, priority[i], left[i], right[i], speed[i]);

        if (left[i] > 20 && speed[i] >= 80) {
            printf("Priority: High Priority\n");
            high++;
        } else if (left[i] > 10 && speed[i] >= 60) {
            printf("Priority: Medium Priority\n");
            medium++;
        } else {
            printf("Priority: Normal Priority\n");
            normal++;
        }
    }

    printf("\nHigh Priority: %d\n", high);
    printf("Medium Priority: %d\n", medium);
    printf("Normal Priority: %d\n", normal);

    return 0;
}