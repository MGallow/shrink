// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// RIDGEc
arma::mat RIDGEc(const arma::mat& S, double lam);
RcppExport SEXP _SCPME_RIDGEc(SEXP SSEXP, SEXP lamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type lam(lamSEXP);
    rcpp_result_gen = Rcpp::wrap(RIDGEc(S, lam));
    return rcpp_result_gen;
END_RCPP
}
// ADMMc
List ADMMc(const arma::mat& S, const arma::mat& A, const arma::mat& B, const arma::mat& C, const arma::mat& initOmega, const arma::mat& initZ, const arma::mat& initY, const double lam, const double alpha, const double tau, double rho, const double mu, const double tau_rho, const int iter_rho, std::string crit, const double tol_abs, const double tol_rel, const int maxit);
RcppExport SEXP _SCPME_ADMMc(SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP initOmegaSEXP, SEXP initZSEXP, SEXP initYSEXP, SEXP lamSEXP, SEXP alphaSEXP, SEXP tauSEXP, SEXP rhoSEXP, SEXP muSEXP, SEXP tau_rhoSEXP, SEXP iter_rhoSEXP, SEXP critSEXP, SEXP tol_absSEXP, SEXP tol_relSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type initOmega(initOmegaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type initZ(initZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type initY(initYSEXP);
    Rcpp::traits::input_parameter< const double >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_rho(tau_rhoSEXP);
    Rcpp::traits::input_parameter< const int >::type iter_rho(iter_rhoSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit(critSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_abs(tol_absSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_rel(tol_relSEXP);
    Rcpp::traits::input_parameter< const int >::type maxit(maxitSEXP);
    rcpp_result_gen = Rcpp::wrap(ADMMc(S, A, B, C, initOmega, initZ, initY, lam, alpha, tau, rho, mu, tau_rho, iter_rho, crit, tol_abs, tol_rel, maxit));
    return rcpp_result_gen;
END_RCPP
}
// CV_ADMMc
List CV_ADMMc(const arma::mat& X, const arma::mat& S, const arma::mat& Y, const arma::mat& A, const arma::mat& B, const arma::mat& C, const arma::colvec& lam, const double alpha, bool path, double tau, double rho, const double mu, const double tau_rho, const int iter_rho, std::string crit, const double tol_abs, const double tol_rel, int maxit, int adjmaxit, int K, std::string crit_cv, std::string start, std::string trace);
RcppExport SEXP _SCPME_CV_ADMMc(SEXP XSEXP, SEXP SSEXP, SEXP YSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP lamSEXP, SEXP alphaSEXP, SEXP pathSEXP, SEXP tauSEXP, SEXP rhoSEXP, SEXP muSEXP, SEXP tau_rhoSEXP, SEXP iter_rhoSEXP, SEXP critSEXP, SEXP tol_absSEXP, SEXP tol_relSEXP, SEXP maxitSEXP, SEXP adjmaxitSEXP, SEXP KSEXP, SEXP crit_cvSEXP, SEXP startSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type path(pathSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_rho(tau_rhoSEXP);
    Rcpp::traits::input_parameter< const int >::type iter_rho(iter_rhoSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit(critSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_abs(tol_absSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_rel(tol_relSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< int >::type adjmaxit(adjmaxitSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit_cv(crit_cvSEXP);
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(CV_ADMMc(X, S, Y, A, B, C, lam, alpha, path, tau, rho, mu, tau_rho, iter_rho, crit, tol_abs, tol_rel, maxit, adjmaxit, K, crit_cv, start, trace));
    return rcpp_result_gen;
END_RCPP
}
// CVP_ADMMc
arma::mat CVP_ADMMc(const arma::mat& X_train, const arma::mat& X_valid, const arma::mat& Y_train, const arma::mat& Y_valid, const arma::mat& A, const arma::mat& B, const arma::mat& C, const arma::colvec& lam, const double alpha, const double tau, double rho, const double mu, const double tau_rho, const int iter_rho, std::string crit, const double tol_abs, const double tol_rel, int maxit, int adjmaxit, std::string crit_cv, std::string start, std::string trace);
RcppExport SEXP _SCPME_CVP_ADMMc(SEXP X_trainSEXP, SEXP X_validSEXP, SEXP Y_trainSEXP, SEXP Y_validSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP lamSEXP, SEXP alphaSEXP, SEXP tauSEXP, SEXP rhoSEXP, SEXP muSEXP, SEXP tau_rhoSEXP, SEXP iter_rhoSEXP, SEXP critSEXP, SEXP tol_absSEXP, SEXP tol_relSEXP, SEXP maxitSEXP, SEXP adjmaxitSEXP, SEXP crit_cvSEXP, SEXP startSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X_train(X_trainSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X_valid(X_validSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y_train(Y_trainSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y_valid(Y_validSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lam(lamSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type tau_rho(tau_rhoSEXP);
    Rcpp::traits::input_parameter< const int >::type iter_rho(iter_rhoSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit(critSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_abs(tol_absSEXP);
    Rcpp::traits::input_parameter< const double >::type tol_rel(tol_relSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< int >::type adjmaxit(adjmaxitSEXP);
    Rcpp::traits::input_parameter< std::string >::type crit_cv(crit_cvSEXP);
    Rcpp::traits::input_parameter< std::string >::type start(startSEXP);
    Rcpp::traits::input_parameter< std::string >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(CVP_ADMMc(X_train, X_valid, Y_train, Y_valid, A, B, C, lam, alpha, tau, rho, mu, tau_rho, iter_rho, crit, tol_abs, tol_rel, maxit, adjmaxit, crit_cv, start, trace));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SCPME_RIDGEc", (DL_FUNC) &_SCPME_RIDGEc, 2},
    {"_SCPME_ADMMc", (DL_FUNC) &_SCPME_ADMMc, 18},
    {"_SCPME_CV_ADMMc", (DL_FUNC) &_SCPME_CV_ADMMc, 23},
    {"_SCPME_CVP_ADMMc", (DL_FUNC) &_SCPME_CVP_ADMMc, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_SCPME(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
