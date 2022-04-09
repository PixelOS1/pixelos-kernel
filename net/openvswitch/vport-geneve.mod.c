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
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0xb67f353d, "ovs_netdev_tunnel_destroy" },
	{ 0x7abf4913, "ovs_vport_ops_unregister" },
	{ 0xe036ddc6, "__ovs_vport_ops_register" },
	{ 0xa17f3b60, "ovs_vport_free" },
	{ 0x60db40a8, "rtnl_delete_link" },
	{ 0x56278f0b, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf805b7f1, "dev_change_flags" },
	{ 0x7b3401a, "geneve_dev_create_fb" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xec075b05, "ovs_vport_alloc" },
	{ 0xcd279169, "nla_find" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "openvswitch,geneve");


MODULE_INFO(srcversion, "754D3F6267ED853DE69A4E5");
