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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x2e481cc8, "iio_kfifo_allocate" },
	{ 0xdc19de19, "iio_device_attach_buffer" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x33e60ba0, "iio_kfifo_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0xe71b9138, "iio_alloc_pollfunc" },
	{ 0x4060a895, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "A4A2CA091518043A2E933A0");
