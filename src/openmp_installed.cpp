#include <Rcpp.h>
// [[Rcpp::plugins(cpp17)]]

#ifdef _OPENMP
  #define omp_installed true
#else
  #define omp_installed false
#endif

// Function exporting information on whether OpenMP is installed
// [[Rcpp::export]]
bool openmp_installed() {
  return omp_installed;
}


