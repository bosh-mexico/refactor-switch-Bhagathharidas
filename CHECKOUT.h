#ifndef CHECKOUT_H
#define CHECKOUT_H

#include "PaymentMode.h"

// Returns a string describing the result of the checkout
const char* checkout(PaymentMode mode, double amount);

#endif
