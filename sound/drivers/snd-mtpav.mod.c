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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5a8a2dc9, "param_ops_long" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd,snd-rawmidi");


MODULE_INFO(srcversion, "EA22B05A8FB648287D3F1D6");
