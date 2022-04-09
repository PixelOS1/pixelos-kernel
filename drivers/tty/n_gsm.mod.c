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
	{ 0x6ce57c5, "tty_unregister_driver" },
	{ 0x48554d91, "tty_unregister_ldisc" },
	{ 0xbffb3b71, "tty_driver_kref_put" },
	{ 0xe291bdf4, "tty_register_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x4cd4f721, "__tty_alloc_driver" },
	{ 0x23dc2750, "tty_register_ldisc" },
	{ 0xfeb7eba9, "tty_wakeup" },
	{ 0xc23477d, "current_task" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x24ed49d8, "n_tty_ioctl_helper" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x7574fc02, "tty_port_lower_dtr_rts" },
	{ 0x38a1eac8, "tty_port_close_end" },
	{ 0x7dc1a0ee, "tty_port_close_start" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x520e0d1, "tty_port_hangup" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0xadfce41f, "tty_insert_flip_string_fixed_flag" },
	{ 0xa8459c7c, "tty_hangup" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x18c82101, "tty_kref_put" },
	{ 0x1c2c4996, "tty_vhangup" },
	{ 0x41c8178f, "tty_port_tty_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x133536b8, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xda59b65, "free_netdev" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc05b8490, "tty_port_install" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf945f582, "tty_port_block_til_ready" },
	{ 0xd92405a1, "tty_port_tty_set" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x363480f, "tty_port_put" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xedca57ce, "skb_dequeue_tail" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x46fff920, "tty_port_tty_wakeup" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6ecf2389, "tty_port_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x74dced14, "__tty_insert_flip_char" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x509cdee7, "tty_hung_up_p" },
	{ 0x56470118, "__warn_printk" },
	{ 0x97379989, "tty_name" },
	{ 0xb7a6e628, "tty_register_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf410b1dd, "tty_port_tty_hangup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfc7ff842, "tty_unregister_device" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4df967a4, "tty_write_room" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7018A15F53A323925A815F0");
