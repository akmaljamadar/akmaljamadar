
#include <stdio.h>

int main()
{
    int marks[5], total = 0;
    float percentage;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter subject %d marks: ", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    percentage = total / 5.0;

    printf("\nTotal Marks = %d/500", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage >= 90)
        printf("\nGrade = A");
    else if (percentage >= 75)
        printf("\nGrade = B");
    else if (percentage >= 35)
        printf("\nGrade = C");
    else
        printf("\nGrade = Fail");

    return 0;
}
