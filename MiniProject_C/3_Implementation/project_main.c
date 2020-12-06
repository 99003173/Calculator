#include "calculator_operations.c"
#include <math.h>
#define VALID   (1)
#define INVALID (0)

unsigned int calculator_operation = 0;
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations { ADD=1, SUBTRACT, MULTIPLY, DIVIDE, MODULO, POWER, SQUARE_ROOT, FACTORIAL,LENGTH, TIME, EXIT };
void calculator_menu(void);
int valid_operation(int operation);
int main(int argc, char *argv[])
{
    printf("SIMPLE CALCULATOR\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nCalculator Operations:\n");
    printf("\n1. ADDITION:\n2. SUBTRACTION:\n3. MULTIPLICATION:\n4. DIVIDE:\n5. MODULUS:\n6. POWER:\n7. SQUARE_ROOT:\n8. FACTORIAL\n9. LENGTH:\n10. TIME:\n11. EXIT:");
    printf("\n\tEnter your choice\n");


    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter Two Numbers \n");

        scanf("%d", &calculator_operand1);
        scanf("%d", &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");

        getchar();
        return;

    }
    switch(calculator_operation)
    {
    case ADD:
        printf("\n\t%d + %d = %d\nEnter to continue",
               calculator_operand1,
               calculator_operand2,
               add(calculator_operand1, calculator_operand2));


        getchar();
        break;
    case SUBTRACT:
        printf("\n\t%d - %d = %d\nEnter to continue",
               calculator_operand1,
               calculator_operand2,
               subtract(calculator_operand1, calculator_operand2));


        getchar();
        break;
    case MULTIPLY:
        printf("\n\t%d * %d = %d\nEnter to continue",
               calculator_operand1,
               calculator_operand2,
               multiply(calculator_operand1, calculator_operand2));


        getchar();
        break;
    case DIVIDE:
        printf("\n\t%d / %d = %d\nEnter to continue",
               calculator_operand1,
               calculator_operand2,
               divide(calculator_operand1, calculator_operand2));


        getchar();
        break;
    case MODULO:
        printf("\n\t%d o/o %d = %d\nEnter to continue",
               calculator_operand1,
               calculator_operand2,
               modulo(calculator_operand1, calculator_operand2));


        getchar();
        break;
    case POWER:
        printf("\n\t%d ^ %d = %d\nEnter to continue",
               calculator_operand1,
               calculator_operand2,
               power(calculator_operand1, calculator_operand2));


        getchar();
        break;
    case SQUARE_ROOT:
        printf("\n\tsqrt(%d) = %d\nEnter to continue \n",
               calculator_operand1,
               squareroot(calculator_operand1));


        getchar();
        break;
    case FACTORIAL:
        printf("\n\t%d! = %d\nEnter to continue",
               calculator_operand1,
               factorial(calculator_operand1));


        getchar();
        break;


    case LENGTH:
        printf("\n\t%d Feet = %d Inches\nEnter to continue",
               calculator_operand1,
               length(calculator_operand1));


        getchar();
        break;
    case TIME:
        printf("\n\t%d Hours = %d Minutes\nEnter to continue",
               calculator_operand1,
               time(calculator_operand1));


        getchar();
        break;
    case 13:
        exit(0);
        break;
    default:
        printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
