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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x884584bc, "scsi_remove_host" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbe277c8f, "scsi_dma_map" },
	{ 0x41e0ed3d, "scsi_done" },
	{ 0x87b8798d, "sg_next" },
	{ 0x697ed5f0, "memcpy_and_pad" },
	{ 0x92997ed8, "_printk" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xde80cd09, "ioremap" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x69acdf38, "memcpy" },
	{ 0x808e24ea, "scsi_dma_unmap" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xedc03953, "iounmap" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc23477d, "current_task" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc08ec5a9, "scsi_host_put" },
	{ 0xff2c858a, "scsi_scan_host" },
	{ 0x1079e933, "scsi_add_host_with_dma" },
	{ 0x37a0cba, "kfree" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8e1a7e66, "scsi_host_alloc" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0xc4ae915e, "arch_touch_nmi_watchdog" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xfb578fc5, "memset" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xf2cb9e35, "scsi_change_queue_depth" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x5012a70, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001014d0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000001BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000250sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3FBFC1E254E87FD160BB427");
