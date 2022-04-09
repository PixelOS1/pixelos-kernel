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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf3b47f67, "xp_partition_id" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x86814848, "ether_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xead4f7fe, "xp_max_npartitions" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe68acd6c, "xpc_interface" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x64ba5017, "xp_pa" },
	{ 0x68fa7d28, "xp_remote_memcpy" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x345c9217, "xpc_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc04c7267, "xpc_connect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xp");


MODULE_INFO(srcversion, "B32F60FC5224417F74BD9C7");
