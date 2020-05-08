#include <libint2.h>
#include <GenericGaussDeriv.h>

#ifdef __cplusplus
extern "C" {
#endif
void CR_DerivGaussP1InKet_aB_pg__0__pd__1___TwoPRep_s__0__s010__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

using namespace libint2;
libint2::GenericGaussDeriv<0,false>::compute(inteval,target,src0,0,10920,1,1,inteval->two_alpha1_ket);
}

#ifdef __cplusplus
};
#endif
