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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xb1124694, "usb_init_urb" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xcb64725, "snd_pcm_stop_xrun" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x283b28ae, "_snd_ctl_add_follower" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xbc9c1981, "snd_ctl_boolean_stereo_info" },
	{ 0x84da05bd, "snd_card_free_when_closed" },
	{ 0xc0ab925e, "usb_poison_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xaf85c4be, "snd_ctl_make_virtual_master" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5f219c43, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0x5a4ffb89, "usb_control_msg_recv" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0x54781c3d, "usb_control_msg_send" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "15C0369C27C11532A06F275");
