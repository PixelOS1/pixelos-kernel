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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0x50b1a13b, "parport_unregister_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9c12d0eb, "parport_unregister_device" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2265fcad, "parport_claim" },
	{ 0x77eebefb, "parport_release" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc69d0c74, "parport_register_dev_model" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xa74b3f97, "__parport_register_driver" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
	{ 0x2c499467, "platform_device_put" },
};

MODULE_INFO(depends, "snd-rawmidi,parport,snd");


MODULE_INFO(srcversion, "132D0BFBEBCCD768E433E5F");
