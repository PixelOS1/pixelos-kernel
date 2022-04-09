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
	{ 0x349cba85, "strchr" },
	{ 0x3b596575, "sock_bindtoindex" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7650c19b, "sock_release" },
	{ 0xf00b6a13, "metadata_dst_alloc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2b6af903, "call_netdevice_notifiers" },
	{ 0xd65e4b2a, "sock_create_kern" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xfb578fc5, "memset" },
	{ 0x4e5a73af, "kernel_connect" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7d11271e, "nla_put" },
	{ 0xe3af0432, "iptunnel_xmit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x82b24054, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd90ad6b3, "ipv6_stub" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x20589002, "udp_tunnel_nic_ops" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1ffa749, "udp_set_csum" },
	{ 0x39b8db9, "kernel_bind" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D1420DEF9E5883D99F55D74");
