#ifdef ZZ_INCLUDE_CODE
ZZ_278D8:
	SP -= 48;
	EMU_Write32(SP + 40,S4); //+ 0x28
	S4 = A0;
	A1 = 0x1;
	A2 = 0x1;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	RA = 0x80027904; //ZZ_278D8_2C
	EMU_Write32(SP + 24,S0); //+ 0x18
	ZZ_CLOCKCYCLES(11,0x80014364);
	goto ZZ_14364;
ZZ_278D8_2C:
	S3 = V0;
	A3 = EMU_ReadU32(S3 + 12); //+ 0xC
	V1 = R0;
	A2 = R0;
	if ((int32_t)A3 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(6,0x80027964);
		goto ZZ_278D8_8C;
	}
	S1 = R0;
	T0 = 0x2;
	A1 = S3;
	ZZ_CLOCKCYCLES(8,0x80027924);
ZZ_278D8_4C:
	A0 = EMU_ReadU32(A1 + 16); //+ 0x10
	V0 = EMU_ReadU8(A0);
	V0 >>= 6;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x80027948);
		goto ZZ_278D8_70;
	}
	V1 = A0;
	ZZ_CLOCKCYCLES(9,0x80027954);
	goto ZZ_278D8_7C;
ZZ_278D8_70:
	if (V0 != T0)
	{
		ZZ_CLOCKCYCLES(2,0x80027954);
		goto ZZ_278D8_7C;
	}
	S1 += 1;
	ZZ_CLOCKCYCLES(3,0x80027954);
ZZ_278D8_7C:
	A2 += 1;
	V0 = (int32_t)A2 < (int32_t)A3;
	if (V0)
	{
		A1 += 4;
		ZZ_CLOCKCYCLES(4,0x80027924);
		goto ZZ_278D8_4C;
	}
	A1 += 4;
	ZZ_CLOCKCYCLES(4,0x80027964);
ZZ_278D8_8C:
	if (!V1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x800279F8);
		goto ZZ_278D8_120;
	}
	V0 = R0;
	if (!S1)
	{
		ZZ_CLOCKCYCLES(4,0x800279F8);
		goto ZZ_278D8_120;
	}
	A0 = EMU_ReadU8(V1 + 1); //+ 0x1
	V0 = EMU_ReadU8(V1 + 2); //+ 0x2
	A2 = EMU_ReadU8(V1 + 3); //+ 0x3
	A0 <<= 8;
	A0 |= V0;
	V0 = EMU_ReadU8(V1 + 4); //+ 0x4
	A1 = A2 & 0x1F;
	A1 <<= 8;
	V1 = EMU_ReadU8(V1);
	A2 &= 0xE0;
	A2 >>= 3;
	A1 |= V0;
	S2 = V1 & 0x1;
	RA = 0x800279B0; //ZZ_278D8_D8
	A3 = S2;
	ZZ_CLOCKCYCLES(19,0x80027A1C);
	goto ZZ_27A1C;
ZZ_278D8_D8:
	S0 = V0;
	if (!S0)
	{
		V0 = -256;
		ZZ_CLOCKCYCLES(3,0x800279F4);
		goto ZZ_278D8_11C;
	}
	V0 = -256;
	EMU_Write32(S0,V0);
	V0 = S1 << 8;
	EMU_Write32(S0 + 20,R0); //+ 0x14
	EMU_Write32(S0 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(S4);
	EMU_Write32(S0 + 80,S3); //+ 0x50
	if (!S2)
	{
		EMU_Write32(S0 + 76,V0); //+ 0x4C
		ZZ_CLOCKCYCLES(11,0x800279EC);
		goto ZZ_278D8_114;
	}
	EMU_Write32(S0 + 76,V0); //+ 0x4C
	AT = 0x80070000;
	EMU_Write32(AT - 27152,S0); //+ 0xFFFF95F0
	RA = 0x800279EC; //ZZ_278D8_114
	A0 = S0;
	ZZ_CLOCKCYCLES(15,0x80027168);
	goto ZZ_27168;
ZZ_278D8_114:
	V0 = S0;
	ZZ_CLOCKCYCLES(2,0x800279F8);
	goto ZZ_278D8_120;
ZZ_278D8_11C:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x800279F8);
ZZ_278D8_120:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80039D14,ZZ_39CAC_68);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800278D8,0x80027904,ZZ_278D8);
ZZ_MARK_TARGET(0x80027904,0x80027924,ZZ_278D8_2C);
ZZ_MARK_TARGET(0x80027924,0x80027948,ZZ_278D8_4C);
ZZ_MARK_TARGET(0x80027948,0x80027954,ZZ_278D8_70);
ZZ_MARK_TARGET(0x80027954,0x80027964,ZZ_278D8_7C);
ZZ_MARK_TARGET(0x80027964,0x800279B0,ZZ_278D8_8C);
ZZ_MARK_TARGET(0x800279B0,0x800279EC,ZZ_278D8_D8);
ZZ_MARK_TARGET(0x800279EC,0x800279F4,ZZ_278D8_114);
ZZ_MARK_TARGET(0x800279F4,0x800279F8,ZZ_278D8_11C);
ZZ_MARK_TARGET(0x800279F8,0x80027A1C,ZZ_278D8_120);
