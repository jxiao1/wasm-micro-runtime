/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WAMR_GRAPHIC_LIBRARY_TYPES_H
#define WAMR_GRAPHIC_LIBRARY_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/**
 * WGL error codes.
 */
enum {
    WGL_RES_INV = 0, /*Typically indicates that the object is deleted (become invalid) in the action
                       function or an operation was failed*/
    WGL_RES_OK,      /*The object is valid (no deleted) after the action*/
};
typedef uint8_t wgl_res_t;

#ifdef __cplusplus
}
#endif

#endif /* WAMR_GRAPHIC_LIBRARY_TYPES_H */
