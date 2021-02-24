//#include <mruby/mruby.h>

#ifdef MRB_NO_STDIO
# error mruby-bin-mrbc conflicts 'MRB_NO_STDIO' in your build configuration
#endif

#include <stdlib.h>
#include <string.h>
#include <mruby/compile.h>
#include <mruby/dump.h>
#include <mruby/proc.h>

#include <public.h>

void cmruby_free(void* mrb, uint8_t *data);

struct YumeOutput
cmruby_compile(const char *code, bool remove_lv)
{
    mrb_state *mrb = mrb_open();
    int n, result;
    
    FILE *wfp;
    
    mrbc_context *c = mrbc_context_new(mrb);
    c->no_exec = TRUE;
    mrb_value load = mrb_load_string_cxt(mrb, code, c);
    if (mrb_nil_p(load)) {
        printf("nil load");
    }
    
    uint8_t *bin = NULL;
    size_t bin_size = 0;
    struct RProc *proc = mrb_proc_ptr(load);
    const mrb_irep *irep = proc->body.irep;
    uint8_t flags = 0;
    
    if (remove_lv) {
        mrb_irep_remove_lv(mrb, irep);
    }
    result = mrb_dump_irep(mrb, irep, flags, &bin, &bin_size);
//    if (result == MRB_DUMP_OK) {
//    }
    
    struct YumeOutput output = {
        .data = bin,
        .size = bin_size,
        .mrb = mrb,
        .free = cmruby_free
    };
    return output;
}

void cmruby_free(void* mrb, uint8_t *data) {
    mrb_free(mrb, data);
    mrb_close(mrb);
}

void
mrb_init_mrblib(mrb_state *mrb)
{
}

#ifndef MRB_NO_GEMS
void
mrb_init_mrbgems(mrb_state *mrb)
{
}

void
mrb_final_mrbgems(mrb_state *mrb)
{
}
#endif

