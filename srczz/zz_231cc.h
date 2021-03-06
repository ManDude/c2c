#ifdef ZZ_INCLUDE_CODE
ZZ_231CC:
	SP -= 168;
	EMU_Write32(SP + 152,S2); //+ 0x98
	S2 = A0;
	EMU_Write32(SP + 144,S0); //+ 0x90
	S0 = 0x80060000;
	S0 += 2916;
	EMU_Write32(SP + 156,S3); //+ 0x9C
	S3 = S0 + 8;
	EMU_Write32(SP + 148,S1); //+ 0x94
	S1 = 0x5;
	EMU_Write32(SP + 160,RA); //+ 0xA0
	ZZ_CLOCKCYCLES(11,0x800231F8);
ZZ_231CC_2C:
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	A2 = EMU_ReadU32(S0 + 20); //+ 0x14
	A3 = EMU_ReadU32(S0 + 44); //+ 0x2C
	A0 = SP + 32;
	A1 = SP + 128;
	EMU_Write32(SP + 128,V0); //+ 0x80
	EMU_Write32(SP + 132,V1); //+ 0x84
	EMU_Write32(SP + 136,A2); //+ 0x88
	RA = 0x80023224; //ZZ_231CC_58
	EMU_Write32(SP + 140,A3); //+ 0x8C
	ZZ_CLOCKCYCLES(11,0x80026A38);
	goto ZZ_26A38;
ZZ_231CC_58:
	V1 = 0x1;
	if (V0 != V1)
	{
		A1 = 0x4B;
		ZZ_CLOCKCYCLES(3,0x80023288);
		goto ZZ_231CC_BC;
	}
	A1 = 0x4B;
	A0 = EMU_ReadU32(SP + 32); //+ 0x20
	A1 = EMU_ReadU32(SP + 36); //+ 0x24
	A2 = EMU_ReadU32(SP + 40); //+ 0x28
	RA = 0x80023244; //ZZ_231CC_78
	A3 = R0;
	ZZ_CLOCKCYCLES(8,0x80020304);
	goto ZZ_20304;
ZZ_231CC_78:
	V0 = 0x2;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	A0 = EMU_ReadU32(SP + 36); //+ 0x24
	A1 = 0x29;
	A2 = R0;
	RA = 0x80023268; //ZZ_231CC_9C
	A3 = R0;
	ZZ_CLOCKCYCLES(9,0x800324E0);
	goto ZZ_324E0;
ZZ_231CC_9C:
	V1 = EMU_ReadU32(S0 + 36); //+ 0x24
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(4,0x800232BC);
		goto ZZ_231CC_F0;
	}
	AT = 0x80060000;
	EMU_Write8(AT - 17364,S1); //+ 0xFFFFBC2C
	ZZ_CLOCKCYCLES(8,0x800232BC);
	goto ZZ_231CC_F0;
ZZ_231CC_BC:
	A0 = EMU_ReadU32(S0 + 8); //+ 0x8
	A2 = R0;
	RA = 0x80023298; //ZZ_231CC_CC
	A3 = 0x2;
	ZZ_CLOCKCYCLES(4,0x800325CC);
	goto ZZ_325CC;
ZZ_231CC_CC:
	A0 = EMU_ReadU32(S0);
	A1 = EMU_ReadU32(S3);
	V0 -= 1;
	A2 = V0 << 8;
	RA = 0x800232B0; //ZZ_231CC_E4
	A3 = R0;
	ZZ_CLOCKCYCLES(6,0x80020304);
	goto ZZ_20304;
ZZ_231CC_E4:
	V0 = 0x5;
	AT = 0x80060000;
	EMU_Write8(AT - 17364,V0); //+ 0xFFFFBC2C
	ZZ_CLOCKCYCLES(3,0x800232BC);
ZZ_231CC_F0:
	RA = 0x800232C4; //ZZ_231CC_F8
	A0 = S2;
	ZZ_CLOCKCYCLES(2,0x80023424);
	goto ZZ_23424;
ZZ_231CC_F8:
	V0 = 0x80060000;
	V0 = EMU_ReadS8(V0 - 17364); //+ 0xFFFFBC2C
	if (V0 != S1)
	{
		ZZ_CLOCKCYCLES(5,0x800231F8);
		goto ZZ_231CC_2C;
	}
	RA = EMU_ReadU32(SP + 160); //+ 0xA0
	S3 = EMU_ReadU32(SP + 156); //+ 0x9C
	S2 = EMU_ReadU32(SP + 152); //+ 0x98
	S1 = EMU_ReadU32(SP + 148); //+ 0x94
	S0 = EMU_ReadU32(SP + 144); //+ 0x90
	SP += 168;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80027070,ZZ_26F14_15C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800231CC,0x800231F8,ZZ_231CC);
ZZ_MARK_TARGET(0x800231F8,0x80023224,ZZ_231CC_2C);
ZZ_MARK_TARGET(0x80023224,0x80023244,ZZ_231CC_58);
ZZ_MARK_TARGET(0x80023244,0x80023268,ZZ_231CC_78);
ZZ_MARK_TARGET(0x80023268,0x80023288,ZZ_231CC_9C);
ZZ_MARK_TARGET(0x80023288,0x80023298,ZZ_231CC_BC);
ZZ_MARK_TARGET(0x80023298,0x800232B0,ZZ_231CC_CC);
ZZ_MARK_TARGET(0x800232B0,0x800232BC,ZZ_231CC_E4);
ZZ_MARK_TARGET(0x800232BC,0x800232C4,ZZ_231CC_F0);
ZZ_MARK_TARGET(0x800232C4,0x800232F8,ZZ_231CC_F8);
