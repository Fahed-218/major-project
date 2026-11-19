#pragma once
#include <string>
#include "Category.h"

class Transaction {
private:
    int id;
    double amount;          // positive = income, negative = expense
    std::string date;       // "YYYY-MM-DD"
    std::string note;
    const Category* category;  // not owned

public:
    Transaction(int id, double amount, const std::string& date,
                const std::string& note, const Category* category);
    double getAmount() const;
    std::string getDate() const;
    const Category* getCategory() const;
    bool isExpense() const;
};
