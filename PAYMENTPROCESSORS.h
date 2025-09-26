#ifndef PAYMENTPROCESSORS_H
#define PAYMENTPROCESSORS_H

// Each processor returns a status message for testability
const char* processPayPal(double amount);
const char* processGooglePay(double amount);
const char* processCreditCard(double amount);
const char* processInvalid(double amount);

#endif
