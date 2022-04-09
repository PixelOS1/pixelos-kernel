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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x3e366c72, "typec_altmode_notify" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb264b89f, "typec_altmode_unregister_driver" },
	{ 0xdb709dfb, "fwnode_find_reference" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x83610b11, "typec_altmode_exit" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x729eff62, "typec_altmode_vdm" },
	{ 0xb7377b25, "typec_get_negotiated_svdm_version" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x6f7a2ec0, "typec_altmode_enter" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xef9a743b, "drm_connector_oob_hotplug_event" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8ac49bc5, "typec_altmode2port" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0xb708b8b8, "typec_altmode_get_partner" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xce6b6840, "__typec_altmode_register_driver" },
};

MODULE_INFO(depends, "typec,drm");

MODULE_ALIAS("typec:idFF01m01");

MODULE_INFO(srcversion, "C6E1C760D6BA2FD29086FE1");
