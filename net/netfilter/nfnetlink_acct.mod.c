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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x76ad775d, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7d11271e, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0xd6e40c61, "nfnetlink_unicast" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfbcf889, "module_put" },
	{ 0x8b7ff9fd, "nfnetlink_broadcast" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x8f5dfbc7, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0xb7fa52bc, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "29788C5ECBF8961BEE2E816");
