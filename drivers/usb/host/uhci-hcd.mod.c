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
	{ 0x78c2054, "param_ops_bool" },
	{ 0xee111615, "param_ops_int" },
	{ 0x8acb43bf, "usb_hcd_pci_pm_ops" },
	{ 0x9f9bf075, "usb_hcd_pci_remove" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x2295b0d6, "kmem_cache_destroy" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x6f3cb84f, "kmem_cache_create" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x6e936613, "usb_debug_root" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x11050caf, "usb_hcd_link_urb_to_ep" },
	{ 0x87b8798d, "sg_next" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x3ec726dd, "dma_pool_create" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe336b9a1, "usb_hc_died" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xdec4b7b5, "debugfs_lookup" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3d202ddf, "usb_hcd_resume_root_hub" },
	{ 0x349cba85, "strchr" },
	{ 0x92997ed8, "_printk" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x79ac8677, "usb_hcd_giveback_urb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x10562d8e, "usb_hcd_unlink_urb_from_ep" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe946be45, "usb_root_hub_lost_power" },
	{ 0xcb93442, "usb_hcd_poll_rh_status" },
	{ 0xa5a7894f, "usb_hcd_check_unlink_urb" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x49e014dd, "usb_hcd_start_port_resume" },
	{ 0x88ff3b98, "usb_hcd_end_port_resume" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xa38e1f78, "uhci_reset_hc" },
	{ 0x49252678, "uhci_check_and_reset_hc" },
	{ 0x802a8d35, "no_seek_end_llseek_size" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc72eece2, "usb_hcd_pci_probe" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i00*");

MODULE_INFO(srcversion, "D4F1F0328D50651BAA0CD1E");
