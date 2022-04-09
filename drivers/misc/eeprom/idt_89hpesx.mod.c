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
	{ 0x22749e72, "simple_open" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa916b694, "strnlen" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9166fada, "strncpy" },
	{ 0x4841bdee, "strnchr" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbcbcc6a1, "sysfs_create_bin_file" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x5963d5f4, "fwnode_property_read_string" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xf634309c, "i2c_smbus_write_block_data" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xef2f45f3, "i2c_smbus_write_i2c_block_data" },
	{ 0xee15abe8, "i2c_smbus_write_word_data" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x80a30e6, "sysfs_remove_bin_file" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Cidt,89hpes8nt2");
MODULE_ALIAS("of:N*T*Cidt,89hpes8nt2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt3");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt6ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt6ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8bg2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt8bg2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes12nt12g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16nt16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16nt16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt24g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24nt24g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24bg2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32nt24bg2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3a");
MODULE_ALIAS("of:N*T*Cidt,89hpes12n3aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3a");
MODULE_ALIAS("of:N*T*Cidt,89hpes24n3aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32h8g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48h12ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes16h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes22h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes34h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes64h16ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes12t3g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes12t3g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t3g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t3g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes4t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes4t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes10t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes10t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4ag2");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t4ag2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes5t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes5t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5a");
MODULE_ALIAS("of:N*T*Cidt,89hpes8t5aC*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t6g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes6t6g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes24t6g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t7");
MODULE_ALIAS("of:N*T*Cidt,89hpes16t7C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes32t8g2C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12C*");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12g2");
MODULE_ALIAS("of:N*T*Cidt,89hpes48t12g2C*");
MODULE_ALIAS("i2c:89hpes8nt2");
MODULE_ALIAS("i2c:89hpes12nt3");
MODULE_ALIAS("i2c:89hpes24nt6ag2");
MODULE_ALIAS("i2c:89hpes32nt8ag2");
MODULE_ALIAS("i2c:89hpes32nt8bg2");
MODULE_ALIAS("i2c:89hpes12nt12g2");
MODULE_ALIAS("i2c:89hpes16nt16g2");
MODULE_ALIAS("i2c:89hpes24nt24g2");
MODULE_ALIAS("i2c:89hpes32nt24ag2");
MODULE_ALIAS("i2c:89hpes32nt24bg2");
MODULE_ALIAS("i2c:89hpes12n3");
MODULE_ALIAS("i2c:89hpes12n3a");
MODULE_ALIAS("i2c:89hpes24n3");
MODULE_ALIAS("i2c:89hpes24n3a");
MODULE_ALIAS("i2c:89hpes32h8");
MODULE_ALIAS("i2c:89hpes32h8g2");
MODULE_ALIAS("i2c:89hpes48h12");
MODULE_ALIAS("i2c:89hpes48h12g2");
MODULE_ALIAS("i2c:89hpes48h12ag2");
MODULE_ALIAS("i2c:89hpes16h16");
MODULE_ALIAS("i2c:89hpes22h16");
MODULE_ALIAS("i2c:89hpes22h16g2");
MODULE_ALIAS("i2c:89hpes34h16");
MODULE_ALIAS("i2c:89hpes34h16g2");
MODULE_ALIAS("i2c:89hpes64h16");
MODULE_ALIAS("i2c:89hpes64h16g2");
MODULE_ALIAS("i2c:89hpes64h16ag2");
MODULE_ALIAS("i2c:89hpes12t3g2");
MODULE_ALIAS("i2c:89hpes24t3g2");
MODULE_ALIAS("i2c:89hpes16t4");
MODULE_ALIAS("i2c:89hpes4t4g2");
MODULE_ALIAS("i2c:89hpes10t4g2");
MODULE_ALIAS("i2c:89hpes16t4g2");
MODULE_ALIAS("i2c:89hpes16t4ag2");
MODULE_ALIAS("i2c:89hpes5t5");
MODULE_ALIAS("i2c:89hpes6t5");
MODULE_ALIAS("i2c:89hpes8t5");
MODULE_ALIAS("i2c:89hpes8t5a");
MODULE_ALIAS("i2c:89hpes24t6");
MODULE_ALIAS("i2c:89hpes6t6g2");
MODULE_ALIAS("i2c:89hpes24t6g2");
MODULE_ALIAS("i2c:89hpes16t7");
MODULE_ALIAS("i2c:89hpes32t8");
MODULE_ALIAS("i2c:89hpes32t8g2");
MODULE_ALIAS("i2c:89hpes48t12");
MODULE_ALIAS("i2c:89hpes48t12g2");
MODULE_ALIAS("i2c:24c32");
MODULE_ALIAS("i2c:24c64");
MODULE_ALIAS("i2c:24c128");
MODULE_ALIAS("i2c:24c256");
MODULE_ALIAS("i2c:24c512");

MODULE_INFO(srcversion, "2A0DD3851F858DEA6345BDA");
