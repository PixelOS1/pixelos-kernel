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
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("usb:v0A12p5D10d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DA36753D3BC37A8421C3DC1");
