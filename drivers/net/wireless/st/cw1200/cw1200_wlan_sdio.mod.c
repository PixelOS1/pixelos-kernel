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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x70a42da4, "cw1200_irq_handler" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf55fc177, "cw1200_core_release" },
	{ 0x1ecf266d, "cw1200_can_suspend" },
	{ 0xbed205fd, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x694112a8, "sdio_f0_writeb" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x34fffb49, "sdio_align_size" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x53d96169, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x6b69f578, "sdio_memcpy_toio" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x8fff1d41, "sdio_memcpy_fromio" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x379d33af, "cw1200_core_probe" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x91ef55e7, "sdio_release_host" },
};

MODULE_INFO(depends, "cw1200_core,mmc_core");

MODULE_ALIAS("sdio:c*v0020d2280*");

MODULE_INFO(srcversion, "94BFA9D70DA8DBA210B75D2");
