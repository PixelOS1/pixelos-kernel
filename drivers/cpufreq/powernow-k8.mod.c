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
	{ 0xa6b02351, "cpufreq_generic_attr" },
	{ 0xbc2031de, "acpi_processor_get_bios_limit" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0x538d38d, "cpufreq_unregister_driver" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9493fc86, "node_states" },
	{ 0x5a921311, "strncmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x3f8443a1, "cpufreq_register_driver" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xbc19b3f6, "acpi_processor_notify_smm" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xa9785b49, "cpu_core_map" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe787698f, "acpi_processor_register_performance" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcbb9a647, "cpufreq_freq_transition_end" },
	{ 0xf1475a20, "cpufreq_freq_transition_begin" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4c07a7e0, "acpi_processor_unregister_performance" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x37a0cba, "kfree" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x92997ed8, "_printk" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5012a70, "pv_ops" },
	{ 0xf82f3657, "work_on_cpu" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");

MODULE_INFO(srcversion, "DF7DF298349D5DC8A6CF6E0");
