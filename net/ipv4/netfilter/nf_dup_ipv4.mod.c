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
	{ 0xdfa6106a, "ip_local_out" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe4b5ded9, "__pskb_copy_fclone" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D349050B58ADAABC15B08A7");
