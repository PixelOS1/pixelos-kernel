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
	{ 0xa73cda8f, "no_llseek" },
	{ 0xaaea90fd, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2b7f79e0, "i2c_for_each_dev" },
	{ 0x4195254f, "class_destroy" },
	{ 0x1511e6f3, "bus_register_notifier" },
	{ 0xbd27c502, "i2c_bus_type" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x60805a2, "cdev_device_del" },
	{ 0x92997ed8, "_printk" },
	{ 0x761527a1, "put_device" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1fdba44b, "cdev_device_add" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xacb32f2d, "cdev_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1d36acf4, "i2c_get_adapter" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbd508a26, "device_for_each_child" },
	{ 0x496a8608, "i2c_adapter_type" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa2d77e1a, "i2c_verify_client" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8df14a40, "i2c_smbus_xfer" },
	{ 0xd449c07c, "i2c_put_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "1397665468FC4195A5F661A");
