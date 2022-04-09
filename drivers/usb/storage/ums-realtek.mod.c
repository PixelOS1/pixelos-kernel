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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe2d6366d, "usb_stor_bulk_transfer_buf" },
	{ 0xe1e35260, "usb_stor_post_reset" },
	{ 0xc19cfc47, "usb_stor_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x19b483b9, "usb_enable_autosuspend" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3fafbee2, "usb_stor_disconnect" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x21d2cac8, "usb_autopm_put_interface_async" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2f216816, "usb_stor_probe2" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa44c0030, "usb_stor_host_template_init" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0xfd80f3ab, "usb_stor_pre_reset" },
	{ 0x95153399, "usb_stor_reset_resume" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x57db88ae, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "06000384CFD7EF91B904245");
