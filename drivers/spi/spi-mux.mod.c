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
	{ 0x761527a1, "put_device" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x8fd06eb2, "devm_spi_register_controller" },
	{ 0xcea000ed, "mux_control_states" },
	{ 0x402b3d8d, "devm_mux_control_get" },
	{ 0xddf109b6, "__spi_alloc_controller" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb1b6121c, "spi_async" },
	{ 0xc2259b8c, "mux_control_select_delay" },
	{ 0x69d8d993, "mux_control_deselect" },
	{ 0x30f6d3b5, "spi_finalize_current_message" },
	{ 0x52345e6e, "spi_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mux-core");

MODULE_ALIAS("of:N*T*Cspi-mux");
MODULE_ALIAS("of:N*T*Cspi-muxC*");
MODULE_ALIAS("spi:spi-mux");

MODULE_INFO(srcversion, "5D8FFBF1288518EABBE129B");
