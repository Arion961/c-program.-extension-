/*MARION MWIKALI MUTISYA
CT100/G/26273/25
Exam.eligibility
*/
#include <stdio.h>

int main() {
    // Variables to store user input
    float attendance_percent;
    float average_marks;

    // Prompt user for input
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance_percent);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    // Check eligibility criteria
    // Student is eligible if:
    // i. Attendance is >= 75% AND
    // ii. Average marks are >= 40.
    if (attendance_percent >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
