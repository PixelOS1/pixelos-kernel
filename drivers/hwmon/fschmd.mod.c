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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x8d45de86, "compat_ptr_ioctl" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x6f26a144, "_dev_crit" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa164df89, "misc_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeb9ad005, "misc_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:fscpos");
MODULE_ALIAS("i2c:fscher");
MODULE_ALIAS("i2c:fscscy");
MODULE_ALIAS("i2c:fschrc");
MODULE_ALIAS("i2c:fschmd");
MODULE_ALIAS("i2c:fschds");
MODULE_ALIAS("i2c:fscsyl");

MODULE_INFO(srcversion, "C258BC695911363481FBC47");
