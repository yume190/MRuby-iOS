//
//  Public.h
//
//
//  Created by Yume on 2021/1/18.
//

#ifndef Public_h
#define Public_h

#include <stddef.h>
#include <stdbool.h>

typedef unsigned char uint8_t;
struct YumeOutput {
    int result;
    uint8_t *data;
    size_t size;
    void *mrb;
    void (* free)(void *mrb, uint8_t *data);
};

struct YumeOutput
cmruby_compile(const char *code, bool remove_lv);
#endif /* Public_h */
