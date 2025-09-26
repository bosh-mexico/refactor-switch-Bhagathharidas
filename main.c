#include <stdio.h>
#include "Checkout.h"
#include "PaymentMode.h"

int main() {
    double amount = 150.75;

    printf("%s\n", checkout(PayPal, amount));
    printf("%s\n", checkout(GooglePay, amount));
    printf("%s\n", checkout(CreditCard, amount));
    printf("%s\n", checkout(Unknown, amount));
    printf("%s\n", checkout(PayPal, -10)); // Example invalid amount

    return 0;
}
