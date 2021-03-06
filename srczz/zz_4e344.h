#ifdef ZZ_INCLUDE_CODE
ZZ_4E344:
	V0 = 0x10000000;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8056); //+ 0xFFFFE088
	A0 |= V0;
	EMU_Write32(V1,A0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8060); //+ 0xFFFFE084
	V1 = 0xFF0000;
	V0 = EMU_ReadU32(V0);
	V1 |= 0xFFFF;
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 &= V1;
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x8004DCC8,ZZ_4DB50_178);
	ZZ_JUMPREGISTER(0x8004DCDC,ZZ_4DB50_18C);
	ZZ_JUMPREGISTER(0x8004DCF4,ZZ_4DB50_1A4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004E344,0x8004E374,ZZ_4E344);
