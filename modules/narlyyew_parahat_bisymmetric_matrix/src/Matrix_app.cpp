// Copyright 2022 Gavrilov Leonid

#include "include/Matrix_app.h"

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "include/Matrix.h"

CLPApplication::CLPApplication() {}

std::string CLPApplication::operator()(int argc, const char** argv) {
  std::ostringstream os;

  if (argc == 1) {
    return this->argument_error();
  }
  if (std::string(argv[1]) == "--help" || std::string(argv[1]) == "-h") {
    return this->help();
  }
  int i = 1;

  if (std::string(argv[i]) == "--test1" || std::string(argv[i]) == "-t1") {
    int size = atoi(argv[2]);
    Matrix m(size);
    m.Insert(1, 1, 3);
    Matrix n(m);

    // EXPECT_EQ(n.GetSize(), m.GetSize());
    os << n.GetSize();
    std::cout << os.str() << std::endl;
    return "success";
  }
  if (std::string(argv[i]) == "--test2" || std::string(argv[i]) == "-t2") {
    int size = 4;
    int element = atoi(argv[2]);
    int row = 1, col = 1;
    Matrix m(size);
    m.Insert(row, col, element);

    // EXPECT_EQ(element, m.GetElem(row, col));
    os << m.GetElem(row, col);
    std::cout << os.str() << std::endl;
    return "success";
  }
  if (std::string(argv[i]) == "--test3" || std::string(argv[i]) == "-t3") {
    int size = 4;
    int element = atoi(argv[2]);
    int row = 1, col = 1;
    Matrix m(size);
    m.Insert(row, col, element);

    // EXPECT_EQ(element, m.GetElem(row, col));
    os << m.GetElem(row, col);
    std::cout << os.str() << std::endl;
    return "success";
  }
  return "success";
}

std::string CLPApplication::help() {
  std::string help =
      "This program considers the integral";
  return help;
}

std::string CLPApplication::argument_error() {
  std::string error = "Invalid argument amount, try --help or -h commands";
  return error;
}
