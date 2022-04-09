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
	{ 0xcfb6a3da, "unregister_atmdevice_notifier" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0xa6b25eeb, "deregister_atm_ioctl" },
	{ 0xb09faf79, "register_atmdevice_notifier" },
	{ 0x35cac49d, "register_atm_ioctl" },
	{ 0x60db5ae0, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x459f3f88, "skb_push" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x30598a28, "vcc_process_recv_queue" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x133536b8, "register_netdev" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x5a921311, "strncmp" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xd349d253, "seq_printf" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x86814848, "ether_setup" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfbcf889, "module_put" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xdf2ebb87, "_raw_read_unlock_irqrestore" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "D8D21A574ED5CF7CE3083CB");
