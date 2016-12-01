// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// engine1
NumericMatrix engine1(NumericMatrix data, NumericMatrix kernel);
RcppExport SEXP imagine_engine1(SEXP dataSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type kernel(kernelSEXP);
    rcpp_result_gen = Rcpp::wrap(engine1(data, kernel));
    return rcpp_result_gen;
END_RCPP
}
// engine2
NumericMatrix engine2(NumericMatrix data, NumericMatrix kernel);
RcppExport SEXP imagine_engine2(SEXP dataSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type kernel(kernelSEXP);
    rcpp_result_gen = Rcpp::wrap(engine2(data, kernel));
    return rcpp_result_gen;
END_RCPP
}
// engine3
NumericMatrix engine3(NumericMatrix data, NumericMatrix kernel, double x, double maxValue);
RcppExport SEXP imagine_engine3(SEXP dataSEXP, SEXP kernelSEXP, SEXP xSEXP, SEXP maxValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type maxValue(maxValueSEXP);
    rcpp_result_gen = Rcpp::wrap(engine3(data, kernel, x, maxValue));
    return rcpp_result_gen;
END_RCPP
}
// engine4
NumericMatrix engine4(NumericMatrix data, int radius);
RcppExport SEXP imagine_engine4(SEXP dataSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(engine4(data, radius));
    return rcpp_result_gen;
END_RCPP
}
// engine5
NumericMatrix engine5(NumericMatrix data, int radius, double x, double maxValue);
RcppExport SEXP imagine_engine5(SEXP dataSEXP, SEXP radiusSEXP, SEXP xSEXP, SEXP maxValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type maxValue(maxValueSEXP);
    rcpp_result_gen = Rcpp::wrap(engine5(data, radius, x, maxValue));
    return rcpp_result_gen;
END_RCPP
}