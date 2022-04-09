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
	{ 0xfdfa8f3d, "tifm_unregister_driver" },
	{ 0xe1e62989, "tifm_register_driver" },
	{ 0x6372efe4, "tifm_map_sg" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5012a70, "pv_ops" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc23477d, "current_task" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x6e7d67ae, "mmc_remove_host" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb1031dd6, "mmc_request_done" },
	{ 0xce5428bf, "tifm_unmap_sg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9087ca5c, "tifm_eject" },
	{ 0x67aeabe5, "mmc_add_host" },
	{ 0x952dcf27, "mmc_free_host" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xd31491e9, "mmc_alloc_host" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core,mmc_core");


MODULE_INFO(srcversion, "FC2F26A73F43D0E9F04988E");
