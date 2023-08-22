#include <stdio.h>

// Function to calculate the letter grade based on the score
char calculateGrade(float score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    float scores[numStudents];
    float totalScore = 0;
    float highestScore = 0;
    float lowestScore = 100;

    for (int i = 0; i < numStudents; i++) {
        printf("Enter the score for student %d: ", i + 1);
        scanf("%f", &scores[i]);

        totalScore += scores[i];

        if (scores[i] > highestScore) {
            highestScore = scores[i];
        }

        if (scores[i] < lowestScore) {
            lowestScore = scores[i];
        }
    }

    float averageScore = totalScore / numStudents;

    printf("\nClass Statistics:\n");
    printf("Average Score: %.2f\n", averageScore);
    printf("Highest Score: %.2f\n", highestScore);
    printf("Lowest Score: %.2f\n\n", lowestScore);

    printf("Student Grades:\n");
    for (int i = 0; i < numStudents; i++) {
        char grade = calculateGrade(scores[i]);
        printf("Student %d - Score: %.2f, Grade: %c\n", i + 1, scores[i], grade);
    }

    return 0;
}
