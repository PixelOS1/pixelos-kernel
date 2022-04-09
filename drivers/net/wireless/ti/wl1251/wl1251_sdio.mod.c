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
	{ 0x829ec15f, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0xbbbf1fc4, "wl1251_free_hw" },
	{ 0x348ba33c, "sdio_writeb_readb" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x13243d4b, "wl1251_get_platform_data" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x92997ed8, "_printk" },
	{ 0x152e4f7d, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x6b69f578, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x8fff1d41, "sdio_memcpy_fromio" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0xa1e74801, "wl1251_alloc_hw" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x91ef55e7, "sdio_release_host" },
};

MODULE_INFO(depends, "mmc_core,mac80211,wl1251");

MODULE_ALIAS("sdio:c*v104Cd9066*");

MODULE_INFO(srcversion, "6B4313D1CEE75105C29D8EA");
