#pragma once
#include "Category.h"
#include "Account.h"

// Responsibility: a monthly spending limit for one Category,
// and checking whether spending has gone over it.
class Budget {
private:
    const Category* category;  // not owned
    double monthlyLimit;

public:
    Budget(const Category* category, double monthlyLimit);
    double getLimit() const;
    double remaining(const Account& account) const;
    bool isExceeded(const Account& account) const;
};
