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
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x9c444ba2, "rtl_dm_diginit" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x359db7c1, "rtl_fw_page_write" },
	{ 0x91306bb7, "rtl_cmd_send_packet" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb5e47aa, "rtl_fw_block_write" },
	{ 0x24e48d13, "skb_put" },
};

MODULE_INFO(depends, "rtlwifi");


MODULE_INFO(srcversion, "816236AA2CE6910E2464939");
