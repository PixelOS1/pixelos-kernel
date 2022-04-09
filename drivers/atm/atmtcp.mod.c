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
	{ 0xa6b25eeb, "deregister_atm_ioctl" },
	{ 0x35cac49d, "register_atm_ioctl" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x761527a1, "put_device" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xc64dc7ae, "atm_init_aal5" },
	{ 0x80d0181, "vcc_insert_socket" },
	{ 0x6ad4704a, "atm_dev_lookup" },
	{ 0x61faf07c, "atm_dev_register" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0x92997ed8, "_printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcb4101ed, "atm_alloc_charge" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc23477d, "current_task" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdfbcf889, "module_put" },
	{ 0xd1e29523, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "CC9AAB4E2C87C45379816DB");
