// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// Grad
arma::vec Grad(NumericMatrix Mat, arma::vec psi);
RcppExport SEXP _WassersteinGoF_Grad(SEXP MatSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Mat(MatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(Grad(Mat, psi));
    return rcpp_result_gen;
END_RCPP
}
// Objective
double Objective(NumericMatrix Mat, arma::vec psi);
RcppExport SEXP _WassersteinGoF_Objective(SEXP MatSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Mat(MatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(Objective(Mat, psi));
    return rcpp_result_gen;
END_RCPP
}
// SGD_OT
NumericVector SGD_OT(double C, const NumericMatrix Mat);
RcppExport SEXP _WassersteinGoF_SGD_OT(SEXP CSEXP, SEXP MatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type Mat(MatSEXP);
    rcpp_result_gen = Rcpp::wrap(SGD_OT(C, Mat));
    return rcpp_result_gen;
END_RCPP
}
// Plot
NumericVector Plot(NumericMatrix Mat, arma::vec psi);
RcppExport SEXP _WassersteinGoF_Plot(SEXP MatSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Mat(MatSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(Plot(Mat, psi));
    return rcpp_result_gen;
END_RCPP
}
// rGausResid
arma::mat rGausResid(int n, int dim);
RcppExport SEXP _WassersteinGoF_rGausResid(SEXP nSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(rGausResid(n, dim));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_WassersteinGoF_Grad", (DL_FUNC) &_WassersteinGoF_Grad, 2},
    {"_WassersteinGoF_Objective", (DL_FUNC) &_WassersteinGoF_Objective, 2},
    {"_WassersteinGoF_SGD_OT", (DL_FUNC) &_WassersteinGoF_SGD_OT, 2},
    {"_WassersteinGoF_Plot", (DL_FUNC) &_WassersteinGoF_Plot, 2},
    {"_WassersteinGoF_rGausResid", (DL_FUNC) &_WassersteinGoF_rGausResid, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_WassersteinGoF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}