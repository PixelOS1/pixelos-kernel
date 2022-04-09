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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x59a74f5, "hwmon_notify_event" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x81fefc83, "i2c_smbus_read_byte" },
	{ 0x8df14a40, "i2c_smbus_xfer" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Cadi,adm1032");
MODULE_ALIAS("of:N*T*Cadi,adm1032C*");
MODULE_ALIAS("of:N*T*Cadi,adt7461");
MODULE_ALIAS("of:N*T*Cadi,adt7461C*");
MODULE_ALIAS("of:N*T*Cadi,adt7461a");
MODULE_ALIAS("of:N*T*Cadi,adt7461aC*");
MODULE_ALIAS("of:N*T*Cgmt,g781");
MODULE_ALIAS("of:N*T*Cgmt,g781C*");
MODULE_ALIAS("of:N*T*Cnational,lm90");
MODULE_ALIAS("of:N*T*Cnational,lm90C*");
MODULE_ALIAS("of:N*T*Cnational,lm86");
MODULE_ALIAS("of:N*T*Cnational,lm86C*");
MODULE_ALIAS("of:N*T*Cnational,lm89");
MODULE_ALIAS("of:N*T*Cnational,lm89C*");
MODULE_ALIAS("of:N*T*Cnational,lm99");
MODULE_ALIAS("of:N*T*Cnational,lm99C*");
MODULE_ALIAS("of:N*T*Cdallas,max6646");
MODULE_ALIAS("of:N*T*Cdallas,max6646C*");
MODULE_ALIAS("of:N*T*Cdallas,max6647");
MODULE_ALIAS("of:N*T*Cdallas,max6647C*");
MODULE_ALIAS("of:N*T*Cdallas,max6649");
MODULE_ALIAS("of:N*T*Cdallas,max6649C*");
MODULE_ALIAS("of:N*T*Cdallas,max6654");
MODULE_ALIAS("of:N*T*Cdallas,max6654C*");
MODULE_ALIAS("of:N*T*Cdallas,max6657");
MODULE_ALIAS("of:N*T*Cdallas,max6657C*");
MODULE_ALIAS("of:N*T*Cdallas,max6658");
MODULE_ALIAS("of:N*T*Cdallas,max6658C*");
MODULE_ALIAS("of:N*T*Cdallas,max6659");
MODULE_ALIAS("of:N*T*Cdallas,max6659C*");
MODULE_ALIAS("of:N*T*Cdallas,max6680");
MODULE_ALIAS("of:N*T*Cdallas,max6680C*");
MODULE_ALIAS("of:N*T*Cdallas,max6681");
MODULE_ALIAS("of:N*T*Cdallas,max6681C*");
MODULE_ALIAS("of:N*T*Cdallas,max6695");
MODULE_ALIAS("of:N*T*Cdallas,max6695C*");
MODULE_ALIAS("of:N*T*Cdallas,max6696");
MODULE_ALIAS("of:N*T*Cdallas,max6696C*");
MODULE_ALIAS("of:N*T*Connn,nct1008");
MODULE_ALIAS("of:N*T*Connn,nct1008C*");
MODULE_ALIAS("of:N*T*Cwinbond,w83l771");
MODULE_ALIAS("of:N*T*Cwinbond,w83l771C*");
MODULE_ALIAS("of:N*T*Cnxp,sa56004");
MODULE_ALIAS("of:N*T*Cnxp,sa56004C*");
MODULE_ALIAS("of:N*T*Cti,tmp451");
MODULE_ALIAS("of:N*T*Cti,tmp451C*");
MODULE_ALIAS("of:N*T*Cti,tmp461");
MODULE_ALIAS("of:N*T*Cti,tmp461C*");
MODULE_ALIAS("i2c:adm1032");
MODULE_ALIAS("i2c:adt7461");
MODULE_ALIAS("i2c:adt7461a");
MODULE_ALIAS("i2c:g781");
MODULE_ALIAS("i2c:lm90");
MODULE_ALIAS("i2c:lm86");
MODULE_ALIAS("i2c:lm89");
MODULE_ALIAS("i2c:lm99");
MODULE_ALIAS("i2c:max6646");
MODULE_ALIAS("i2c:max6647");
MODULE_ALIAS("i2c:max6649");
MODULE_ALIAS("i2c:max6654");
MODULE_ALIAS("i2c:max6657");
MODULE_ALIAS("i2c:max6658");
MODULE_ALIAS("i2c:max6659");
MODULE_ALIAS("i2c:max6680");
MODULE_ALIAS("i2c:max6681");
MODULE_ALIAS("i2c:max6695");
MODULE_ALIAS("i2c:max6696");
MODULE_ALIAS("i2c:nct1008");
MODULE_ALIAS("i2c:w83l771");
MODULE_ALIAS("i2c:sa56004");
MODULE_ALIAS("i2c:tmp451");
MODULE_ALIAS("i2c:tmp461");

MODULE_INFO(srcversion, "8763715C97A3E1EE1484B77");
