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
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x331337dc, "input_event" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xeefcded2, "hid_hw_request" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0x9166fada, "strncpy" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0x6fc0cfdf, "snd_device_new" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x677f83f1, "usb_hid_driver" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x84da05bd, "snd_card_free_when_closed" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x92997ed8, "_printk" },
	{ 0x5495392, "hid_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");

MODULE_ALIAS("hid:b0003g*v0000041Ep00002801");

MODULE_INFO(srcversion, "9D6269FC331AE1B03532C1A");
