#include <libint2.h>
#include <GenericGaussDeriv.h>

#ifdef __cplusplus
extern "C" {
#endif
void CR_DerivGaussP0InBra_aB_s001__0___ElecPot_m__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

using namespace libint2;
libint2::GenericGaussDeriv<0,false>::compute(inteval,target,src0,0,1,55,2,inteval->two_alpha0_bra);
}

#ifdef __cplusplus
};
#endif
