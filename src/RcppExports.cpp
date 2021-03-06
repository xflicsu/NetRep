// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "NetRep_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// CheckFinite
void CheckFinite(Rcpp::NumericMatrix matPtr);
RcppExport SEXP NetRep_CheckFinite(SEXP matPtrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type matPtr(matPtrSEXP);
    CheckFinite(matPtr);
    return R_NilValue;
END_RCPP
}
// IntermediateProperties
Rcpp::List IntermediateProperties(Rcpp::NumericMatrix dData, Rcpp::NumericMatrix dCorr, Rcpp::NumericMatrix dNet, Rcpp::CharacterVector tNodeNames, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules);
RcppExport SEXP NetRep_IntermediateProperties(SEXP dDataSEXP, SEXP dCorrSEXP, SEXP dNetSEXP, SEXP tNodeNamesSEXP, SEXP moduleAssignmentsSEXP, SEXP modulesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type dData(dDataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type dCorr(dCorrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type dNet(dNetSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type tNodeNames(tNodeNamesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type moduleAssignments(moduleAssignmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type modules(modulesSEXP);
    __result = Rcpp::wrap(IntermediateProperties(dData, dCorr, dNet, tNodeNames, moduleAssignments, modules));
    return __result;
END_RCPP
}
// IntermediatePropertiesNoData
Rcpp::List IntermediatePropertiesNoData(Rcpp::NumericMatrix dCorr, Rcpp::NumericMatrix dNet, Rcpp::CharacterVector tNodeNames, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules);
RcppExport SEXP NetRep_IntermediatePropertiesNoData(SEXP dCorrSEXP, SEXP dNetSEXP, SEXP tNodeNamesSEXP, SEXP moduleAssignmentsSEXP, SEXP modulesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type dCorr(dCorrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type dNet(dNetSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type tNodeNames(tNodeNamesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type moduleAssignments(moduleAssignmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type modules(modulesSEXP);
    __result = Rcpp::wrap(IntermediatePropertiesNoData(dCorr, dNet, tNodeNames, moduleAssignments, modules));
    return __result;
END_RCPP
}
// PermutationProcedure
Rcpp::List PermutationProcedure(Rcpp::List discProps, Rcpp::NumericMatrix tData, Rcpp::NumericMatrix tCorr, Rcpp::NumericMatrix tNet, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules, Rcpp::IntegerVector nPermutations, Rcpp::IntegerVector nCores, Rcpp::CharacterVector nullHypothesis, Rcpp::LogicalVector verbose, Rcpp::Function vCat);
RcppExport SEXP NetRep_PermutationProcedure(SEXP discPropsSEXP, SEXP tDataSEXP, SEXP tCorrSEXP, SEXP tNetSEXP, SEXP moduleAssignmentsSEXP, SEXP modulesSEXP, SEXP nPermutationsSEXP, SEXP nCoresSEXP, SEXP nullHypothesisSEXP, SEXP verboseSEXP, SEXP vCatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type discProps(discPropsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tData(tDataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tCorr(tCorrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tNet(tNetSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type moduleAssignments(moduleAssignmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type modules(modulesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type nPermutations(nPermutationsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type nCores(nCoresSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type nullHypothesis(nullHypothesisSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type vCat(vCatSEXP);
    __result = Rcpp::wrap(PermutationProcedure(discProps, tData, tCorr, tNet, moduleAssignments, modules, nPermutations, nCores, nullHypothesis, verbose, vCat));
    return __result;
END_RCPP
}
// PermutationProcedureNoData
Rcpp::List PermutationProcedureNoData(Rcpp::List discProps, Rcpp::NumericMatrix tCorr, Rcpp::NumericMatrix tNet, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules, Rcpp::IntegerVector nPermutations, Rcpp::IntegerVector nCores, Rcpp::CharacterVector nullHypothesis, Rcpp::LogicalVector verbose, Rcpp::Function vCat);
RcppExport SEXP NetRep_PermutationProcedureNoData(SEXP discPropsSEXP, SEXP tCorrSEXP, SEXP tNetSEXP, SEXP moduleAssignmentsSEXP, SEXP modulesSEXP, SEXP nPermutationsSEXP, SEXP nCoresSEXP, SEXP nullHypothesisSEXP, SEXP verboseSEXP, SEXP vCatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type discProps(discPropsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tCorr(tCorrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type tNet(tNetSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type moduleAssignments(moduleAssignmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type modules(modulesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type nPermutations(nPermutationsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type nCores(nCoresSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type nullHypothesis(nullHypothesisSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type vCat(vCatSEXP);
    __result = Rcpp::wrap(PermutationProcedureNoData(discProps, tCorr, tNet, moduleAssignments, modules, nPermutations, nCores, nullHypothesis, verbose, vCat));
    return __result;
END_RCPP
}
// NetProps
Rcpp::List NetProps(Rcpp::NumericMatrix data, Rcpp::NumericMatrix net, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules);
RcppExport SEXP NetRep_NetProps(SEXP dataSEXP, SEXP netSEXP, SEXP moduleAssignmentsSEXP, SEXP modulesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type net(netSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type moduleAssignments(moduleAssignmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type modules(modulesSEXP);
    __result = Rcpp::wrap(NetProps(data, net, moduleAssignments, modules));
    return __result;
END_RCPP
}
// NetPropsNoData
Rcpp::List NetPropsNoData(Rcpp::NumericMatrix net, Rcpp::CharacterVector moduleAssignments, Rcpp::CharacterVector modules);
RcppExport SEXP NetRep_NetPropsNoData(SEXP netSEXP, SEXP moduleAssignmentsSEXP, SEXP modulesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type net(netSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type moduleAssignments(moduleAssignmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type modules(modulesSEXP);
    __result = Rcpp::wrap(NetPropsNoData(net, moduleAssignments, modules));
    return __result;
END_RCPP
}
// Scale
Rcpp::NumericMatrix Scale(Rcpp::NumericMatrix data);
RcppExport SEXP NetRep_Scale(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    __result = Rcpp::wrap(Scale(data));
    return __result;
END_RCPP
}
