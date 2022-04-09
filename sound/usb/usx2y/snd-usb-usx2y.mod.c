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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xcb64725, "snd_pcm_stop_xrun" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xf4771ee3, "snd_pcm_set_managed_buffer" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc07dde30, "__snd_usbmidi_create" },
	{ 0x7aeea678, "usb_urb_ep_type_check" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xfce98e7d, "usb_get_current_frame_number" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd,snd-hwdep");

MODULE_ALIAS("usb:v1604p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1F56701DF948EF931CBEF33");
