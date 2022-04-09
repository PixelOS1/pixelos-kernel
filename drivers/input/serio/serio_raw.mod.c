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
	{ 0x45a41106, "noop_llseek" },
	{ 0xfbfb0f09, "serio_unregister_driver" },
	{ 0x789f1c2d, "__serio_register_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x53a2aa95, "serio_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x761527a1, "put_device" },
	{ 0xa164df89, "misc_register" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0xcbd8b7e8, "serio_open" },
	{ 0x16e6d67f, "get_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x7dd49bd0, "fasync_helper" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x76abb595, "kill_fasync" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "2848635162A92E0C1D3F3BA");
