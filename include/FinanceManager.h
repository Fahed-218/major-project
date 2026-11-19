#pragma once
#include <vector>
#include <memory>
#include "Account.h"
#include "Category.h"
#include "Budget.h"
#include "SavingsGoal.h"
#include "FileStorage.h"

class FinanceManager {
private:
    std::vector<std::unique_ptr<Account>> accounts;
    std::vector<Category> categories;
    std::vector<Budget> budgets;
    std::vector<SavingsGoal> goals;
    FileStorage storage;

public:
    explicit FinanceManager(const std::string& dataFile);
    void addAccount(std::unique_ptr<Account> account);
    void addCategory(const Category& category);
    void addBudget(const Budget& budget);
    void addGoal(const SavingsGoal& goal);
    double totalBalance() const;
    void printMonthlyReport() const;
    bool saveData() const;
    bool loadData();
};
