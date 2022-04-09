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
	{ 0x289ae51e, "tcf_em_unregister" },
	{ 0xb68e8849, "tcf_em_register" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x966f3b55, "xt_request_find_match" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x7d11271e, "nla_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x7b9019dd, "xt_check_match" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfbcf889, "module_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DB0BD9DF65564FFA8069B40");
