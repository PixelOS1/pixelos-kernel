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
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x4ab6e832, "btmrvl_register_hdev" },
	{ 0x2fbb05ef, "btmrvl_add_card" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x1564421, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6a0e8e0a, "btmrvl_send_module_cfg_cmd" },
	{ 0xb80ad91b, "btmrvl_remove_card" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xb32462cf, "btmrvl_check_evtpkt" },
	{ 0x54a2d145, "hci_recv_frame" },
	{ 0xe7f49e4f, "btmrvl_process_event" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x24e48d13, "skb_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xca14219, "dev_coredumpv" },
	{ 0x96848186, "scnprintf" },
	{ 0xa916b694, "strnlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xb17d5653, "sdio_writesb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x884bd4b0, "btmrvl_interrupt" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x81a1f34b, "sdio_readsb" },
	{ 0x218eee0d, "sdio_set_host_pm_flags" },
	{ 0xf29c68e2, "btmrvl_enable_hs" },
	{ 0x50395caa, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x97ec3dc2, "hci_resume_dev" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x788c697a, "sdio_get_host_pm_caps" },
	{ 0x53d96169, "sdio_f0_readb" },
	{ 0x718b8b7, "bt_info" },
	{ 0x984e4952, "sdio_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x91ef55e7, "sdio_release_host" },
	{ 0x829ec15f, "sdio_writeb" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mmc_core,btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "FC5B7AFB277A64632424B95");
