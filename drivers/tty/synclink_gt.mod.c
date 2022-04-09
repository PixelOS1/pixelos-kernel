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
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xe291bdf4, "tty_register_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x4cd4f721, "__tty_alloc_driver" },
	{ 0xa8459c7c, "tty_hangup" },
	{ 0x76f4fc8f, "do_SAK" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xed7d3113, "tty_port_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xde80cd09, "ioremap" },
	{ 0x85bd1608, "__request_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6ecf2389, "tty_port_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x38a1eac8, "tty_port_close_end" },
	{ 0x7b302f33, "tty_ldisc_flush" },
	{ 0x7dc1a0ee, "tty_port_close_start" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x31a14228, "tty_port_raise_dtr_rts" },
	{ 0x59a036d6, "tty_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x9c7f9dc4, "tty_unlock" },
	{ 0x42c5acdf, "tty_port_carrier_raised" },
	{ 0x509cdee7, "tty_hung_up_p" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x8398df2f, "tty_port_destroy" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbffb3b71, "tty_driver_kref_put" },
	{ 0x6ce57c5, "tty_unregister_driver" },
	{ 0xfc7ff842, "tty_unregister_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd349d253, "seq_printf" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x69acdf38, "memcpy" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0x4bc3a333, "tty_ldisc_deref" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf4fc7d2, "tty_ldisc_ref" },
	{ 0x74dced14, "__tty_insert_flip_char" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc23477d, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfeb7eba9, "tty_wakeup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x92997ed8, "_printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000013C0d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000090sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C1923FCC22980D487D4023A");
