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
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe04da4f0, "pcmcia_request_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbffb3b71, "tty_driver_kref_put" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x623f6dd, "ppp_unit_number" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x136c7ecb, "pcmcia_register_driver" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x7700cef0, "pcmcia_reset_card" },
	{ 0xe291bdf4, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e0b04e8, "ppp_unregister_channel" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x978e8f2d, "ppp_output_wakeup" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0xed7d3113, "tty_port_register_device" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x6ecf2389, "tty_port_init" },
	{ 0x1b728f5a, "pcmcia_request_window" },
	{ 0xadfce41f, "tty_insert_flip_string_fixed_flag" },
	{ 0x8398df2f, "tty_port_destroy" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1c2c4996, "tty_vhangup" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfc7ff842, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6ce57c5, "tty_unregister_driver" },
	{ 0xa8459c7c, "tty_hangup" },
	{ 0x5746c52c, "tty_perform_flush" },
	{ 0x4cd4f721, "__tty_alloc_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xed18bb02, "ppp_input" },
	{ 0xe4f7e36d, "pcmcia_map_mem_page" },
	{ 0xedc03953, "iounmap" },
	{ 0x9d8a8bca, "pcmcia_unregister_driver" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x33def6bb, "ppp_register_channel" },
	{ 0xe7f6db49, "ppp_channel_index" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "pcmcia,ppp_generic,pcmcia_core");

MODULE_ALIAS("pcmcia:m02F2c0100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02F2c0200f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "C3697A13078C243F8B0F063");
