// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// constrained_stress
double constrained_stress(NumericMatrix x, NumericMatrix W, NumericMatrix D);
RcppExport SEXP _graphlayouts_constrained_stress(SEXP xSEXP, SEXP WSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(constrained_stress(x, W, D));
    return rcpp_result_gen;
END_RCPP
}
// constrained_stress_major
NumericMatrix constrained_stress_major(NumericMatrix y, int dim, NumericMatrix W, NumericMatrix D, int iter, double tol);
RcppExport SEXP _graphlayouts_constrained_stress_major(SEXP ySEXP, SEXP dimSEXP, SEXP WSEXP, SEXP DSEXP, SEXP iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(constrained_stress_major(y, dim, W, D, iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// constrained_stress3D
double constrained_stress3D(NumericMatrix x, NumericMatrix W, NumericMatrix D);
RcppExport SEXP _graphlayouts_constrained_stress3D(SEXP xSEXP, SEXP WSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(constrained_stress3D(x, W, D));
    return rcpp_result_gen;
END_RCPP
}
// constrained_stress_major3D
NumericMatrix constrained_stress_major3D(NumericMatrix y, int dim, NumericMatrix W, NumericMatrix D, int iter, double tol);
RcppExport SEXP _graphlayouts_constrained_stress_major3D(SEXP ySEXP, SEXP dimSEXP, SEXP WSEXP, SEXP DSEXP, SEXP iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(constrained_stress_major3D(y, dim, W, D, iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// reweighting
NumericVector reweighting(IntegerMatrix el, List N_ranks);
RcppExport SEXP _graphlayouts_reweighting(SEXP elSEXP, SEXP N_ranksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type el(elSEXP);
    Rcpp::traits::input_parameter< List >::type N_ranks(N_ranksSEXP);
    rcpp_result_gen = Rcpp::wrap(reweighting(el, N_ranks));
    return rcpp_result_gen;
END_RCPP
}
// sparseStress
NumericMatrix sparseStress(NumericMatrix y, NumericMatrix D, List Rp, IntegerVector pivots, arma::sp_mat A, int maxIter);
RcppExport SEXP _graphlayouts_sparseStress(SEXP ySEXP, SEXP DSEXP, SEXP RpSEXP, SEXP pivotsSEXP, SEXP ASEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< List >::type Rp(RpSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type pivots(pivotsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(sparseStress(y, D, Rp, pivots, A, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// stress
double stress(NumericMatrix x, NumericMatrix W, NumericMatrix D);
RcppExport SEXP _graphlayouts_stress(SEXP xSEXP, SEXP WSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(stress(x, W, D));
    return rcpp_result_gen;
END_RCPP
}
// stress_major
NumericMatrix stress_major(NumericMatrix y, NumericMatrix W, NumericMatrix D, int iter, double tol);
RcppExport SEXP _graphlayouts_stress_major(SEXP ySEXP, SEXP WSEXP, SEXP DSEXP, SEXP iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(stress_major(y, W, D, iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// stress_radii
NumericMatrix stress_radii(NumericMatrix y, NumericMatrix W, NumericMatrix D, NumericVector r, NumericVector tseq);
RcppExport SEXP _graphlayouts_stress_radii(SEXP ySEXP, SEXP WSEXP, SEXP DSEXP, SEXP rSEXP, SEXP tseqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseq(tseqSEXP);
    rcpp_result_gen = Rcpp::wrap(stress_radii(y, W, D, r, tseq));
    return rcpp_result_gen;
END_RCPP
}
// stress_focus
NumericMatrix stress_focus(NumericMatrix y, NumericMatrix W, NumericMatrix D, NumericMatrix Z, NumericVector tseq, int iter, double tol);
RcppExport SEXP _graphlayouts_stress_focus(SEXP ySEXP, SEXP WSEXP, SEXP DSEXP, SEXP ZSEXP, SEXP tseqSEXP, SEXP iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseq(tseqSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(stress_focus(y, W, D, Z, tseq, iter, tol));
    return rcpp_result_gen;
END_RCPP
}
// stress3D
double stress3D(NumericMatrix x, NumericMatrix W, NumericMatrix D);
RcppExport SEXP _graphlayouts_stress3D(SEXP xSEXP, SEXP WSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(stress3D(x, W, D));
    return rcpp_result_gen;
END_RCPP
}
// stress_major3D
NumericMatrix stress_major3D(NumericMatrix y, NumericMatrix W, NumericMatrix D, int iter, double tol);
RcppExport SEXP _graphlayouts_stress_major3D(SEXP ySEXP, SEXP WSEXP, SEXP DSEXP, SEXP iterSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(stress_major3D(y, W, D, iter, tol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_graphlayouts_constrained_stress", (DL_FUNC) &_graphlayouts_constrained_stress, 3},
    {"_graphlayouts_constrained_stress_major", (DL_FUNC) &_graphlayouts_constrained_stress_major, 6},
    {"_graphlayouts_constrained_stress3D", (DL_FUNC) &_graphlayouts_constrained_stress3D, 3},
    {"_graphlayouts_constrained_stress_major3D", (DL_FUNC) &_graphlayouts_constrained_stress_major3D, 6},
    {"_graphlayouts_reweighting", (DL_FUNC) &_graphlayouts_reweighting, 2},
    {"_graphlayouts_sparseStress", (DL_FUNC) &_graphlayouts_sparseStress, 6},
    {"_graphlayouts_stress", (DL_FUNC) &_graphlayouts_stress, 3},
    {"_graphlayouts_stress_major", (DL_FUNC) &_graphlayouts_stress_major, 5},
    {"_graphlayouts_stress_radii", (DL_FUNC) &_graphlayouts_stress_radii, 5},
    {"_graphlayouts_stress_focus", (DL_FUNC) &_graphlayouts_stress_focus, 7},
    {"_graphlayouts_stress3D", (DL_FUNC) &_graphlayouts_stress3D, 3},
    {"_graphlayouts_stress_major3D", (DL_FUNC) &_graphlayouts_stress_major3D, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_graphlayouts(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
