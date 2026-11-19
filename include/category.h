#pragma once
#include <string>

// Responsibility: a named spending/income label (e.g. "Rent", "Food")
// that transactions and budgets are grouped by.
class Category {
private:
    int id;
    std::string name;

public:
    Category(int id, const std::string& name);
    int getId() const;
    std::string getName() const;
};
