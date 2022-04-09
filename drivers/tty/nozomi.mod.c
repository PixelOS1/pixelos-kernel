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
	{ 0xee111615, "param_ops_int" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xbffb3b71, "tty_driver_kref_put" },
	{ 0x6ce57c5, "tty_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xe291bdf4, "tty_register_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x4cd4f721, "__tty_alloc_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x96848186, "scnprintf" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x46fff920, "tty_port_tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x74dced14, "__tty_insert_flip_char" },
	{ 0x18c82101, "tty_kref_put" },
	{ 0xadfce41f, "tty_insert_flip_string_fixed_flag" },
	{ 0x41c8178f, "tty_port_tty_get" },
	{ 0xed7d3113, "tty_port_register_device" },
	{ 0x6ecf2389, "tty_port_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xae72a5c8, "tty_standard_install" },
	{ 0x8bce6c8, "tty_port_open" },
	{ 0xa7734ba5, "tty_port_close" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x520e0d1, "tty_port_hangup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x8398df2f, "tty_port_destroy" },
	{ 0xfc7ff842, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf410b1dd, "tty_port_tty_hangup" },
	{ 0x92997ed8, "_printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001931d0000000Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CF6F2FB5F0A088AF550ECC8");
