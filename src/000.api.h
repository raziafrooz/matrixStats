/* C-level API that is called from R */
SEXP allocArray2(SEXP dim, SEXP value);
SEXP allocMatrix2(SEXP nrow, SEXP ncol, SEXP value);
SEXP allocVector2(SEXP length, SEXP value);
SEXP anyMissing(SEXP x, SEXP idxs);
SEXP binCounts(SEXP x, SEXP bx, SEXP right);
SEXP binMeans(SEXP y, SEXP x, SEXP bx, SEXP retCount, SEXP right);
SEXP colCounts(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP value, SEXP what, SEXP naRm, SEXP hasNA, SEXP useNames);
SEXP colOrderStats(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP which, SEXP useNames);
SEXP colRanges(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP what, SEXP naRm, SEXP hasNA, SEXP useNames);
SEXP count(SEXP x, SEXP idxs, SEXP value, SEXP what, SEXP naRm, SEXP hasNA);
SEXP diff2(SEXP x, SEXP idxs, SEXP lag, SEXP differences, SEXP useNames);
SEXP indexByRow(SEXP dim, SEXP idxs);
SEXP logSumExp(SEXP lx, SEXP idxs, SEXP naRm, SEXP hasNA);
SEXP mean2(SEXP x, SEXP idxs, SEXP naRm, SEXP refine);
SEXP productExpSumLog(SEXP x, SEXP idxs, SEXP naRm, SEXP hasNA);
SEXP psortKM(SEXP x, SEXP k, SEXP m);
SEXP rowCounts(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP value, SEXP what, SEXP naRm, SEXP hasNA, SEXP useNames);
SEXP rowCummaxs(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP byRow, SEXP useNames);
SEXP rowCummins(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP byRow, SEXP useNames);
SEXP rowCumprods(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP byRow, SEXP useNames);
SEXP rowCumsums(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP byRow, SEXP useNames);
SEXP rowDiffs(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP lag, SEXP differences, SEXP byRow, SEXP useNames);
SEXP rowLogSumExps(SEXP lx, SEXP dim, SEXP rows, SEXP cols, SEXP naRm, SEXP hasNA, SEXP byRow, SEXP useNames);
SEXP rowMads(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP constant, SEXP naRm, SEXP hasNA, SEXP byRow, SEXP useNames);
SEXP rowMeans2(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP naRm, SEXP hasNA, SEXP byRow, SEXP useNames);
SEXP rowMedians(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP naRm, SEXP hasNA, SEXP byRow, SEXP useNames);
SEXP rowOrderStats(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP which, SEXP useNames);
SEXP rowRanges(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP what, SEXP naRm, SEXP hasNA, SEXP useNames);
SEXP rowRanksWithTies(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP tiesMethod, SEXP byRow, SEXP useNames);
SEXP rowSums2(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP naRm, SEXP hasNA, SEXP byRow, SEXP useNames);
SEXP rowVars(SEXP x, SEXP dim, SEXP rows, SEXP cols, SEXP naRm, SEXP hasNA, SEXP byRow, SEXP useNames);
SEXP signTabulate(SEXP x, SEXP idxs);
SEXP sum2(SEXP x, SEXP idxs, SEXP naRm, SEXP mode);
SEXP validate(SEXP idxs, SEXP maxIdx, SEXP allowOutOfBound);
SEXP weightedMean(SEXP x, SEXP w, SEXP idxs, SEXP naRm, SEXP refine);
SEXP weightedMedian(SEXP x, SEXP w, SEXP idxs, SEXP naRm, SEXP interpolate, SEXP ties);
SEXP x_OP_y(SEXP x, SEXP y, SEXP dim, SEXP operator, SEXP xrows, SEXP xcols, SEXP yidxs, SEXP commute, SEXP naRm, SEXP hasNA, SEXP byRow);
