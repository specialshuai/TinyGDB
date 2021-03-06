#ifndef DEBUGGER_H
#define DEBUGGER_H

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

typedef
struct _breakpoint {

} breakpoint_t;

typedef
struct _debugger_status {
    int is_init_bfd;
    const char *target_elf;
    const char *target_source_file;
    int source_file_lineno;
    breakpoint_t *breakpoint;
    int is_running;
} debugger_status_t;

extern debugger_status_t debugger_status;

#endif // DEBUGGER_H
