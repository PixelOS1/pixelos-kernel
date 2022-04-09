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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf30c39b4, "memstick_remove_host" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4ac44daa, "memstick_next_req" },
	{ 0x33124284, "dma_unmap_sg_attrs" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa2edd8e6, "dma_map_sg_attrs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x5012a70, "pv_ops" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0x2650441a, "memstick_detect_change" },
	{ 0x9b9a640d, "memstick_resume_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xd74f363, "memstick_free_host" },
	{ 0xedc03953, "iounmap" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xde80cd09, "ioremap" },
	{ 0xd3faa88a, "memstick_alloc_host" },
	{ 0x99d97b98, "memstick_add_host" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x232b032c, "device_wakeup_disable" },
	{ 0x508199ea, "memstick_suspend_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "memstick");

MODULE_ALIAS("pci:v0000197Bd00002383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002393sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E540EF6AAEB726C01F955CA");
