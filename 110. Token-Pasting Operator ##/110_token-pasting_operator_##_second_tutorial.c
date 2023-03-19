#include <stdio.h>

/**
 * @brief This is more practical example
 * 
 */

#define INSTRUCTION_NAME(NAME)\ 
    {#NAME, NAME ## _instruction}

typedef struct
{
    char name[100];
    void (*fungsi) (void);
}Instruction;

void add_instruction(void)
{
    printf("Add instruction\n");
}

void substract_instruction(void)
{
    printf("Subtract instruction\n");
}

int main()
{
    Instruction instruksi1 [] =
    {   
        // {char name[100], void (*fuction) (void)}
        {"add", add_instruction},
        {"subtract", substract_instruction}
    };

    // using prepocessing director
    Instruction instruksi2 [] =
    {
        INSTRUCTION_NAME(add),
        INSTRUCTION_NAME(substract)
    };

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s\n", instruksi1[i].name);
        instruksi1[i].fungsi();
    }
    
    printf("======================\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s\n", instruksi2[i].name);
        instruksi2[i].fungsi();
    }

    return 0;
}
