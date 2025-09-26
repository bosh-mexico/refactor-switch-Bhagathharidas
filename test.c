#include <assert.h>
#include <string.h>
#include "Checkout.h"
#include "PaymentMode.h"

int main() {
    // Test valid payments
    assert(strcmp(checkout(PayPal, 100.0), "Processing PayPal payment of $100.00") == 0);
    assert(strcmp(checkout(GooglePay, 50.5), "Processing GooglePay payment of $50.50") == 0);
    assert(strcmp(checkout(CreditCard, 200), "Processing Credit Card payment of $200.00") == 0);

    // Test invalid payment mode
    assert(strcmp(checkout(Unknown, 100), "Invalid payment mode selected!") == 0);

    // Test invalid amounts
    assert(strcmp(checkout(PayPal, 0), "Invalid amount for PayPal payment!") == 0);
    assert(strcmp(checkout(GooglePay, -5), "Invalid amount for GooglePay payment!") == 0);
    assert(strcmp(checkout(CreditCard, -1), "Invalid amount for Credit Card payment!") == 0);

    return 0;
}
