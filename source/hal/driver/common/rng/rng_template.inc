/*****************************************************************************
 *   Copyright(C)2009-2022 by VSF Team                                       *
 *                                                                           *
 *  Licensed under the Apache License, Version 2.0 (the "License");          *
 *  you may not use this file except in compliance with the License.         *
 *  You may obtain a copy of the License at                                  *
 *                                                                           *
 *     http://www.apache.org/licenses/LICENSE-2.0                            *
 *                                                                           *
 *  Unless required by applicable law or agreed to in writing, software      *
 *  distributed under the License is distributed on an "AS IS" BASIS,        *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 *  See the License for the specific language governing permissions and      *
 *  limitations under the License.                                           *
 *                                                                           *
 ****************************************************************************/

#if VSF_HAL_USE_RNG == ENABLED

/*============================ INCLUDES ======================================*/
/*============================ MACROS ========================================*/

#define vsf_real_rng_t          VSF_MCONNECT(VSF_RNG_CFG_IMP_PREFIX, _rng_t)
#define vsf_real_rng_capability VSF_MCONNECT(VSF_RNG_CFG_IMP_PREFIX, _rng_capability)

/*============================ MACROFIED FUNCTIONS ===========================*/
/*============================ TYPES =========================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ LOCAL VARIABLES ===============================*/
/*============================ PROTOTYPES ====================================*/
/*============================ IMPLEMENTATION ================================*/

#if VSF_RNG_CFG_REIMPLEMENT_API_CAPABILITY == DISABLED
vsf_rng_capability_t vsf_real_rng_capability(vsf_real_rng_t *rng_ptr)
{
    vsf_rng_capability_t rng_capability = {
        0,
    };

    return rng_capability;
}
#endif

/*============================ GLOBAL VARIABLES ==============================*/

#define __VSF_HAL_TEMPLATE_NAME                     _rng
#define __VSF_HAL_TEMPLATE_UPCASE_NAME              _RNG

#ifndef VSF_RNG_CFG_IMP_PREFIX
#   error "Please define VSF_RNG_CFG_IMP_PREFIX in rng driver"
#endif

#ifndef VSF_RNG_CFG_IMP_UPCASE_PREFIX   
#   error "Please define VSF_RNG_CFG_IMP_UPCASE_PREFIX    in rng driver"
#endif

#include "hal/driver/common/template/vsf_template_implementation.h"

#endif  /* VSF_HAL_USE_RNG */
