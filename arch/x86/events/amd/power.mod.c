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
	{ 0x8a243ab8, "events_sysfs_show" },
	{ 0x6f105db5, "perf_pmu_unregister" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4a4cc052, "perf_pmu_register" },
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0x92997ed8, "_printk" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xb25b2846, "perf_pmu_migrate_context" },
	{ 0x68c4b824, "cpumask_any_but" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5012a70, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF71AF5F11A4F39C90EE120");
