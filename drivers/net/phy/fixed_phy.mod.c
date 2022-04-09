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
	{ 0x3c1098a3, "get_phy_device" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x99de9c60, "phy_device_register" },
	{ 0xef1e6e10, "phy_device_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xffb7c514, "ida_free" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xc1004511, "phy_device_remove" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfd64075b, "phy_advertise_supported" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe4e48b12, "swphy_validate_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xb2922cca, "gpiod_put" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "4A7F841AB05C59D8D771B41");
