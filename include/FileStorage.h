#pragma once
#include <string>

class FinanceManager;

// Responsibility: saving the manager's data to disk and loading it back.
class FileStorage {
private:
    std::string filePath;

public:
    explicit FileStorage(const std::string& filePath);
    bool save(const FinanceManager& manager) const;
    bool load(FinanceManager& manager) const;
};
