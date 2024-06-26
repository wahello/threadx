/***************************************************************************
 * Copyright (c) 2024 Microsoft Corporation 
 * 
 * This program and the accompanying materials are made available under the
 * terms of the MIT License which is available at
 * https://opensource.org/licenses/MIT.
 * 
 * SPDX-License-Identifier: MIT
 **************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */
/** ThreadX Component                                                     */
/**                                                                       */
/**   Module Manager                                                      */
/**                                                                       */
/**************************************************************************/
/**************************************************************************/

#define TX_SOURCE_CODE

#include "tx_api.h"
#include "txm_module.h"


/**************************************************************************/
/*                                                                        */
/*  FUNCTION                                               RELEASE        */
/*                                                                        */
/*    _txm_module_manager_alignment_adjust                 RXv2/IAR       */
/*                                                           6.1.9        */
/*  AUTHOR                                                                */
/*                                                                        */
/*    Scott Larson, Microsoft Corporation                                 */
/*                                                                        */
/*  DESCRIPTION                                                           */
/*                                                                        */
/*    This function adjusts the alignment and size of the code and data   */
/*    section for a given module implementation.                          */
/*                                                                        */
/*  INPUT                                                                 */
/*                                                                        */
/*    module_preamble                   Pointer to module preamble        */
/*    code_size                         Size of the code area (updated)   */
/*    code_alignment                    Code area alignment (updated)     */
/*    data_size                         Size of data area (updated)       */
/*    data_alignment                    Data area alignment (updated)     */
/*                                                                        */
/*  OUTPUT                                                                */
/*                                                                        */
/*    None                                                                */
/*                                                                        */
/*  CALLS                                                                 */
/*                                                                        */
/*    None                                                                */
/*                                                                        */
/*  CALLED BY                                                             */
/*                                                                        */
/*    Initial thread stack frame                                          */
/*                                                                        */
/*  RELEASE HISTORY                                                       */
/*                                                                        */
/*    DATE              NAME                      DESCRIPTION             */
/*                                                                        */
/*  10-15-2021      Scott Larson            Initial Version 6.1.9         */
/*                                                                        */
/**************************************************************************/
VOID  _txm_module_manager_alignment_adjust(TXM_MODULE_PREAMBLE *module_preamble,
                                           ULONG *code_size,
                                           ULONG *code_alignment,
                                           ULONG *data_size,
                                           ULONG *data_alignment)
{


}
