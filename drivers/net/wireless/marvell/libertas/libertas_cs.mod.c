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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0x136c7ecb, "pcmcia_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0xe6612d69, "lbs_stop_card" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0xd0f80fce, "pcmcia_request_io" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x126f6547, "lbs_start_card" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xb19b445, "ioread8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x32415a, "lbs_queue_event" },
	{ 0x98c9896d, "lbs_get_firmware_async" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xda20bae, "pcmcia_loop_config" },
	{ 0xa2d365e1, "lbs_remove_card" },
	{ 0x880c19c3, "lbs_process_rxed_packet" },
	{ 0xb25d2d18, "lbs_host_to_card_done" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x848d372e, "iowrite8" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ad35ebe, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d8a8bca, "pcmcia_unregister_driver" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0x24e48d13, "skb_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5c4a7df1, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "pcmcia,libertas");

MODULE_ALIAS("pcmcia:m02DBc8103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DBc6064f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DFc8103f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "4B9186A4D2547B25E09D92E");
