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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7d11271e, "nla_put" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x6e33c5e0, "netlink_broadcast" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x24e48d13, "skb_put" },
	{ 0x938aecd6, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E58368EF8E8C33C7F55877A");
