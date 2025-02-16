#ifndef DOVEADM_DUMP_H
#define DOVEADM_DUMP_H

#include "doveadm.h"

struct doveadm_cmd_dump {
	const char *name;
	bool (*test)(const char *path);
	void (*cmd)(const char *path, const char *const *args);
};

extern struct doveadm_cmd_dump doveadm_cmd_dump_dbox;
extern struct doveadm_cmd_dump doveadm_cmd_dump_index;
extern struct doveadm_cmd_dump doveadm_cmd_dump_log;
extern struct doveadm_cmd_dump doveadm_cmd_dump_mailboxlog;
extern struct doveadm_cmd_dump doveadm_cmd_dump_thread;
extern struct doveadm_cmd_dump doveadm_cmd_dump_imap_compress;
extern struct doveadm_cmd_dump doveadm_cmd_dump_dcrypt_file;
extern struct doveadm_cmd_dump doveadm_cmd_dump_dcrypt_key;

void doveadm_dump_register(const struct doveadm_cmd_dump *dump);

void print_dump_types(void);
void doveadm_dump_init(void);
void doveadm_dump_deinit(void);

#endif
