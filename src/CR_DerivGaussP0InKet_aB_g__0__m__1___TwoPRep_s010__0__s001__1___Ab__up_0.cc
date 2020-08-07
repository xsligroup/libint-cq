#include <libint2.h>
#include <GenericGaussDeriv.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_DerivGaussP0InKet_aB_g__0__m__1___TwoPRep_s010__0__s001__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

using namespace libint2;
libint2::GenericGaussDeriv<0,false>::compute(inteval,target,src0,0,15,55,1,inteval->two_alpha0_ket);
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
