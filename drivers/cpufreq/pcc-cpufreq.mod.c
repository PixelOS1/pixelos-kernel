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
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x538d38d, "cpufreq_unregister_driver" },
	{ 0x3f8443a1, "cpufreq_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x92997ed8, "_printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb19b445, "ioread8" },
	{ 0xde80cd09, "ioremap" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0xcbb9a647, "cpufreq_freq_transition_end" },
	{ 0xf1475a20, "cpufreq_freq_transition_begin" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbe973ab9, "processors" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x7bb50b88, "acpi_write" },
	{ 0x67c13ea0, "acpi_read" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");

MODULE_INFO(srcversion, "6D59A245630EE1340A4B72A");
