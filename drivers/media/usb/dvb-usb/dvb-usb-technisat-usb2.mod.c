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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xee111615, "param_ops_int" },
	{ 0xf8d88636, "dvb_usb_device_exit" },
	{ 0xd275efbc, "dvb_usb_device_init" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdf5f3197, "dvb_frontend_detach" },
	{ 0x37a8cd8c, "param_ops_short" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x2ce47abe, "ir_raw_event_store" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x418ffa0d, "ir_raw_event_handle" },
};

MODULE_INFO(depends, "dvb-usb,i2c-core,dvb-core,rc-core");

MODULE_ALIAS("usb:v14F7p0500d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6EB32D3C8ED97265445E6F2");
