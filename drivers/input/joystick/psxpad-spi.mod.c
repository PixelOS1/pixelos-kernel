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
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x331337dc, "input_event" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x327d7adf, "input_set_max_poll_interval" },
	{ 0x772559dd, "input_set_min_poll_interval" },
	{ 0xc1a92eef, "input_set_poll_interval" },
	{ 0x87645171, "input_setup_polling" },
	{ 0x52345e6e, "spi_setup" },
	{ 0x1ccb388b, "input_ff_create_memless" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "D4C9AF2175BA95E846753B9");
