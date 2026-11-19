#pragma once
#include <string>

private:
    std::string name;
    double targetAmount;
    double savedAmount;
    std::string deadline;

public:
    SavingsGoal(const std::string& name, double target, const std::string& deadline);
    void contribute(double amount);
    double percentComplete() const;
    bool isReached() const;
};
