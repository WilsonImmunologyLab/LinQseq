// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// timesTwo
int timesTwo(int x);
RcppExport SEXP _LinQseq_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}
// Sigmoid
NumericVector Sigmoid(NumericVector a, double n, double k);
RcppExport SEXP _LinQseq_Sigmoid(SEXP aSEXP, SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(Sigmoid(a, n, k));
    return rcpp_result_gen;
END_RCPP
}
// EucNorm
double EucNorm(NumericVector a);
RcppExport SEXP _LinQseq_EucNorm(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(EucNorm(a));
    return rcpp_result_gen;
END_RCPP
}
// scaleDistCpp
NumericMatrix scaleDistCpp(NumericMatrix data, double n, double k);
RcppExport SEXP _LinQseq_scaleDistCpp(SEXP dataSEXP, SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(scaleDistCpp(data, n, k));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_LinQseq_timesTwo", (DL_FUNC) &_LinQseq_timesTwo, 1},
    {"_LinQseq_Sigmoid", (DL_FUNC) &_LinQseq_Sigmoid, 3},
    {"_LinQseq_EucNorm", (DL_FUNC) &_LinQseq_EucNorm, 1},
    {"_LinQseq_scaleDistCpp", (DL_FUNC) &_LinQseq_scaleDistCpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_LinQseq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}