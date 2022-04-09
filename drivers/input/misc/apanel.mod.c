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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x92997ed8, "_printk" },
	{ 0x2a303d4d, "check_signature" },
	{ 0xde80cd09, "ioremap" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xc1a92eef, "input_set_poll_interval" },
	{ 0x87645171, "input_setup_polling" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x331337dc, "input_event" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0xee15abe8, "i2c_smbus_write_word_data" },
	{ 0x76f36593, "led_set_brightness" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:fujitsu_apanel");

MODULE_INFO(srcversion, "D647BEE67EDB435A08B109F");
