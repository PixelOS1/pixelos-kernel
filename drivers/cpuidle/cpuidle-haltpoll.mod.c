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
	{ 0x6feabb13, "__cpuhp_setup_state" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x57b318d8, "cpuidle_register_driver" },
	{ 0x8f2eb429, "kvm_arch_para_hints" },
	{ 0xe9ce931a, "kvm_para_available" },
	{ 0x4f8546af, "cpuidle_poll_state_init" },
	{ 0xef9aedfc, "boot_option_idle_override" },
	{ 0x5012a70, "pv_ops" },
	{ 0x92897e3d, "default_idle" },
	{ 0xc23477d, "current_task" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x34bf0b8e, "cpuidle_unregister_driver" },
	{ 0xc0013398, "__cpuhp_remove_state" },
	{ 0x92997ed8, "_printk" },
	{ 0xff8e74e2, "arch_haltpoll_enable" },
	{ 0xaf852873, "cpuidle_register_device" },
	{ 0x13fab921, "cpuidle_unregister_device" },
	{ 0x9424058f, "arch_haltpoll_disable" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BECEC73463D8CC366D77F0E");
