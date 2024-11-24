#include <stdio.h>

int main() {
    printf("Hello World\n");
    printf("Enter your full name:\n");

    char name[1000];  // Declare a large enough array to hold the name

    // Use fgets to read the entire line (including spaces)
    fgets(name, sizeof(name), stdin);

    printf("Name is: %s\n", name);  // Display the entered name

    return 0;
}
