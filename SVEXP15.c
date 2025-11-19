#include <stdio.h>
#include <unistd.h>


int main() {

    int seconds;

    printf("Enter countdown start time (in seconds): ");
    scanf("%d", &seconds);

    if (seconds <= 0) {
        printf("Error: Please enter a positive number.\n");
        return 1; // Exit with an error
    }

    printf("\n--- Starting Countdown! ---\n");

    for (int i = seconds; i > 0; i--) {

        printf("%d\n", i);


        sleep(1);

    }

    printf("Countdown completed!\n");

    return 0;
}
