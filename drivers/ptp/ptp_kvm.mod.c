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
	{ 0x30cf804f, "slow_virt_to_phys" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x12db3a8b, "kvm_clock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0x8677f369, "pvclock_get_pvti_cpu0_va" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x4c49f1de, "hv_clock_per_cpu" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe9ce931a, "kvm_para_available" },
	{ 0xe4c074a1, "get_device_system_crosststamp" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "13114FB0194D7CBA3E02FC8");
