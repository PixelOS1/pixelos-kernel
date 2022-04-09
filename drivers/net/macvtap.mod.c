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
	{ 0x67bd7a6e, "net_ns_type_operations" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5a63c46d, "macvlan_link_register" },
	{ 0x672d4ae2, "tap_destroy_cdev" },
	{ 0x52d91e96, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x97ac8144, "__class_register" },
	{ 0xc452fce8, "tap_create_cdev" },
	{ 0x336a9b2a, "macvlan_common_newlink" },
	{ 0xcf6f7e4c, "netdev_rx_handler_register" },
	{ 0x2ddc82dd, "tap_handle_frame" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xf76c47d9, "tap_free_minor" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0xb6807169, "tap_queue_resize" },
	{ 0x404ddde8, "tap_get_minor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x58614cb3, "macvlan_common_setup" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0x2fe89040, "macvlan_dellink" },
	{ 0xa8bf49d0, "tap_del_queues" },
	{ 0xa25fce3f, "netdev_rx_handler_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "macvlan,tap");


MODULE_INFO(srcversion, "B476EC38DE3C7EA15C02246");
