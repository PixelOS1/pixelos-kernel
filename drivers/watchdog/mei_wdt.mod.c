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
	{ 0x22749e72, "simple_open" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x961f12d, "mei_cldev_driver_unregister" },
	{ 0x85721719, "__mei_cldev_driver_register" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x542b776, "mei_cldev_recv" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x37a02c29, "mei_cldev_send" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x7ad6c16b, "mei_cldev_register_notif_cb" },
	{ 0x597dd436, "mei_cldev_register_rx_cb" },
	{ 0x8a36eba3, "mei_cldev_enable" },
	{ 0xf91ee1d0, "mei_cldev_set_drvdata" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x372ff97f, "mei_cldev_ver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xd54e0fa0, "watchdog_register_device" },
	{ 0xa6257a2f, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x6ce574bc, "mei_cldev_disable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x40715144, "watchdog_unregister_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0xebc692b2, "mei_cldev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:05b79a6f-4628-4d7f-899d-a91514cb32ab:*:*");

MODULE_INFO(srcversion, "9DF4869F79ACA52102CB1B5");
