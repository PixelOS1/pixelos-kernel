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
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x2e4e567c, "mmc_hw_reset" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x788c697a, "sdio_get_host_pm_caps" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x694112a8, "sdio_f0_writeb" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x53d96169, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x6b69f578, "sdio_memcpy_toio" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x8fff1d41, "sdio_memcpy_fromio" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0x91ef55e7, "sdio_release_host" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "794B10311F3CF903C8DA68B");
