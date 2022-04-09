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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x2752ed0a, "snd_i2c_device_create" },
	{ 0x7cb508fc, "snd_i2c_sendbytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8ef4044f, "snd_ctl_notify" },
	{ 0xd8578065, "snd_i2c_device_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x72ce7921, "snd_i2c_readbytes" },
	{ 0x92997ed8, "_printk" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb74b614, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-i2c,snd");


MODULE_INFO(srcversion, "B7FB6C3FBC469060197D7FF");
