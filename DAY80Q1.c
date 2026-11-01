/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char name1[50], name2[50];
    int roll1, roll2, marks1, marks2;

    fp = fopen("students.txt", "w");

    scanf("Student 1 -> Name: %49[^,], Roll: %d, Marks: %d; Student 2 -> Name: %49[^,], Roll: %d, Marks: %d",
          name1, &roll1, &marks1, name2, &roll2, &marks2);

    fprintf(fp, "%s %d %d\n", name1, roll1, marks1);
    fprintf(fp, "%s %d %d\n", name2, roll2, marks2);

    fclose(fp);

    fp = fopen("students.txt", "r");

    while (fscanf(fp, "%49s %d %d", name1, &roll1, &marks1) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", name1, roll1, marks1);
    }

    fclose(fp);

    return 0;
}
