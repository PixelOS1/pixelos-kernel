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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf2078104, "snd_pcm_period_elapsed" },
	{ 0xb1124694, "usb_init_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xd7ad819, "snd_rawmidi_set_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbd5b6eac, "snd_card_disconnect" },
	{ 0x66d0ccc1, "snd_rawmidi_new" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x331337dc, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf5be4d46, "snd_pcm_set_managed_buffer_all" },
	{ 0xa9dd129e, "usb_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xe903fd52, "snd_pcm_set_ops" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x441bc021, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7aeea678, "usb_urb_ep_type_check" },
	{ 0x6a971edd, "snd_card_new" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4161ca3, "snd_card_free" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb1a03543, "snd_pcm_new" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0xc5929162, "snd_rawmidi_transmit" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xfd95b68d, "snd_rawmidi_receive" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xefc7653c, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EE8281B1188909090955AC4");
