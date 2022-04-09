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
	{ 0x45a41106, "noop_llseek" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x1d3dba4d, "usb_find_interface" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xad8fd9d3, "usb_deregister_dev" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x37a0cba, "kfree" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xe817776c, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x53b954a2, "up_read" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0x668b19a1, "down_read" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcf2a6966, "up" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F6418DF2362497557790A5F");
