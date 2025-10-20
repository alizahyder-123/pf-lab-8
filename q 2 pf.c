#include<stdio.h>

int main() {
    int students, subjects;

    
    printf("Enter number of students: ");
    scanf("%d", &students);
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    int marks[students][subjects];
    int transpose[subjects][students];
    printf("\nEnter the marks of each student in each subject:\n");
    int i;
    int j;
	for ( i = 0; i < students; i++) {
        for ( j = 0; j < subjects; j++) {
            printf("Student %d, Subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for ( i = 0; i < students; i++) {
        for ( j = 0; j < subjects; j++) {
            transpose[j][i] = marks[i][j];
        }
    }

    printf("\nTransposed Matrix (Subjects as rows, Students as columns):\n");
    for ( i = 0; i < subjects; i++) {
        for ( j = 0; j < students; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}


