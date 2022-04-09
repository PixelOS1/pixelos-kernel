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
	{ 0xee111615, "param_ops_int" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x8a7cb9c4, "platform_thermal_package_rate_control" },
	{ 0x90de0452, "platform_thermal_package_notify" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7e9c3c56, "thermal_zone_device_enable" },
	{ 0xff241572, "thermal_zone_device_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x54eb34a1, "thermal_zone_device_update" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5012a70, "pv_ops" },
	{ 0xb46f8f6b, "thermal_zone_device_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x68c4b824, "cpumask_any_but" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6e841389, "cpu_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C6*");

MODULE_INFO(srcversion, "C285865309EF351CDDBFDAF");
