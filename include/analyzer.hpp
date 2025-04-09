#pragma once
#include <string>

class Analyzer 
{
public: 
  explicit Analyzer(const std:: string& sourceFile);
  void run();

private:
  std::string sourceFile;

  void analyzeTranslation();
  void checkUnusedVariables();
  void checkStyleIssues();
};
