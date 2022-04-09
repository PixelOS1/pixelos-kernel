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
	{ 0x9d8a8bca, "pcmcia_unregister_driver" },
	{ 0x136c7ecb, "pcmcia_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xe5051215, "parport_pc_unregister_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4b292cec, "parport_pc_probe_port" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,parport_pc");

MODULE_ALIAS("pcmcia:m*c*f03fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*pa3BEB8CF2pbDB9E58BCpc*pd*");
MODULE_ALIAS("pcmcia:m0137c0003f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "B87056C1767CB96DBA80C00");
