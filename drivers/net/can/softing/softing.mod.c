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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x74c99cd1, "register_candev" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x1231e28a, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf3424cff, "close_candev" },
	{ 0xb19b445, "ioread8" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xc23477d, "current_task" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde80cd09, "ioremap" },
	{ 0x5a921311, "strncmp" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcde079b8, "free_candev" },
	{ 0x77a86b77, "_dev_alert" },
	{ 0x545f063a, "can_change_mtu" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6fb48068, "unregister_candev" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcaff4958, "open_candev" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x1564421, "request_firmware" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "39FCE86BFBCB1E02C786453");
