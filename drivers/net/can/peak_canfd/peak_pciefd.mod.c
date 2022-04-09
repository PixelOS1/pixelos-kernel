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
	{ 0x74c99cd1, "register_candev" },
	{ 0x6d4628c1, "alloc_can_err_skb" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x13a809ea, "can_bus_off" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf3424cff, "close_candev" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0x3317deee, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcde079b8, "free_candev" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x545f063a, "can_change_mtu" },
	{ 0x1314b943, "can_change_state" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6fb48068, "unregister_candev" },
	{ 0x9df6b80e, "alloc_can_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xcaff4958, "open_candev" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xbb0a1aed, "alloc_canfd_skb" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xb875fdde, "can_get_echo_skb" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x88bbb52b, "can_put_echo_skb" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("pci:v0000001Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000001Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "771E285EF67A2CB8A0D9B20");
