#ifdef ZZ_INCLUDE_CODE
ZZ_36B58:
	SP -= 32;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = R0;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = 0x6F4;
	EMU_Write32(SP + 24,RA); //+ 0x18
	ZZ_CLOCKCYCLES(6,0x80036B70);
ZZ_36B58_18:
	A0 = EMU_ReadU32(GP + 232); //+ 0xE8
	S1 += 1;
	RA = 0x80036B80; //ZZ_36B58_28
	A0 += S0;
	ZZ_CLOCKCYCLES(4,0x80036BA4);
	goto ZZ_36BA4;
ZZ_36B58_28:
	V0 = (int32_t)S1 < 4;
	if (V0)
	{
		S0 += 676;
		ZZ_CLOCKCYCLES(3,0x80036B70);
		goto ZZ_36B58_18;
	}
	S0 += 676;
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80036704,ZZ_366AC_58);
	ZZ_JUMPREGISTER(0x80036340,ZZ_3631C_24);
	ZZ_JUMPREGISTER(0x80034DE4,ZZ_34D74_70);
	ZZ_JUMPREGISTER(0x800353B0,ZZ_34F00_4B0);
	ZZ_JUMPREGISTER(0x80036CFC,ZZ_36C8C_70);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036B58,0x80036B70,ZZ_36B58);
ZZ_MARK_TARGET(0x80036B70,0x80036B80,ZZ_36B58_18);
ZZ_MARK_TARGET(0x80036B80,0x80036BA4,ZZ_36B58_28);
