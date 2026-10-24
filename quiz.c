#include <stdio.h>

int main() 
{

    int mainChoice ;
    int userAns ;
    int score ;


    printf("========================================\n");
    printf("        ===== QUIZ APPLICATION =====    \n");
    printf("========================================\n");
    printf("1. Start Quiz\n");
    printf("2. Exit\n");
    printf("========================================\n");
    printf("Enter your choice: ");
    scanf("%d", &mainChoice);

  
    switch (mainChoice) {
        case 1:
            printf("\n--- Starting the Quiz ---\n");

            printf("\nQ1. What is the standard extension of a C source file?\n");
            printf("1. .cpp\n2. .c\n3. .exe\n4. .txt\n");
            printf("Enter option (1-4): ");
            scanf("%d", &userAns);
            if ( userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 2) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

            printf("\nQ2. Which keyword is used to declare an integer variable in C?\n");
            printf("1. int\n2. float\n3. char\n4. double\n");
            printf("Enter option (1-4): ");
            scanf("%d", &userAns);
            if ( userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 1) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

           
            printf("\nQ3. Which function is used to print output to the console in C?\n");
            printf("1. scanf\n2. print\n3. printf\n4. write\n");
            printf("Enter option (1-4): ");
           scanf("%d", &userAns);
            if (userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 3) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

            
            printf("\nQ4. Which symbol is used for line comments in C?\n");
            printf("1. //\n2. /*\n3. #\n4. --\n");
            printf("Enter option (1-4): ");
            scanf("%d", &userAns);
            if (userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 1) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

            
            printf("\nQ5. Which header file is needed for basic input and output functions?\n");
            printf("1. <stdlib.h>\n2. <math.h>\n3. <stdio.h>\n4. <string.h>\n");
            printf("Enter option (1-4): ");
           scanf("%d", &userAns);
            if (userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 3) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

            
            printf("\nQ6. What is the index of the first element in an array in C?\n");
            printf("1. 1\n2. -1\n3. 0\n4. 2\n");
            printf("Enter option (1-4): ");
            scanf("%d", &userAns);
            if (userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 3) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

           
            printf("\nQ7. Which operator is used to get the address of a variable?\n");
            printf("1. *\n2. &\n3. %\n4. ->\n");
            printf("Enter option (1-4): ");
            scanf("%d", &userAns);
            if (userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 2) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

           
            printf("\nQ8. Which loop is guaranteed to execute at least once?\n");
            printf("1. for\n2. while\n3. do-while\n4. none\n");
            printf("Enter option (1-4): ");
            scanf("%d", &userAns);
            if (userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 3) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

            
            printf("\nQ9. Which format specifier is used for an integer in printf?\n");
            printf("1. %%f\n2. %%c\n3. %%s\n4. %%d\n");
            printf("Enter option (1-4): ");
            scanf("%d", &userAns);
            if (userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 4) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

           
            printf("\nQ10. What is the value returned by main() to indicate successful execution?\n");
            printf("1. 0\n2. 1\n3. -1\n4. NULL\n");
            printf("Enter option (1-4): ");
            scanf("%d", &userAns);
            if (userAns < 1 || userAns > 4) {
                printf("Invalid option selected!\n");
            } else if (userAns == 1) {
                printf("Correct Answer!\n");
                score = score + 1;
            } else {
                printf("Incorrect Answer!\n");
            }

            
            printf("\n========================================\n");
            printf("          ===== QUIZ RESULT =====       \n");
            printf("========================================\n");
            printf("Total Questions : 10\n");
            printf("Correct Answers : %d\n", score);
            printf("Incorrect Answers : %d\n", 10 - score);
            printf("Final Score     : %d/10\n", score);
            printf("========================================\n");
            printf("Thank you for participating!\n");
            break;

        case 2:
            printf("\nExiting application. Goodbye!\n");
            break;

        default:
            printf("\nInvalid choice! Please select 1 or 2.\n");
            break;
    }

    return 0;
}