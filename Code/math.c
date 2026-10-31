#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tryAgain;

    do
    {
        system("cls");

        int choice;

        printf(">>>>>>> Math Menu <<<<<<<\n\n");
        printf("1) Measures of Central Tendency\n");
        printf("2) Nalimot ko unsa ni\n");
        printf("3) Factorial\n");
        printf("4) Permutation\n");
        printf("5) Exit\n\n");

        printf("Choose a number: ");
        scanf("%d", &choice);

        // MEASURES OF CENTRAL TENDENCY
        if (choice == 1)
        {
            printf("\n>>> MEASURES OF CENTRAL TENDENCY <<<\n");
            printf("       (Mean, Median, Mode)    \n\n");

            int n, sum, i, temp, median, mode, max_count, count;
            float mean;
            int numbers[50];

            do
            {
                printf("|| Enter how many numbers you want (10 to 50): ");
                scanf("%d", &n);

            } while (n < 10 || n > 50);

            printf("\n");
            printf("|| Please enter %d numbers: ", n);
            printf("\n");

            // MEAN & TOTAL

            for (i = 0; i < n; i++)
            {
                printf("\n");
                printf("> Number %d: ", i + 1);
                scanf("%d", &numbers[i]);
            }

            for (i = 0; i < n; i++)
            {
                sum += numbers[i];
            }

            mean = (float)sum / n;

            printf("\n\n------- RESULTS -------\n");
            printf("\n> Total = %d\n", sum);
            printf("\n> Mean (Average): %.2f\n", mean);

            // MEDIAN

            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    if (numbers[j] > numbers[j + 1])
                    {
                        temp = numbers[j];
                        numbers[j] = numbers[j + 1];
                        numbers[j + 1] = temp;
                    }
                }
            }
            if (n % 2 == 0)
            {
                median = (float)(numbers[n / 2] + numbers[(n / 2) - 1]) / 2;
                printf("\n> Median (Middle): %.2f\n", median);
            }
            else
            {
                median = numbers[n / 2];
                printf("\n> Median (Middle): %d\n", median);
            }

            // MODE

            mode = numbers[0];

            for (int i = 0; i < n; i++)
            {
                int count = 1;
                while (i + 1 < n && numbers[i] == numbers[i + 1])
                {
                    count++;
                    i++;
                }
                if (count > max_count)
                {
                    max_count = count;
                    mode = numbers[i];
                }
            }

            if (max_count > 1)
            {
                printf("\n> Mode (Most Common): %d\n", mode, max_count);
            }
            else
            {
                printf("\n> Mode (Most Common): No mode\n");
            }
        }

        // TRY AGAIN QUESTION

        printf("\n\nDo you want to return to the MENU? (Y/N): ");
        scanf(" %c", &tryAgain);
        printf("\n");

    } while (tryAgain == 'y' || tryAgain == 'Y');

    printf("\n>> Thank you for using our console! <<\n");

    return 0;
}