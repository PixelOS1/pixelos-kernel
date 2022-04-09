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
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xee111615, "param_ops_int" },
	{ 0x50b1a13b, "parport_unregister_driver" },
	{ 0xa74b3f97, "__parport_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xead1afad, "i2c_new_smbus_alert_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x61a67417, "i2c_bit_add_bus" },
	{ 0x9459bcd1, "parport_claim_or_block" },
	{ 0xc69d0c74, "parport_register_dev_model" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9c12d0eb, "parport_unregister_device" },
	{ 0x77eebefb, "parport_release" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x79005328, "i2c_handle_smbus_alert" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,i2c-core,i2c-algo-bit,i2c-smbus");


MODULE_INFO(srcversion, "13500BA287C915D61F8DDD4");
