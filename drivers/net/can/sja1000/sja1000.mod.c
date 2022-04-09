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
	{ 0x84dcf661, "netdev_info" },
	{ 0x74c99cd1, "register_candev" },
	{ 0x6d4628c1, "alloc_can_err_skb" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xf3424cff, "close_candev" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcde079b8, "free_candev" },
	{ 0x545f063a, "can_change_mtu" },
	{ 0x1314b943, "can_change_state" },
	{ 0x6fb48068, "unregister_candev" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcaff4958, "open_candev" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0x4a7a43c4, "can_free_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "BD9128A5DC46546ACDF3438");
