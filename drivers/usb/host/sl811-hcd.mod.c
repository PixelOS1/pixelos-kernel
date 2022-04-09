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
	{ 0xe946be45, "usb_root_hub_lost_power" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9f92b38, "usb_add_hcd" },
	{ 0xe4345174, "single_open" },
	{ 0x59fbec7, "usb_remove_hcd" },
	{ 0x6e936613, "usb_debug_root" },
	{ 0x9b02585d, "single_release" },
	{ 0x864893cc, "usb_create_hcd" },
	{ 0xd349d253, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x79ac8677, "usb_hcd_giveback_urb" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x94216657, "seq_read" },
	{ 0x5012a70, "pv_ops" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86dc169d, "usb_put_hcd" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x11050caf, "usb_hcd_link_urb_to_ep" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdbc46ebb, "platform_get_mem_or_io" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdec4b7b5, "debugfs_lookup" },
	{ 0xa5a7894f, "usb_hcd_check_unlink_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x10562d8e, "usb_hcd_unlink_urb_from_ep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "258C87328F273DC9FED241E");
