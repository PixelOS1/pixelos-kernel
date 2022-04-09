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
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc215cb68, "freq_reg_info" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2ce7e85e, "wiphy_apply_custom_regulatory" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb34750fb, "ieee80211_get_channel_khz" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdba126c1, "reg_initiator_name" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "FEE950AB45B348F8700E449");
