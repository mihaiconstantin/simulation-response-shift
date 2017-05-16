// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// buildDesign
Rcpp::NumericMatrix buildDesign(Rcpp::DoubleVector shift_proportions, Rcpp::DoubleVector shift_magnitudes, Rcpp::NumericVector shift_types, Rcpp::NumericVector parameters_types, Rcpp::NumericVector test_lengths);
RcppExport SEXP FypSim_buildDesign(SEXP shift_proportionsSEXP, SEXP shift_magnitudesSEXP, SEXP shift_typesSEXP, SEXP parameters_typesSEXP, SEXP test_lengthsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type shift_proportions(shift_proportionsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DoubleVector >::type shift_magnitudes(shift_magnitudesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type shift_types(shift_typesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type parameters_types(parameters_typesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type test_lengths(test_lengthsSEXP);
    rcpp_result_gen = Rcpp::wrap(buildDesign(shift_proportions, shift_magnitudes, shift_types, parameters_types, test_lengths));
    return rcpp_result_gen;
END_RCPP
}
// runCell
Rcpp::NumericMatrix runCell(double shift_proportion, double shift_magnitude, unsigned int shift_type, unsigned int parameters_type, unsigned int test_length);
RcppExport SEXP FypSim_runCell(SEXP shift_proportionSEXP, SEXP shift_magnitudeSEXP, SEXP shift_typeSEXP, SEXP parameters_typeSEXP, SEXP test_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type shift_proportion(shift_proportionSEXP);
    Rcpp::traits::input_parameter< double >::type shift_magnitude(shift_magnitudeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type shift_type(shift_typeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type parameters_type(parameters_typeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type test_length(test_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(runCell(shift_proportion, shift_magnitude, shift_type, parameters_type, test_length));
    return rcpp_result_gen;
END_RCPP
}
// runSelectedCells
Rcpp::List runSelectedCells(Rcpp::NumericMatrix selected_cells);
RcppExport SEXP FypSim_runSelectedCells(SEXP selected_cellsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type selected_cells(selected_cellsSEXP);
    rcpp_result_gen = Rcpp::wrap(runSelectedCells(selected_cells));
    return rcpp_result_gen;
END_RCPP
}
