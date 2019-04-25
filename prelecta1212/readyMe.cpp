//
//  readyMe.cpp
//  prelecta1212
//
//  Created by tihmstar on 25.04.19.
//  Copyright © 2019 tihmstar. All rights reserved.
//

#include "readyMe.h"
#include "offsets.h"
#include <liboffsetfinder64/liboffsetfinder64.hpp>
extern "C" {
#include "exploit.h"
};

extern "C" int readyMe(void){
    int err = 0;
//    tihmstar::offsetfinder64 fi("/System/Library/Caches/com.apple.kernelcaches/kernelcache");
    t_offsets *offs = get_offsets(NULL);
    
    task_t tfp0 = 0;
    
    err = v3ntex(offs, &tfp0);
    
error:
    return err;
}
