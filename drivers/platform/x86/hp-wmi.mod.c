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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xc0fceb2f, "__platform_driver_probe" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x331337dc, "input_event" },
	{ 0xcac33cd4, "platform_profile_register" },
	{ 0x81188c30, "match_string" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xff282521, "rfkill_register" },
	{ 0xcdce87c, "rfkill_set_hw_state_reason" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x46e6e457, "rfkill_alloc" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xbfe36436, "platform_profile_remove" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,platform_profile,rfkill");


MODULE_INFO(srcversion, "48D218701CF49717FFB887A");
