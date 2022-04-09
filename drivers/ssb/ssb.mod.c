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
	{ 0x829ec15f, "sdio_writeb" },
	{ 0x984e4952, "sdio_readb" },
	{ 0x5b7424d5, "bus_register" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7549c36, "driver_register" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd82355a8, "pcmcia_enable_device" },
	{ 0xf0a950e9, "pcmcia_loop_tuple" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x136c7ecb, "pcmcia_register_driver" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xa53194d9, "pcmcia_read_config_byte" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6cc09945, "ioread32_rep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x837887c6, "gpiochip_remove" },
	{ 0x8678229, "_dev_emerg" },
	{ 0x27d9398f, "gpiochip_add_data_with_key" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xea82d402, "sdio_writel" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xb19b445, "ioread8" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xdaf02d94, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfb762773, "pcmcia_write_config_byte" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x7d95aac8, "sdio_readl" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x1b728f5a, "pcmcia_request_window" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xbb6269b0, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xfbab1bb1, "ioread8_rep" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16e6d67f, "get_device" },
	{ 0x326540a1, "sdio_writew" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe4f7e36d, "pcmcia_map_mem_page" },
	{ 0xedc03953, "iounmap" },
	{ 0x60c2f71d, "pci_prepare_to_sleep" },
	{ 0x9d8a8bca, "pcmcia_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xe21bf32a, "pci_back_from_sleep" },
	{ 0x776c87fd, "device_unregister" },
	{ 0x54aa5191, "sdio_readw" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9fe1ed77, "pcmcia_disable_device" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x91ef55e7, "sdio_release_host" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "mmc_core,pcmcia");

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");
MODULE_ALIAS("pcmcia:m02D0c0448f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02D0c0476f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "DDFE8DB69BC2AD2B487197D");
