#include <stdio.h>
#include <stdbool.h>

#define MAX_SEATS 50

// Function to display menu
void displayMenu() {
    printf("\n--- Bus Reservation System ---\n");
    printf("1. Display available seats\n");
    printf("2. Reserve a seat\n");
    printf("3. Cancel a reservation\n");
    printf("4. Display booking information\n");
    printf("5. Exit\n");
}

int main() {
    // Variables
    int availableSeats[MAX_SEATS] = {0}; // 0 indicates available, 1 indicates reserved
    int totalSeats, seatCost, luggageLimit, bagsPerTicket;
    int option, seatNumber;

    // Input bus details
    printf("Enter total number of seats: ");
    scanf("%d", &totalSeats);

    printf("Enter cost of each seat: ");
    scanf("%d", &seatCost);

    printf("Enter total luggage load limit: ");
    scanf("%d", &luggageLimit);

    printf("Enter individual bags allowed per ticket: ");
    scanf("%d", &bagsPerTicket);

    // Main loop
    do {
        displayMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                // Display available seats
                printf("Available Seats: ");
                for (int i = 0; i < totalSeats; ++i) {
                    if (availableSeats[i] == 0) {
                        printf("%d ", i + 1);
                    }
                }
                printf("\n");
                break;

            case 2:
                // Reserve a seat
                printf("Enter seat number to reserve: ");
                scanf("%d", &seatNumber);

                if (seatNumber > 0 && seatNumber <= totalSeats && availableSeats[seatNumber - 1] == 0) {
                    availableSeats[seatNumber - 1] = 1;
                    printf("Seat %d reserved successfully.\n", seatNumber);
                } else {
                    printf("Invalid seat number or seat already reserved.\n");
                }
                break;

            case 3:
                // Cancel a reservation
                printf("Enter seat number to cancel reservation: ");
                scanf("%d", &seatNumber);

                if (seatNumber > 0 && seatNumber <= totalSeats && availableSeats[seatNumber - 1] == 1) {
                    availableSeats[seatNumber - 1] = 0;
                    printf("Reservation for seat %d canceled.\n", seatNumber);
                } else {
                    printf("Invalid seat number or seat not reserved.\n");
                }
                break;

            case 4:
                // Display booking information
                printf("Booking Information:\n");
                for (int i = 0; i < totalSeats; ++i) {
                    printf("Seat %d: %s\n", i + 1, availableSeats[i] ? "Reserved" : "Available");
                }
                break;

            case 5:
                // Exit
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    } while (option != 5);

    return 0;
}
