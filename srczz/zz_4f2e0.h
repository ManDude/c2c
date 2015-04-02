#ifdef ZZ_INCLUDE_CODE
ZZ_4F2E0:
	GTE_SetDataRegister(GTE_DREG_VXY0,EMU_ReadU32(A0));
	GTE_SetDataRegister(GTE_DREG_VZ0,EMU_ReadU32(A0 + 4)); //+ 0x4
	GTE_Execute(4718610);
	EMU_Write32(A1,GTE_GetDataRegister(GTE_DREG_MAC1));
	EMU_Write32(A1 + 4,GTE_GetDataRegister(GTE_DREG_MAC2)); //+ 0x4
	EMU_Write32(A1 + 8,GTE_GetDataRegister(GTE_DREG_MAC3)); //+ 0x8
	V0 = GTE_GetControlRegister(GTE_CREG_FLAG);
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A2,V0);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x8001EF64,ZZ_1EE74_F0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F2E0,ZZ_4F2E0);
ZZ_MARK(0x8004F2E4);
ZZ_MARK(0x8004F2E8);
ZZ_MARK(0x8004F2EC);
ZZ_MARK(0x8004F2F0);
ZZ_MARK(0x8004F2F4);
ZZ_MARK(0x8004F2F8);
ZZ_MARK(0x8004F2FC);
ZZ_MARK(0x8004F300);
ZZ_MARK(0x8004F304);
