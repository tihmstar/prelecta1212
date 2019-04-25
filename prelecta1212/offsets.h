//
//  offsets.h
//  v3ntex
//
//  Created by tihmstar on 23.01.19.
//  Copyright © 2019 tihmstar. All rights reserved.
//

#ifndef offsets_h
#define offsets_h


#include <stdint.h>
typedef uint64_t kptr_t;
typedef struct{
    kptr_t offset_iosurface_create_outsize;
    kptr_t offset_ipc_space_is_task;
    kptr_t offset_task_bsd_info;
    kptr_t offset_bsdinfo_pid;
    kptr_t offset_bsdinfo_task;
    kptr_t offset_task_itk_registered;
    kptr_t offset_vtab_get_external_trap_for_index;
    kptr_t offset_task_itk_self;
    kptr_t offset_iouserclient_ipc;
    kptr_t offset_task_vm_map;
    kptr_t offset_kernel_base;
}t_offsets;

#ifdef __cplusplus
extern "C"
#endif
t_offsets* get_offsets(void*);


#endif /* offsets_h */
