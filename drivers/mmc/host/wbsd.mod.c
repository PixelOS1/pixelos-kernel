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
	{ 0x73fec674, "param_ops_uint" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa295f2cc, "pnp_unregister_driver" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xeaa7e4ea, "pnp_register_driver" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc23477d, "current_task" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0x3b26e6a5, "pnp_get_resource" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x85bd1608, "__request_region" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x72b243d4, "free_dma" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x387dfe48, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("pnp:dWEC0517*");
MODULE_ALIAS("acpi*:WEC0517:*");
MODULE_ALIAS("pnp:dWEC0518*");
MODULE_ALIAS("acpi*:WEC0518:*");

MODULE_INFO(srcversion, "7B99808FFEA74C9B4DEE81D");
