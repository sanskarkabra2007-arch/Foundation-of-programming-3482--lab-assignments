#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourcePtr, *destPtr;
    char ch;

    // Open source file for reading
    sourcePtr = fopen("source.txt", "r");
    if (sourcePtr == NULL) {
        printf("Error: Cannot open source file.\n");
        exit(1);
    }

    // Open destination file for writing
    destPtr = fopen("destination.txt", "w");
    if (destPtr == NULL) {
        printf("Error: Cannot open or create destination file.\n");
        fclose(sourcePtr);
        exit(1);
    }

    // Copy contents character by character
    while ((ch = fgetc(sourcePtr)) != EOF) {
        fputc(ch, destPtr);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(sourcePtr);
    fclose(destPtr);

    return 0;
}
