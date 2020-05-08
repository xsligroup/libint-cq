#include <libint2.h>
#include <GenericGaussDeriv.h>

#ifdef __cplusplus
extern "C" {
#endif
void CR_DerivGaussP0InBra_aB_pf001__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

using namespace libint2;
libint2::GenericGaussDeriv<13,false>::compute(inteval,target,src0,src1,1,1,2,inteval->two_alpha0_bra);
}

#ifdef __cplusplus
};
#endif
