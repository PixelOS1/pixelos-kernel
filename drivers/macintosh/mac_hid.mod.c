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
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0x9cd91791, "register_sysctl" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x53bf7443, "input_register_handler" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x9afdcf2b, "input_unregister_handler" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0x92997ed8, "_printk" },
	{ 0x29bd006d, "input_open_device" },
	{ 0x2ea1516a, "input_register_handle" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x331337dc, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x5417299f, "input_unregister_handle" },
	{ 0x70dc95b4, "input_close_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*1,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "C7AA10846748E15FE8788C7");
