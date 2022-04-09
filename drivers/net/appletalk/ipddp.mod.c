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
	{ 0xee111615, "param_ops_int" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3193fd27, "atrtr_get_dev" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc23477d, "current_task" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd9572aa4, "aarp_send_ddp" },
	{ 0x70d2752e, "atalk_find_dev_addr" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "appletalk");


MODULE_INFO(srcversion, "250A54C1BB84C979820D1F7");
