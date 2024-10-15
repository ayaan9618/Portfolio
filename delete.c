dddd#include <stdio.h>
#include <unistd.h> // for sleep

int main() {
    int seconds;

    printf("Enter the number of seconds for the timer: ");
    scanf("%d", &seconds);

    for (int i = seconds; i > 0; i--) {
        printf("%d...\n", i);
        sleep(1); // Sleep for 1 second
    }

    printf("Time's up!\n");
    return 0;
}
