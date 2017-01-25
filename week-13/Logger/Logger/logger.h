#pragma once
#include <QProcessEnvironment>

class Logger {
private:
  QProcessEnvironment _environment;

public:
  Logger(QString category);
  QLoggingCategory* debug;
  QLoggingCategory* info;
  QLoggingCategory* warning;
  QLoggingCategory* critical;
  ~Logger();
  void myCategoryFilter(QLoggingCategory *category);
  QLoggingCategory* getDebugCategory();
  QLoggingCategory* getInfoCategory();
  QLoggingCategory* getWarningCategory();
  QLoggingCategory* getCriticalCategory();
};