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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x929166d1, "cec_transmit_attempt_done_ts" },
	{ 0xf9efde23, "cec_received_msg_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x583fed35, "cec_register_adapter" },
	{ 0xab152d81, "cec_s_phys_addr" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x2e69c0ae, "cec_delete_adapter" },
	{ 0x249e3e77, "cec_notifier_cec_adap_unregister" },
	{ 0xb75a1597, "cec_notifier_cec_adap_register" },
	{ 0xd5131e72, "cec_allocate_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x761527a1, "put_device" },
	{ 0xab1a08a3, "bus_find_device" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0xb735a641, "device_match_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xe543dcb9, "cec_unregister_adapter" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,cec,regmap-i2c");

MODULE_ALIAS("of:N*T*Cchrontel,ch7322");
MODULE_ALIAS("of:N*T*Cchrontel,ch7322C*");

MODULE_INFO(srcversion, "F18088B66754A458897A5D3");
