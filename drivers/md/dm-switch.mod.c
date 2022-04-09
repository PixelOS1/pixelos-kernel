#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x664ef11f, "dm_unregister_target" },
	{ 0x42f01a2e, "dm_register_target" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x224a96de, "dm_get_device" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x9154ba67, "dm_table_get_mode" },
	{ 0x93aa41c5, "dm_set_target_max_io_len" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x92997ed8, "_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0xc76edc06, "dm_put_device" },
	{ 0x5d2b0351, "bio_associate_blkg" },
	{ 0x96848186, "scnprintf" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "F3554D67929AEAF52C489FF");
