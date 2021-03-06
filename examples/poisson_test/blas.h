#ifndef _BLAS_H
#define _BLAS_H

#include "fortran.h"

#define integer                     int
#define real                        float
#define doublereal                  double
#define character                   char
#define logical                     int
#define ftnlen                      int
typedef struct { real r, i; } complex;
typedef struct { doublereal r, i; } doublecomplex;


complex              F77(cdotc)(integer *,complex *,integer *,complex *,integer *),
                     F77(cdotu)(integer *,complex *,integer *,complex *,integer *);
void                 F77(caxpy)(integer *,complex *,complex *,integer *,complex *,
                           integer *),
                     F77(ccopy)(integer *,complex *,integer *,complex *,integer *),
                     F77(cgbmv)(character *,integer *,integer *,integer *,integer *,
                           complex *, complex *,integer *,complex *,integer *,
                           complex *,complex *,integer *,ftnlen),
                     F77(cgemm)(character *,character *,integer *,integer *,
                           integer *,complex *,complex *,integer *,complex *,
                           integer *,complex *,complex *,integer *,ftnlen,
                           ftnlen),
                     F77(cgemv)(character *,integer *,integer *,complex *,complex *,
                           integer *,complex *,integer *,complex *,complex *,
                           integer *,ftnlen),
                     F77(cgerc)(integer *,integer *,complex *,complex *,integer *,
                           complex *,integer *,complex *,integer *),
                     F77(cgeru)(integer *,integer *,complex *,complex *,integer *,
                           complex *,integer *,complex *,integer *),
                     F77(chbmv)(character *,integer *,integer *,complex *,complex *,
                           integer *,complex *,integer *,complex *,complex *,
                           integer *,ftnlen),
                     F77(chemm)(character *,character *,integer *,integer *,
                           complex *,complex *,integer *,complex *,integer *,
                           complex *,complex *,integer *,ftnlen,ftnlen),
                     F77(chemv)(character *,integer *,complex *,complex *,integer *,
                           complex *,integer *,complex *,complex *,integer *,
                           ftnlen),
                     F77(cher)(character *,integer *,real *,complex *,integer *,
                          complex *,integer *,ftnlen),
                     F77(cher2)(character *,integer *,complex *,complex *,integer *,
                           complex *,integer *,complex *,integer *,ftnlen),
                     F77(cher2k)(character *,character *,integer *,integer *,
                            complex *,complex *,integer *,complex *,integer *,
                            real *,complex *,integer *,ftnlen,ftnlen),
                     F77(cherk)(character *,character *,integer *,integer *,real *,
                           complex *,integer *,real *,complex *,integer *,
                           ftnlen,ftnlen),
                     F77(chpmv)(character *,integer *,complex *,complex *,complex *,
                           integer *,complex *,complex *,integer *,ftnlen),
                     F77(chpr)(character *,integer *,real *,complex *,integer *,
                          complex *,ftnlen),
                     F77(chpr2)(character *,integer *,complex *,complex *,integer *,
                           complex *,integer *,complex *,ftnlen),
                     F77(crotg)(complex *,complex *,real *,complex *),
                     F77(cscal)(integer *,complex *,complex *,integer *),
                     F77(csscal)(integer *,real *,complex *,integer *),
                     F77(cswap)(integer *,complex *,integer *,complex *,integer *),
                     F77(csymm)(character *,character *,integer *,integer *,
                           complex *,complex *,integer *,complex *,integer *,
                           complex *,complex *,integer *,ftnlen,ftnlen),
                     F77(csyr2k)(character *,character *,integer *,integer *,
                            complex *,complex *,integer *,complex *,integer *,
                            complex *,complex *,integer *,ftnlen,ftnlen),
                     F77(csyrk)(character *,character *,integer *,integer *,
                           complex *,complex *,integer *,complex *,complex *,
                           integer *,ftnlen,ftnlen),
                     F77(ctbmv)(character *,character *,character *,integer *,
                           integer *,complex *,integer *,complex *,integer *,
                           ftnlen,ftnlen,ftnlen),
                     F77(ctbsv)(character *,character *,character *,integer *,
                           integer *,complex *,integer *,complex *,integer *,
                           ftnlen,ftnlen,ftnlen),
                     F77(ctpmv)(character *,character *,character *,integer *,
                           complex *,complex *,integer *,ftnlen,ftnlen,ftnlen),
                     F77(ctpsv)(character *,character *,character *,integer *,
                           complex *,complex *,integer *,ftnlen,ftnlen,ftnlen),
                     F77(ctrmm)(character *,character *,character *,character *,
                           integer *,integer *,complex *,complex *,integer *,
                           complex *,integer *,ftnlen,ftnlen,ftnlen,ftnlen),
                     F77(ctrmv)(character *,character *,character *,integer *,
                           complex *,integer *,complex *,integer *,ftnlen,
                           ftnlen,ftnlen),
                     F77(ctrsm)(character *,character *,character *,character *,
                           integer *,integer *,complex *,complex *,integer *,
                           complex *,integer *,ftnlen,ftnlen,ftnlen,ftnlen),
                     F77(ctrsv)(character *,character *,character *,integer *,
                           complex *,integer *,complex *,integer *,ftnlen,
                           ftnlen,ftnlen);

doublereal           F77(dasum)(integer *,doublereal *,integer *);
void                 F77(daxpy)(integer *,doublereal *,doublereal *,integer *,
                           doublereal *,integer *);
doublereal           F77(dcabs1)(doublecomplex *);
void                 F77(dcopy)(integer *,doublereal *,integer *,doublereal *,
                           integer *);
doublereal           F77(ddot)(integer *,doublereal *,integer *,doublereal *,
                          integer *);
void                 F77(dgbmv)(character *,integer *,integer *,integer *,integer *,
                           doublereal *,doublereal *,integer *,doublereal *,
                           integer *,doublereal *,doublereal *,integer *,
                           ftnlen),
                     F77(dgemm)(character *,character *,integer *,integer *,
                           integer *,doublereal *,doublereal *,integer *,
                           doublereal *,integer *,doublereal *,doublereal *,
                           integer *,ftnlen,ftnlen),
                     F77(dgemv)(character *,integer *,integer *,doublereal *,
                           doublereal *,integer *,doublereal *,integer *,
                           doublereal *,doublereal *,integer *,ftnlen),
                     F77(dger)(integer *,integer *,doublereal *,doublereal *,
                          integer *,doublereal *,integer *,doublereal *,
                          integer *);
doublereal           F77(dnrm2)(integer *,doublereal *,integer *);
void                 F77(drot)(integer *,doublereal *,integer *,doublereal *,
                          integer *,doublereal *,doublereal *),
                     F77(drotg)(doublereal *,doublereal *,doublereal *,
                           doublereal *),
                     F77(dsbmv)(character *,integer *,integer *,doublereal *,
                           doublereal *,integer *,doublereal *,integer *,
                           doublereal *,doublereal *,integer *,ftnlen),
                     F77(dscal)(integer *,doublereal *,doublereal *,integer *),
                     F77(dspmv)(character *,integer *,doublereal *,doublereal *,
                           doublereal *,integer *,doublereal *,doublereal *,
                           integer *,ftnlen),
                     F77(dspr)(character *,integer *,doublereal *,doublereal *,
                          integer *,doublereal *,ftnlen),
                     F77(dspr2)(character *,integer *,doublereal *,doublereal *,
                           integer *,doublereal *,integer *,doublereal *,
                           ftnlen),
                     F77(dswap)(integer *n,doublereal *,integer *,doublereal *,
                           integer *),
                     F77(dsymm)(character *,character *,integer *,integer *,
                           doublereal *,doublereal *,integer *,doublereal *,
                           integer *,doublereal *,doublereal *,integer *,
                           ftnlen,ftnlen),
                     F77(dsymv)(character *,integer *,doublereal *,doublereal *,
                           integer *,doublereal *,integer *,doublereal *,
                           doublereal *,integer *,ftnlen),
                     F77(dsyr)(character *,integer *,doublereal *,doublereal *,
                          integer *,doublereal *,integer *,ftnlen),
                     F77(dsyr2)(character *,integer *,doublereal *,doublereal *,
                           integer *,doublereal *,integer *,doublereal *,
                           integer *,ftnlen),
                     F77(dsyr2k)(character *,character *,integer *,integer *,
                            doublereal *,doublereal *,integer *,doublereal *,
                            integer *,doublereal *,doublereal *,integer *,
                            ftnlen,ftnlen),
                     F77(dsyrk)(character *,character *,integer *,integer *,
                           doublereal *,doublereal *,integer *,doublereal *,
                           doublereal *,integer *,ftnlen,ftnlen),
                     F77(dtbmv)(character *,character *,character *,integer *,
                           integer *,doublereal *,integer *,doublereal *,
                           integer *,ftnlen,ftnlen,ftnlen),
                     F77(dtbsv)(character *,character *,character *,integer *,
                           integer *,doublereal *,integer *,doublereal *,
                           integer *,ftnlen,ftnlen,ftnlen),
                     F77(dtpmv)(character *,character *,character *,integer *,
                           doublereal *,doublereal *,integer *,ftnlen,ftnlen,
                           ftnlen),
                     F77(dtpsv)(character *,character *,character *,integer *,
                           doublereal *,doublereal *,integer *,ftnlen,ftnlen,
                           ftnlen),
                     F77(dtrmm)(character *,character *,character *,character *,
                           integer *,integer *,doublereal *,doublereal *,
                           integer *,doublereal *,integer *,ftnlen,ftnlen,
                           ftnlen,ftnlen),
                     F77(dtrmv)(character *,character *,character *,integer *,
                           doublereal *,integer *,doublereal *,integer *,
                           ftnlen,ftnlen,ftnlen),
                     F77(dtrsm)(character *,character *,character *,character *,
                           integer *,integer *,doublereal *,doublereal *,
                           integer *,doublereal *,integer *,ftnlen,ftnlen,
                           ftnlen,ftnlen),
                     F77(dtrsv)(character *,character *,character *,integer *,
                           doublereal *,integer *,doublereal *,integer *,
                           ftnlen,ftnlen,ftnlen);
doublereal           F77(dzasum)(integer *,doublecomplex *,integer *),
                     F77(dznrm2)(integer *, doublecomplex *,integer *);

real                 F77(sasum)(integer *,real *,integer *),
                     F77(scasum)(integer *,complex *,integer *),
                     F77(snrm2)(integer *,real *,integer *),
                     F77(scnrm2)(integer *,complex *,integer *),
                     F77(sdot)(integer *,real *,integer *,real *,integer *);
extern void          F77(sgemm)(character *,character *,integer *,integer *, 
                           integer *,real *,real *,integer *,real *,integer *,
                           real *,real *,integer *,ftnlen,ftnlen),
                     F77(sscal)(integer *,real *,real *,integer *),
                     F77(ssyr)(character *,integer *,real *,real *,integer *,real *,
                          integer *,ftnlen),
                     F77(stpsv)(character *,character *,character *,integer *, 
                           real *,real *,integer *,ftnlen,ftnlen,ftnlen),
                     F77(saxpy)(integer *,real *,real *,integer *,real *,integer *),
                     F77(sgemv)(character *,integer *,integer *,real *,real *,
                           integer *,real *,integer *,real *,real *,integer *,
                           ftnlen),
                     F77(sspmv)(character *,integer *,real *,real *,real *,
                           integer *,real *,real *,integer *,ftnlen),
                     F77(ssyr2)(character *,integer *,real *,real *,integer *,
                           real *,integer *,real *,integer *,ftnlen),
                     F77(strmm)(character *,character *,character *,character *, 
                           integer *,integer *,real *,real *,integer *,real *, 
                           integer *,ftnlen,ftnlen,ftnlen,ftnlen),
                     F77(sger)(integer *,integer *,real *,real *,integer *,real *,
                          integer *,real *,integer *),
                     F77(sspr)(character *,integer *,real *,real *,integer *,real *,
                          ftnlen),
                     F77(ssyr2k)(character *u,character *,integer *,integer *, 
                            real *,real *,integer *,real *,integer *,real *,
                            real *,integer *,ftnlen,ftnlen),
                     F77(strmv)(character *,character *,character *,integer *,
                           real *,integer *,real *,integer *,ftnlen,ftnlen, 
                           ftnlen),
                     F77(sspr2)(character *,integer *,real *,real *,integer *,
                           real *,integer *,real *,ftnlen),
                     F77(ssyrk)(character *,character *,integer *,integer *,real *,
                           real *,integer *,real *,real *,integer *,ftnlen,
                           ftnlen),
                     F77(strsm)(character *,character *,character *,character *, 
                           integer *,integer *,real *,real *,integer *,real *, 
                           integer *,ftnlen,ftnlen,ftnlen,ftnlen),
                     F77(scopy)(integer *,real *,integer *,real *,integer *),
                     F77(srot)(integer *,real *,integer *,real *,integer *,real *,
                          real *),
                     F77(sswap)(integer *,real *,integer *,real *,integer *),
                     F77(stbmv)(character *,character *,character *,integer *n, 
                           integer *,real *,integer *,real *,integer *,ftnlen, 
                           ftnlen,ftnlen),
                     F77(strsv)(character *,character *,character *,integer *, 
                           real *,integer *,real *,integer *,ftnlen,ftnlen, 
                           ftnlen),
                     F77(srotg)(real *,real *,real *,real *),
                     F77(ssymm)(character *,character *,integer *,integer *,real *,
                           real *,integer *,real *,integer *,real *,real *, 
                           integer *,ftnlen,ftnlen),
                     F77(stbsv)(character *,character *,character *,integer *, 
                           integer *,real *,integer *,real *,integer *,ftnlen,
                           ftnlen,ftnlen),
                     F77(sgbmv)(character *,integer *,integer *,integer *,integer *,
                           real *,real *,integer *,real *,integer *,real *, 
                           real *,integer *,ftnlen),
                     F77(ssbmv)(character *,integer *,integer *,real *,real *, 
                           integer *,real *,integer *,real *,real *,integer *,
                           ftnlen),
                     F77(ssymv)(character *,integer *,real *,real *,integer *,
                           real *,integer *,real *,real *,integer *, ftnlen),
                     F77(stpmv)(character *,character *,character *,integer *, 
                           real *,real *,integer *,ftnlen,ftnlen,ftnlen);

doublecomplex        F77(zdotc)(doublecomplex *,integer *,doublecomplex *,integer *,
                           doublecomplex *,integer *),
                     F77(zdotu)(doublecomplex *,integer *,doublecomplex *,integer *,
                           doublecomplex *,integer *);
void                 F77(zaxpy)(integer *,doublecomplex *,doublecomplex *,integer *,
                           doublecomplex *,integer *),
                     F77(zgemv)(character *,integer *,integer *,doublecomplex *,
                           doublecomplex *,integer *,doublecomplex *,integer *,
                           doublecomplex *,doublecomplex *,integer *,ftnlen),
                     F77(zher2)(character *,integer *,doublecomplex *,
                           doublecomplex *,integer *,doublecomplex *,integer *,
                           doublecomplex *,integer *,ftnlen),
                     F77(zscal)(integer *,doublecomplex *,doublecomplex *,
                           integer *),
                     F77(ztpmv)(character *,character *,character *,integer *,
                           doublecomplex *,doublecomplex *,integer *,ftnlen,
                           ftnlen,ftnlen),
                     F77(zcopy)(integer *,doublecomplex *,integer *,doublecomplex *,
                           integer *),
                     F77(zgerc)(integer *,integer *,doublecomplex *,doublecomplex *,
                           integer *,doublecomplex *,integer *,doublecomplex *,
                           integer *),
                     F77(zher2k)(character *,character *,integer *,integer *, 
                            doublecomplex *,doublecomplex *,integer *, 
                            doublecomplex *,integer *,doublereal *, 
                            doublecomplex *,integer *,ftnlen,ftnlen),
                     F77(zswap)(integer *,doublecomplex *,integer *,doublecomplex *,
                           integer *),
                     F77(ztpsv)(character *,character *,character *,integer *, 
                           doublecomplex *,doublecomplex *,integer *,ftnlen, 
                           ftnlen,ftnlen),
                     F77(zgeru)(integer *,integer *,doublecomplex *,doublecomplex *,
                           integer *,doublecomplex *,integer *,doublecomplex *,
                           integer *),
                     F77(zherk)(character *,character *,integer *,integer *, 
                           doublereal *,doublecomplex *,integer *,doublereal *,
                           doublecomplex *,integer *,ftnlen,ftnlen),
                     F77(zsymm)(character *,character *,integer *,integer *, 
                           doublecomplex *,doublecomplex *,integer *, 
                           doublecomplex *,integer *,doublecomplex *, 
                           doublecomplex *,integer *,ftnlen,ftnlen),
                     F77(ztrmm)(character *,character *,character *,character *, 
                           integer *,integer *,doublecomplex *,doublecomplex *,
                           integer *,doublecomplex *,integer *,ftnlen,ftnlen,
                           ftnlen,ftnlen),
                     F77(zhbmv)(character *,integer *,integer *,doublecomplex *, 
                           doublecomplex *,integer *,doublecomplex *,integer *,
                           doublecomplex *,doublecomplex *,integer *,ftnlen),
                     F77(zhpmv)(character *,integer *,doublecomplex *, 
                           doublecomplex *,doublecomplex *,integer *, 
                           doublecomplex *,doublecomplex *,integer *,ftnlen),
                     F77(zsyr2k)(character *,character *,integer *,integer *, 
                            doublecomplex *,doublecomplex *,integer *,
                            doublecomplex *,integer *,doublecomplex *, 
                            doublecomplex *,integer *,ftnlen,ftnlen),
                     F77(ztrmv)(character *,character *,character *,integer *, 
                           doublecomplex *,integer *,doublecomplex *,integer *,
                           ftnlen,ftnlen,ftnlen),
                     F77(zdscal)(integer *,doublecomplex *,doublecomplex *,
                            integer *),
                     F77(zhemm)(character *,character *,integer *,integer *, 
                           doublecomplex *,doublecomplex *,integer *, 
                           doublecomplex *,integer *,doublecomplex *, 
                           doublecomplex *,integer *,ftnlen,ftnlen),
                     F77(zhpr)(character *,integer *,doublereal *,doublecomplex *,
                          integer *,doublecomplex *,ftnlen),
                     F77(zsyrk)(character *,character *,integer *,integer *, 
                           doublecomplex *,doublecomplex *,integer *,
                           doublecomplex *,doublecomplex *,integer *,ftnlen,
                           ftnlen),
                     F77(ztrsm)(character *,character *,character *,character *, 
                           integer *,integer *,doublecomplex *,doublecomplex *,
                           integer *,doublecomplex *,integer *,ftnlen,ftnlen,
                           ftnlen,ftnlen),
                     F77(zgbmv)(character *,integer *,integer *,integer *,integer *,
                           doublecomplex *,doublecomplex *,integer *, 
                           doublecomplex *,integer *,doublecomplex *, 
                           doublecomplex *,integer *,ftnlen),
                     F77(zhemv)(character *,integer *,doublecomplex *, 
                           doublecomplex *,integer *,doublecomplex *,integer *,
                           doublecomplex *,doublecomplex *,integer *,ftnlen),
                     F77(zhpr2)(character *,integer *,doublecomplex *, 
                           doublecomplex *,integer *,doublecomplex *,integer *,
                           doublecomplex *,ftnlen),
                     F77(ztbmv)(character *,character *,character *,integer *, 
                           integer *,doublecomplex *,integer *,doublecomplex *,
                           integer *,ftnlen,ftnlen,ftnlen),
                     F77(ztrsv)(character *,character *,character *,integer *, 
                           doublecomplex *,integer *,doublecomplex *,integer *,
                           ftnlen,ftnlen,ftnlen),
                     F77(zgemm)(character *,character *,integer *,integer *,
                           integer *,doublecomplex *,doublecomplex *,integer *,
                           doublecomplex *,integer *,doublecomplex *,
                           doublecomplex *,integer *,ftnlen,ftnlen),
                     F77(zher)(character *,integer *,doublereal *,doublecomplex *,
                          integer *,doublecomplex *,integer *,ftnlen),
                     F77(zrotg)(doublecomplex *,doublecomplex *,doublereal *,
                           doublecomplex *),
                     F77(ztbsv)(character *,character *,character *,integer *, 
                           integer *,doublecomplex *,integer *,doublecomplex *,
                           integer *,ftnlen,ftnlen,ftnlen);

integer              F77(icamax)(integer *,complex *,integer *),
                     F77(idamax)(integer *,doublereal *,integer *),
                     F77(isamax)(integer *,real *,integer *),
                     F77(izamax)(integer *,doublecomplex *,integer *),
                     F77(lsame)(character *,character *,ftnlen,ftnlen);
void                 F77(xerbla)(character *,integer *,ftnlen);
 
#undef integer   
#undef real      
#undef doublereal
#undef character 
#undef logical   
#undef ftnlen    

#endif /* _BLAS_H */
