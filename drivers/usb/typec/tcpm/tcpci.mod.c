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
	{ 0xd4f58ba1, "regmap_raw_write" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0xea220941, "tcpm_tcpc_reset" },
	{ 0x1598fb9d, "device_get_named_child_node" },
	{ 0xf7175300, "regmap_read" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe5cf4641, "tcpm_register_port" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0xd63347d5, "regmap_raw_read" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
};

MODULE_INFO(depends, "i2c-core,tcpm,regmap-i2c");

MODULE_ALIAS("i2c:tcpci");

MODULE_INFO(srcversion, "2AC4312831DFB8261CE71BA");
