//
//  offsets.c
//  v3ntex
//
//  Created by tihmstar on 23.01.19.
//  Copyright © 2019 tihmstar. All rights reserved.
//

#include "offsets.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define dprintf printf
#define dstrcmp strcmp

#define IOSURFACE_CREATE_OUTSIZE    0xdd0
#define OFFSET_IPC_SPACE_IS_TASK 0x28
#define OFFSET_TASK_BSD_INFO 0x358
#define BSDINFO_PID_OFFSET  0x60
#define BSDINFO_TASK_OFFSET 0x10
#define OFFSET_TASK_ITK_REGISTERED 0x2e8
#define OFFSET_VTAB_GET_EXTERNAL_TRAP_FOR_INDEX 183
#define OFFSET_TASK_ITK_SELF        0xd8
#define OFFSET_IOUSERCLIENT_IPC     0x9c
#define OFFSET_TASK_VM_MAP 0x20
#define OFFSET_KERNELBASE   0xfffffff007004000

static t_offsets offs;
static bool didInit = false;

extern "C" t_offsets* get_offsets(void *fi_){
    if (!didInit){
        offs.offset_iosurface_create_outsize = IOSURFACE_CREATE_OUTSIZE;
        offs.offset_ipc_space_is_task = OFFSET_IPC_SPACE_IS_TASK;
        offs.offset_task_bsd_info = OFFSET_TASK_BSD_INFO;
        offs.offset_bsdinfo_pid = BSDINFO_PID_OFFSET;
        offs.offset_bsdinfo_task = BSDINFO_TASK_OFFSET;
        offs.offset_task_itk_registered = OFFSET_TASK_ITK_REGISTERED;
        offs.offset_vtab_get_external_trap_for_index = OFFSET_VTAB_GET_EXTERNAL_TRAP_FOR_INDEX;
        offs.offset_task_itk_self = OFFSET_TASK_ITK_SELF;
        offs.offset_iouserclient_ipc = OFFSET_IOUSERCLIENT_IPC;
        offs.offset_task_vm_map = OFFSET_TASK_VM_MAP;
        offs.offset_kernel_base = OFFSET_KERNELBASE;


        didInit = true;
    }
    return &offs;
}
