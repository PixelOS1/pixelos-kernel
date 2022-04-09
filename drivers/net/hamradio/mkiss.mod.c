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
	{ 0x48554d91, "tty_unregister_ldisc" },
	{ 0x23dc2750, "tty_register_ldisc" },
	{ 0xb9d2177c, "tty_chars_in_buffer" },
	{ 0x8cd4afa5, "ax25_ip_xmit" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xdcf6bbc2, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa916b694, "strnlen" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbd6841d4, "crc16" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xa6257a2f, "complete" },
	{ 0xf2746719, "tty_unthrottle" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x133536b8, "register_netdev" },
	{ 0xda59b65, "free_netdev" },
	{ 0xea6e215, "tty_driver_flush_buffer" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x63bf1840, "netif_tx_unlock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4aafecd0, "netif_tx_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x221582bf, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "B8540571137BE8248810678");
