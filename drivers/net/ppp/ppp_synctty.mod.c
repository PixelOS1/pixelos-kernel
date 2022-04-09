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
	{ 0x48554d91, "tty_unregister_ldisc" },
	{ 0x23dc2750, "tty_register_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x459f3f88, "skb_push" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x24ed49d8, "n_tty_ioctl_helper" },
	{ 0xe7f6db49, "ppp_channel_index" },
	{ 0x6c4ee24, "tty_mode_ioctl" },
	{ 0x623f6dd, "ppp_unit_number" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92997ed8, "_printk" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x69acdf38, "memcpy" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa6257a2f, "complete" },
	{ 0xf2746719, "tty_unthrottle" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x5e0b04e8, "ppp_unregister_channel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x33def6bb, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x978e8f2d, "ppp_output_wakeup" },
	{ 0xed18bb02, "ppp_input" },
	{ 0x487a712d, "ppp_input_error" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8518a4a6, "_raw_spin_trylock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "B44B5734F9FDA9E8D3CCA27");
