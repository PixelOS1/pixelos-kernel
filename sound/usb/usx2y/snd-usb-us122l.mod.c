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
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xee111615, "param_ops_int" },
	{ 0x61339a67, "snd_power_wait" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6721d0f8, "snd_hwdep_new" },
	{ 0xc07dde30, "__snd_usbmidi_create" },
	{ 0x7aeea678, "usb_urb_ep_type_check" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xae1e7258, "usb_get_intf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xa3db4c4, "dump_page" },
	{ 0x15f4f10f, "usb_ifnum_to_if" },
	{ 0xfce98e7d, "usb_get_current_frame_number" },
	{ 0x54781c3d, "usb_control_msg_send" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xb1192c30, "usb_put_intf" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd,snd-hwdep");

MODULE_ALIAS("usb:v0644p800Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p800Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8020d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1D5E11A339EB2F62147704C");
