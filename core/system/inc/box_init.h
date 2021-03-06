/*
 * Copyright (c) 2013-2016, ARM Limited, All Rights Reserved
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
#ifndef __BOX_INIT_H__
#define __BOX_INIT_H__

#include <stdint.h>

void boxes_init(void);

/** Start the recursion for the box initialization routine.
 * @warning This function trusts the SVCall parameters that are passed to it.
 * @param src_svc_sp[in]    Unprivileged stack pointer at the time of the SVCall
 */
void UVISOR_NAKED box_init_first(uint32_t src_svc_sp);

/** Initialize the next box that requires it by running the default box
 *  initialization handler.
 * @warning This function trusts the SVCall parameters that are passed to it.
 * @param src_svc_sp[in]    Unprivileged stack pointer at the time of the SVCall
 */
void UVISOR_NAKED box_init_next(uint32_t src_svc_sp);

#endif /* __BOX_INIT_H__ */
