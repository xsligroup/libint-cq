#include <libint2.h>
#include <GenericGaussDeriv.h>

#ifdef __cplusplus
extern "C" {
#endif
void CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

using namespace libint2;
libint2::GenericGaussDeriv<7,false>::compute(inteval,target,src0,src1,1,1,1,inteval->two_alpha0_ket);
}

#ifdef __cplusplus
};
#endif
