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
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x837887c6, "gpiochip_remove" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x27d9398f, "gpiochip_add_data_with_key" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:pca9530");
MODULE_ALIAS("i2c:pca9531");
MODULE_ALIAS("i2c:pca9532");
MODULE_ALIAS("i2c:pca9533");

MODULE_INFO(srcversion, "925A196567E392FE90E6BD2");
