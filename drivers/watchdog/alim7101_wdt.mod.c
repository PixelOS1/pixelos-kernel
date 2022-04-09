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
	{ 0xee111615, "param_ops_int" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xa164df89, "misc_register" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x40d59096, "unregister_restart_handler" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00007101sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DDF44B5908D28CCC3A2AFBF");
