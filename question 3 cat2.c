/*
NAME:RIGAN NYAGETA
ADM:PA106/G/28833/25
DES:PROGRAMME that reads a list of integers from afile
*/
#include <stdio.h>
#include <stdlib.h>
void writeInputFile() {
    FILE *fptr;
    int num;
    fptr = fopen("input.txt", "w");

    if (fptr == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }

    fclose(fptr);
    printf("Data successfully written to input.txt\n\n");
}

void processNumbers() {
    FILE *fptr_in, *fptr_out;
    int num, sum = 0, count = 0;
    float avg;

    fptr_in = fopen("input.txt", "r");
    if (fptr_in == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    while (fscanf(fptr_in, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fptr_in);

    avg = (float)sum / count;

    fptr_out = fopen("output.txt", "w");
    if (fptr_out == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }

    fprintf(fptr_out, "Sum = %d\nAverage = %.2f\n", sum, avg);
    fclose(fptr_out);
    printf("Sum and average written to output.txt\n\n");
}

void displayFiles() {
    FILE *fptr;
    char ch;

    printf("Contents of input.txt:\n");
    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening input.txt!\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);

    printf("\nContents of output.txt:\n");
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening output.txt!\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);
}

int main() {
    writeInputFile();
    processNumbers();
    displayFiles();
    return 0;
}