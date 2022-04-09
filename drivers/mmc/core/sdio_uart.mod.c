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
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0xbffb3b71, "tty_driver_kref_put" },
	{ 0x6ce57c5, "tty_unregister_driver" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0xe291bdf4, "tty_register_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x4cd4f721, "__tty_alloc_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0x74dced14, "__tty_insert_flip_char" },
	{ 0xfeb7eba9, "tty_wakeup" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x18c82101, "tty_kref_put" },
	{ 0x41c8178f, "tty_port_tty_get" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x829ec15f, "sdio_writeb" },
	{ 0x984e4952, "sdio_readb" },
	{ 0xc23477d, "current_task" },
	{ 0xfc7ff842, "tty_unregister_device" },
	{ 0xb29ceec0, "seq_putc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd349d253, "seq_printf" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xae72a5c8, "tty_standard_install" },
	{ 0x92997ed8, "_printk" },
	{ 0x91ef55e7, "sdio_release_host" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xf410b1dd, "tty_port_tty_hangup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xed7d3113, "tty_port_register_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6ecf2389, "tty_port_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8bce6c8, "tty_port_open" },
	{ 0xa7734ba5, "tty_port_close" },
	{ 0x520e0d1, "tty_port_hangup" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x363480f, "tty_port_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");

MODULE_INFO(srcversion, "694A750C78A07B461832F30");
