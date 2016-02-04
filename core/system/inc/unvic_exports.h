/*
 * Copyright (c) 2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __UNVIC_EXPORTS_H__
#define __UNVIC_EXPORTS_H__

/* this value refers to the minimum allowable priority in the physical NVIC
 * module, but not in the virtualised one (vIRQ) */
#define __UVISOR_NVIC_MIN_PRIORITY ((uint32_t) 1)

/* this is the maximum priority allowed for the vIRQ module */
/* users of uVisor APIs can use this to determine the maximum level of
 * priorities available to them */
#define UVISOR_VIRQ_MAX_PRIORITY ((uint32_t) (1 << __NVIC_PRIO_BITS) - 1 - __UVISOR_NVIC_MIN_PRIORITY)

#endif/*__UNVIC_EXPORTS_H__*/