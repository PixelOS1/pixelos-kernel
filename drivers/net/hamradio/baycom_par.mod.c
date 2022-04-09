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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xee111615, "param_ops_int" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x1d2d4682, "hdlcdrv_unregister" },
	{ 0x50b1a13b, "parport_unregister_driver" },
	{ 0xb9f4779, "hdlcdrv_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa74b3f97, "__parport_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x349cba85, "strchr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa916b694, "strnlen" },
	{ 0x244e83fe, "hdlcdrv_arbitrate" },
	{ 0xb13f814f, "hdlcdrv_receiver" },
	{ 0xdf840d9d, "hdlcdrv_transmitter" },
	{ 0x5012a70, "pv_ops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8475ab59, "parport_put_port" },
	{ 0xc69d0c74, "parport_register_dev_model" },
	{ 0xe1ac4c80, "parport_find_base" },
	{ 0x9c12d0eb, "parport_unregister_device" },
	{ 0x77eebefb, "parport_release" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x2265fcad, "parport_claim" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlcdrv,parport");


MODULE_INFO(srcversion, "4A61B6A8A835308C857E8B2");
