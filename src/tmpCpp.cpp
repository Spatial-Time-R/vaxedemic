//rcpp_functions.cpp
//[[Rcpp::plugins(cpp11)]]

#include <Rcpp.h>

using namespace std;

//' Cpp useless function
//'
//' Another useless function to test package development
//' @param x completely meaningless
//' @return something else
//' @export
//' @useDynLib vaxedemic
//[[Rcpp::export]]
double initial_test_cpp(double x){
  Rcpp::Rcout << "You passed in: " << x << std::endl; 
  double tmp = R::unif_rand();
  return(tmp);
}
