#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x525b86d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6dc7dc1e, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x743241d, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsKernelUsesRegParm) },
	{ 0xabe71b05, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCreateTimer) },
	{ 0xbca036b7, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsIoMemReadl) },
	{ 0xcd7bf981, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsEventCreate) },
	{ 0x90b92d37, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsPciWriteConfigdw) },
	{ 0x58245be, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCriticalSectionRelease) },
	{ 0xfa9b3e79, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsPciReadConfigb) },
	{ 0xf83d11b6, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsPciWriteConfigb) },
	{ 0x388af6e7, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xdcc0ee56, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCriticalSectionDestroy) },
	{ 0x263ed23b, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r12) },
	{ 0xe7910696, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsSprintf) },
	{ 0x38e0a235, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsPciReadConfigw) },
	{ 0xd1af0c61, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xe5d6603e, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsUnhookInterrupt) },
	{ 0xf76c8370, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsPciReadConfigdw) },
	{ 0x7cac7b6, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x533191a, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsAllocate) },
	{ 0x8917329d, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsGetPCIDeviceResources) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe9985f40, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCancelTimer) },
	{ 0x494b582c, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_ComCtrl_Control) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc0620d74, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3cc05a0b, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_cnxt_serial_remove) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x49c8c662, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsIoMemWritel) },
	{ 0x3c61a256, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsStrCat) },
	{ 0xe287b7ab, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsUnmapPhysMem) },
	{ 0xa022abf, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsEventDestroy) },
	{ 0xe03abc15, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMemCpy) },
	{ 0x820ab370, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsIoMemReadw) },
	{ 0xc51f9205, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCriticalSectionCreate) },
	{ 0xfd37ed40, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5f5dbae8, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsCriticalSectionAcquire) },
	{ 0x9530d4f7, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsSleep) },
	{ 0x78ebe119, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsEventSet) },
	{ 0x22e421f, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMemSet) },
	{ 0x66e478fa, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2d293f3a, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsEventClear) },
	{ 0x89ff00c2, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsGetProcessorFreq) },
	{ 0x3d4fb7e, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsChangeTimerTimeOut) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9a7a7dc9, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x26932b93, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb4c7d569, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x8230168b, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x525227a5, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsHookInterrupt) },
	{ 0xd6e3cb08, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsFree) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc559022e, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xdd98ff2f, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsPciWriteConfigw) },
	{ 0xcd99bfeb, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsDestroyTimer) },
	{ 0x89905baa, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x22f34e04, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsErrorPrintf) },
	{ 0x36886337, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xb7efc090, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsMapPhysMem) },
	{ 0xf425b003, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsReadCpuCnt) },
	{ 0x9202a2ee, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsStrLen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xab154510, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsEventWaitTime) },
	{ 0x91a19aa1, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x6e537fc3, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x8e7b8953, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsSetTimer) },
	{ 0x1456e13, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_cnxt_serial_add) },
	{ 0xc993bd44, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x8c8c9b26, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x8b082cfa, __VMLINUX_SYMBOL_STR(cnxthsf_7800206x86_64oem_OsIoMemWritew) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hsfosspec,hsfengine,hsfserial";

MODULE_ALIAS("pci:v000014F1d00002F80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F81sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F82sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00002F83sv*sd*bc*sc*i*");
