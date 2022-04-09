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
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1564421, "request_firmware" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x8130f202, "ttusbdecfe_dvbs_attach" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x9e573434, "dvb_register_frontend" },
	{ 0xaaf7f3c8, "ttusbdecfe_dvbt_attach" },
	{ 0xe5462348, "dvb_dmxdev_init" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x9e9bf1ab, "dvb_register_adapter" },
	{ 0x7475a02, "usb_alloc_coherent" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xa8d65c10, "dvb_unregister_adapter" },
	{ 0x5d8cc662, "dvb_unregister_frontend" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x360e621, "dvb_dmxdev_release" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x667d4072, "usb_free_coherent" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfb578fc5, "memset" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0x331337dc, "input_event" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ttusbdecfe,dvb-core");

MODULE_ALIAS("usb:v0B48p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p1009d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "94B68640EC45632AD199DEA");
