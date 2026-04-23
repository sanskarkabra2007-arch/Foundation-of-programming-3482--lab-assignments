#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, Total;
    float Percentage;
    printf("Enter 5 Subject marks:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    Total = m1 + m2 + m3 + m4 + m5;
    Percentage = (Total / 500.0) * 100;
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40 && Percentage >= 40)
    {
        printf("Pass_Status = Pass\n");
        if (Percentage >= 75)
        {
            printf("Grade: Distinction\n");
        }
        else if (Percentage >= 60)
        {
            printf("Grade: First Division\n");
        }
        else if (Percentage >= 50)
        {
            printf("Grade: Second Division\n");
        }
        else if (Percentage >= 40)
        {
            printf("Grade: Third Division\n");
        }
        printf("Total Marks: %d\n", Total);
        printf("Percentage: %.2f\n", Percentage);
    }
    else
    {
        printf("Pass_Status = Fail\n");
        printf("Grade: Not Applicable\n");
    }
    return 0;
}
