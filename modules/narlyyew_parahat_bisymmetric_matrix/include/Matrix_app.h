// Copyright 2022 Gavrilov Leonid

#ifndef MODULES_NARLYYEW_PARAHAT_BISYMMETRIC_MATRIX_INCLUDE_MATRIX_APP_H_
#define MODULES_NARLYYEW_PARAHAT_BISYMMETRIC_MATRIX_INCLUDE_MATRIX_APP_H_

#include <string>

class CLPApplication {
 public:
  CLPApplication();
  std::string operator()(int argc, const char** argv);

 private:
  std::string help();
  std::string argument_error();
};

#endif  //  MODULES_NARLYYEW_PARAHAT_BISYMMETRIC_MATRIX_INCLUDE_MATRIX_APP_H_
