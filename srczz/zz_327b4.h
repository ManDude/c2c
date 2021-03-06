#ifdef ZZ_INCLUDE_CODE
ZZ_327B4:
	SP -= 64;
	V0 = 0x1;
	A0 = R0;
	A1 = -9;
	V1 = 0x80060000;
	V1 -= 2168;
	EMU_Write32(SP + 60,RA); //+ 0x3C
	EMU_Write32(SP + 56,S0); //+ 0x38
	EMU_Write32(GP + 204,V0); //+ 0xCC
	ZZ_CLOCKCYCLES(9,0x800327D8);
ZZ_327B4_24:
	V0 = EMU_ReadU32(V1);
	A0 += 1;
	V0 &= A1;
	EMU_Write32(V1,V0);
	V0 = (int32_t)A0 < 24;
	if (V0)
	{
		V1 += 80;
		ZZ_CLOCKCYCLES(7,0x800327D8);
		goto ZZ_327B4_24;
	}
	V1 += 80;
	RA = 0x800327FC; //ZZ_327B4_48
	S0 = 0x3FFF;
	ZZ_CLOCKCYCLES(9,0x80052FC4);
	goto ZZ_52FC4;
ZZ_327B4_48:
	A0 = 0x80060000;
	A0 -= 112;
	A1 = 0x1;
	RA = 0x80032810; //ZZ_327B4_5C
	A2 = 0x2;
	ZZ_CLOCKCYCLES(5,0x800565C8);
	goto ZZ_565C8;
ZZ_327B4_5C:
	A1 = 0x80060000;
	A1 -= 2652;
	RA = 0x80032820; //ZZ_327B4_6C
	A0 = R0;
	ZZ_CLOCKCYCLES(4,0x8004F530);
	goto ZZ_4F530;
ZZ_327B4_6C:
	A0 = SP + 16;
	V0 = 0x3;
	EMU_Write32(SP + 16,V0); //+ 0x10
	EMU_Write16(SP + 20,S0); //+ 0x14
	RA = 0x80032838; //ZZ_327B4_84
	EMU_Write16(SP + 22,S0); //+ 0x16
	ZZ_CLOCKCYCLES(6,0x80051670);
	goto ZZ_51670;
ZZ_327B4_84:
	RA = 0x80032840; //ZZ_327B4_8C
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x80051590);
	goto ZZ_51590;
ZZ_327B4_8C:
	RA = 0x80032848; //ZZ_327B4_94
	ZZ_CLOCKCYCLES(2,0x800326B8);
	goto ZZ_326B8;
ZZ_327B4_94:
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12656); //+ 0xFFFFCE90
	A0 = V0 << 14;
	A0 = A0 - V0;
	A0 <<= 8;
	RA = 0x80032868; //ZZ_327B4_B4
	A0 = (int32_t)A0 >> 16;
	ZZ_CLOCKCYCLES(8,0x800328DC);
	goto ZZ_328DC;
ZZ_327B4_B4:
	A0 = 0x7F;
	EMU_Write16(GP + 384,S0); //+ 0x180
	EMU_Write16(GP + 388,R0); //+ 0x184
	RA = 0x8003287C; //ZZ_327B4_C8
	A1 = 0x7F;
	ZZ_CLOCKCYCLES(5,0x80054E14);
	goto ZZ_54E14;
ZZ_327B4_C8:
	EMU_Write32(GP + 396,R0); //+ 0x18C
	RA = EMU_ReadU32(SP + 60); //+ 0x3C
	S0 = EMU_ReadU32(SP + 56); //+ 0x38
	SP += 64;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80014FC8,ZZ_14D6C_25C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800327B4,0x800327D8,ZZ_327B4);
ZZ_MARK_TARGET(0x800327D8,0x800327FC,ZZ_327B4_24);
ZZ_MARK_TARGET(0x800327FC,0x80032810,ZZ_327B4_48);
ZZ_MARK_TARGET(0x80032810,0x80032820,ZZ_327B4_5C);
ZZ_MARK_TARGET(0x80032820,0x80032838,ZZ_327B4_6C);
ZZ_MARK_TARGET(0x80032838,0x80032840,ZZ_327B4_84);
ZZ_MARK_TARGET(0x80032840,0x80032848,ZZ_327B4_8C);
ZZ_MARK_TARGET(0x80032848,0x80032868,ZZ_327B4_94);
ZZ_MARK_TARGET(0x80032868,0x8003287C,ZZ_327B4_B4);
ZZ_MARK_TARGET(0x8003287C,0x80032894,ZZ_327B4_C8);
