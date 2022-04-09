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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf070a6b1, "dsa_switch_resume" },
	{ 0x93accc2b, "dsa_switch_shutdown" },
	{ 0x68a51f49, "flow_rule_match_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x437d8bd0, "flow_rule_match_ipv6_addrs" },
	{ 0x6b8e9cd6, "flow_rule_match_ports" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9dca454d, "dsa_unregister_switch" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf8c062e, "ethtool_rx_flow_rule_create" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2567de26, "b53_switch_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb76f9c7a, "flow_rule_match_ipv4_addrs" },
	{ 0xce9bba07, "dsa_switch_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x816cdf9d, "ethtool_rx_flow_rule_destroy" },
};

MODULE_INFO(depends, "dsa_core,libphy,b53_common");

MODULE_ALIAS("of:N*T*Cbrcm,bcm4908-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4908-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8C*");

MODULE_INFO(srcversion, "59C4485F55B47FF818F8D4D");
