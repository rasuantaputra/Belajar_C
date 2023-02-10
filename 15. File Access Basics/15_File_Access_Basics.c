#include <stdio.h>
#include <stdbool.h>


int main(int argc, char const *argv[])
{
    // for file handl, reference to the file
    FILE *file_output;

    // "w" mean write, its gonna write to our file
    // if we have file before, "w" will blow up/erase and start from first
    file_output = fopen("output_from_program.txt", "w");
    // "a" append mode, just append. it will not erase our file
    // file_output = fopen("output_from_program.txt", "a");

    // // function to write to the file
    // fputs("abc", file_output);
    // fputs("123\n", file_output);
    // fputs("Ini akan dimasukan kedalam file\n", file_output);

    // // another // function to write to the file
    // int data = 100;
    // // similiar to printf, but for fie handling
    // fprintf(file_output, "data : %d\n", data);

    int input = 0;
    while (true)
    {
        printf("Enter # (-1 quits): ");
        scanf("%d", &input);
        
        if (input == -1) break;
        else fprintf(file_output, "%d\n", input);        
    }

    // for close file after write
    fclose(file_output);
// =========================================================================
    FILE *file_input;

    // "r" read mode
    file_input = fopen("output_from_program.txt", "r");

    int finput = 0;
    int lines = 0;
    int numbers [100];

    // EOF = End Of File
    // similiar to scanf, but for file handle
    while (fscanf(file_input, "%d", &finput) != EOF)
    {
        numbers[lines] = finput;
        printf("File line %d: %d\n", lines+1, finput);
        lines++;
    }

    int total = 0;
    for (int i = 0; i < lines; i++)
    {
        total += numbers[i];
    }
    printf("Average : %d\n", total/lines); 

    fclose(file_input);
// =========================================================================
    file_input = fopen("input.txt", "r");

    char buffer[256];

    fgets(buffer, 256, file_input);
    printf("Buffer : %s\n", buffer);

    fclose(file_input);
    return 0;
}
