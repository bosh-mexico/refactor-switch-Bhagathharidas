#include "PaymentProcessors.h"
#include <stdio.h>
#include <string.h>

const char* processPayPal(double amount) {
    static char result[100];
    if (amount <= 0) {
        snprintf(result, sizeof(result), "Invalid amount for PayPal payment!");
    } else {
        snprintf(result, sizeof(result), "Processing PayPal payment of $%.2f", amount);
        // Placeholder: Integrate PayPal API here
    }
    return result;
}

const char* processGooglePay(double amount) {
    static char result[100];
    if (amount <= 0) {
        snprintf(result, sizeof(result), "Invalid amount for GooglePay payment!");
    } else {
        snprintf(result, sizeof(result), "Processing GooglePay payment of $%.2f", amount);
        // Placeholder: Integrate GooglePay API here
    }
    return result;
}

const char* processCreditCard(double amount) {
    static char result[100];
    if (amount <= 0) {
        snprintf(result, sizeof(result), "Invalid amount for Credit Card payment!");
    } else {
        snprintf(result, sizeof(result), "Processing Credit Card payment of $%.2f", amount);
        // Placeholder: Integrate Credit Card API here
    }
    return result;
}

const char* processInvalid(double amount) {
    (void)amount; // Suppress unused parameter warning
    return "Invalid payment mode selected!";
}
