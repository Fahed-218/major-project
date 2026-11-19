#pragma once
#include <string>

class FinanceManager;

class FileStorage {
private:
    std::string filePath;

public:
    explicit FileStorage(const std::string& filePath);
    bool save(const FinanceManager& manager) const;
    bool load(FinanceManager& manager) const;
};
