#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate;
    int daysOverdue;
    float fineRate, fineAmount;

    // Input from user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate based on days overdue
    if (daysOverdue <= 0) {
        fineRate = 0;  // No fine if the book is returned on time or early
        fineAmount = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20; // Ksh. 20 per day
        fineAmount = daysOverdue * fineRate;
    } else if (daysOverdue <= 14) {
        fineRate = 50; // Ksh. 50 per day
        fineAmount = daysOverdue * fineRate;
    } else {
        fineRate = 100; // Ksh. 100 per day
        fineAmount = daysOverdue * fineRate;
    }

    // Display results
    printf("\n--- Fine Calculation ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %.2f per day\n", fineRate);
    printf("Total Fine Amount: Ksh. %.2f\n", fineAmount);

    return 0;
}