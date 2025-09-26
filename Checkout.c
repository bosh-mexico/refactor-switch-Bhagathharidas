#include "Checkout.h"
#include "PaymentProcessors.h"

const char* checkout(PaymentMode mode, double amount) {
    if (mode == PayPal) {
        return processPayPal(amount);
    } else if (mode == GooglePay) {
        return processGooglePay(amount);
    } else if (mode == CreditCard) {
        return processCreditCard(amount);
    } else {
        return processInvalid(amount);
    }
}
