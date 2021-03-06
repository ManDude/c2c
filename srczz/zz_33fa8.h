#ifdef ZZ_INCLUDE_CODE
ZZ_33FA8:
	V1 = EMU_ReadU32(GP + 544); //+ 0x220
	SP -= 40;
	V0 = 0x3;
	EMU_Write32(SP + 36,RA); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 24,S0); //+ 0x18
	EMU_Write16(GP + 368,A0); //+ 0x170
	if (V1 != V0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(10,0x80034018);
		goto ZZ_33FA8_70;
	}
	S0 = R0;
	V1 = EMU_ReadS16(GP + 380); //+ 0x17C
	V0 = A0 << 16;
	if ((int32_t)V1 <= 0)
	{
		A2 = (int32_t)V0 >> 23;
		ZZ_CLOCKCYCLES(14,0x80034018);
		goto ZZ_33FA8_70;
	}
	A2 = (int32_t)V0 >> 23;
	S2 = A2;
	S1 = R0;
	ZZ_CLOCKCYCLES(16,0x80033FE8);
ZZ_33FA8_40:
	A0 = EMU_ReadS16(GP + 616); //+ 0x268
	AT = 0x80060000;
	AT += S1;
	A1 = EMU_ReadS16(AT - 152); //+ 0xFFFFFF68
	A2 = S2;
	RA = 0x80034004; //ZZ_33FA8_5C
	A3 = S2;
	ZZ_CLOCKCYCLES(7,0x800569F8);
	goto ZZ_569F8;
ZZ_33FA8_5C:
	V0 = EMU_ReadS16(GP + 380); //+ 0x17C
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		S1 += 20;
		ZZ_CLOCKCYCLES(5,0x80033FE8);
		goto ZZ_33FA8_40;
	}
	S1 += 20;
	ZZ_CLOCKCYCLES(5,0x80034018);
ZZ_33FA8_70:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8003406C,ZZ_34034_38);
	ZZ_JUMPREGISTER(0x80033844,ZZ_337BC_88);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80033FA8,0x80033FE8,ZZ_33FA8);
ZZ_MARK_TARGET(0x80033FE8,0x80034004,ZZ_33FA8_40);
ZZ_MARK_TARGET(0x80034004,0x80034018,ZZ_33FA8_5C);
ZZ_MARK_TARGET(0x80034018,0x80034034,ZZ_33FA8_70);
