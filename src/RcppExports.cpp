// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// nearPDc
arma::mat nearPDc(arma::mat X);
RcppExport SEXP _TrainSel_nearPDc(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(nearPDc(X));
    return rcpp_result_gen;
END_RCPP
}
// calculate_crowding
NumericVector calculate_crowding(NumericMatrix scores);
RcppExport SEXP _TrainSel_calculate_crowding(SEXP scoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type scores(scoresSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_crowding(scores));
    return rcpp_result_gen;
END_RCPP
}
// TrainSelC
List TrainSelC(List Data, List CANDIDATES, Rcpp::IntegerVector setsizes, Rcpp::CharacterVector settypes, Rcpp::Function Stat, bool CD, Rcpp::IntegerVector Target, List control, int ntotal);
RcppExport SEXP _TrainSel_TrainSelC(SEXP DataSEXP, SEXP CANDIDATESSEXP, SEXP setsizesSEXP, SEXP settypesSEXP, SEXP StatSEXP, SEXP CDSEXP, SEXP TargetSEXP, SEXP controlSEXP, SEXP ntotalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< List >::type CANDIDATES(CANDIDATESSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type setsizes(setsizesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type settypes(settypesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type Stat(StatSEXP);
    Rcpp::traits::input_parameter< bool >::type CD(CDSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Target(TargetSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< int >::type ntotal(ntotalSEXP);
    rcpp_result_gen = Rcpp::wrap(TrainSelC(Data, CANDIDATES, setsizes, settypes, Stat, CD, Target, control, ntotal));
    return rcpp_result_gen;
END_RCPP
}
// TrainSelCMOO
List TrainSelCMOO(List Data, List CANDIDATES, Rcpp::IntegerVector setsizes, Rcpp::CharacterVector settypes, Rcpp::Function Stat, int nstat, List control);
RcppExport SEXP _TrainSel_TrainSelCMOO(SEXP DataSEXP, SEXP CANDIDATESSEXP, SEXP setsizesSEXP, SEXP settypesSEXP, SEXP StatSEXP, SEXP nstatSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< List >::type CANDIDATES(CANDIDATESSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type setsizes(setsizesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type settypes(settypesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type Stat(StatSEXP);
    Rcpp::traits::input_parameter< int >::type nstat(nstatSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(TrainSelCMOO(Data, CANDIDATES, setsizes, settypes, Stat, nstat, control));
    return rcpp_result_gen;
END_RCPP
}
// Kmatfunc
arma::mat Kmatfunc(arma::mat Markers);
RcppExport SEXP _TrainSel_Kmatfunc(SEXP MarkersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Markers(MarkersSEXP);
    rcpp_result_gen = Rcpp::wrap(Kmatfunc(Markers));
    return rcpp_result_gen;
END_RCPP
}
// calculatecrossvalueM1
double calculatecrossvalueM1(arma::vec parent1, arma::vec parent2, arma::vec markereffects);
RcppExport SEXP _TrainSel_calculatecrossvalueM1(SEXP parent1SEXP, SEXP parent2SEXP, SEXP markereffectsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type parent1(parent1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type parent2(parent2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type markereffects(markereffectsSEXP);
    rcpp_result_gen = Rcpp::wrap(calculatecrossvalueM1(parent1, parent2, markereffects));
    return rcpp_result_gen;
END_RCPP
}
// calculatecrossvalueM2
double calculatecrossvalueM2(arma::vec Parents1, arma::vec Parents2, arma::vec markereffects, arma::mat markermap, unsigned char type, unsigned int generation);
RcppExport SEXP _TrainSel_calculatecrossvalueM2(SEXP Parents1SEXP, SEXP Parents2SEXP, SEXP markereffectsSEXP, SEXP markermapSEXP, SEXP typeSEXP, SEXP generationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Parents1(Parents1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Parents2(Parents2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type markereffects(markereffectsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type markermap(markermapSEXP);
    Rcpp::traits::input_parameter< unsigned char >::type type(typeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type generation(generationSEXP);
    rcpp_result_gen = Rcpp::wrap(calculatecrossvalueM2(Parents1, Parents2, markereffects, markermap, type, generation));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TrainSel_nearPDc", (DL_FUNC) &_TrainSel_nearPDc, 1},
    {"_TrainSel_calculate_crowding", (DL_FUNC) &_TrainSel_calculate_crowding, 1},
    {"_TrainSel_TrainSelC", (DL_FUNC) &_TrainSel_TrainSelC, 9},
    {"_TrainSel_TrainSelCMOO", (DL_FUNC) &_TrainSel_TrainSelCMOO, 7},
    {"_TrainSel_Kmatfunc", (DL_FUNC) &_TrainSel_Kmatfunc, 1},
    {"_TrainSel_calculatecrossvalueM1", (DL_FUNC) &_TrainSel_calculatecrossvalueM1, 3},
    {"_TrainSel_calculatecrossvalueM2", (DL_FUNC) &_TrainSel_calculatecrossvalueM2, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_TrainSel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
