#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// We don't make a function for every layer because of DRY
// Since this is a simple program, we use strlen for getting the string sizes

char *layer_template(char* header, char *higher_message) {
    int n = strlen(header);
    int m = strlen(higher_message);
    char *new_message = malloc(sizeof(char) * (n + m + 2));
    strncat(new_message, header, n);
    strncat(new_message, higher_message, m);
    printf("%s\n", new_message);
    return new_message;
}

int main(void) {
    int message_size;
    printf("Length of application message: ");
    scanf("%d", &message_size);
    char initial_message[message_size];
    printf("Application message (remember to send EOF when done):\n");
    int c, i = 0;
    while ((c = fgetc(stdin)) != EOF || i >= message_size) {
        initial_message[i] = c;
        i++;
    }

    char *message = layer_template("Layer 1: Physical\n", initial_message);
    message = layer_template("Layer 2: Data link\n", message);
    message = layer_template("Layer 3: Network\n", message);
    message = layer_template("Layer 4: Transport\n", message);
    message = layer_template("Layer 5: Session\n", message);
    message = layer_template("Layer 6: Presentation\n", message);
    message = layer_template("Layer 7: Application\n", message);

    return 0;
}