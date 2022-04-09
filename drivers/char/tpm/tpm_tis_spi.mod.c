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
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0xf3445b57, "spi_sync_locked" },
	{ 0x205eb81f, "tpm_tis_core_init" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xf53c287e, "tpm_tis_remove" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf2adc910, "tpm_pm_suspend" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x53bb6402, "tpm_chip_unregister" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x16351f4d, "spi_bus_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa79b67cc, "spi_bus_unlock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SMO0768:*");
MODULE_ALIAS("spi:st33htpm-spi");
MODULE_ALIAS("spi:slb9670");
MODULE_ALIAS("spi:tpm_tis_spi");
MODULE_ALIAS("spi:tpm_tis-spi");
MODULE_ALIAS("spi:cr50");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spi");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spiC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670C*");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spi");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spiC*");
MODULE_ALIAS("of:N*T*Cgoogle,cr50");
MODULE_ALIAS("of:N*T*Cgoogle,cr50C*");

MODULE_INFO(srcversion, "C41A4731C2F3274077F9344");
