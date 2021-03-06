#ifdef ZZ_INCLUDE_CODE
ZZ_1C478:
	SP -= 48;
	EMU_Write32(SP + 24,S0); //+ 0x18
	S0 = A0;
	EMU_Write32(SP + 32,S2); //+ 0x20
	S2 = A2;
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S3 = EMU_ReadU32(S0 + 208); //+ 0xD0
	V0 = 0xFF;
	if (A1 == V0)
	{
		S4 = A3;
		ZZ_CLOCKCYCLES(13,0x8001C4C0);
		goto ZZ_1C478_48;
	}
	S4 = A3;
	V0 = EMU_ReadU32(S0 + 172); //+ 0xAC
	V1 = 0x10000000;
	V0 &= V1;
	if (!V0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(18,0x8001C4C8);
		goto ZZ_1C478_50;
	}
	A2 = R0;
	ZZ_CLOCKCYCLES(18,0x8001C4C0);
ZZ_1C478_48:
	V0 = -14;
	ZZ_CLOCKCYCLES(2,0x8001C734);
	goto ZZ_1C478_2BC;
ZZ_1C478_50:
	V0 = EMU_ReadU32(S0 + 12); //+ 0xC
	EMU_Write32(S0 + 28,A1); //+ 0x1C
	V1 = EMU_ReadU32(V0 + 32); //+ 0x20
	V0 = A1 << 4;
	S1 = V1 + V0;
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	V1 = EMU_ReadU32(S0 + 16); //+ 0x10
	EMU_Write32(S0 + 176,V0); //+ 0xB0
	A0 = EMU_ReadU16(S1 + 8); //+ 0x8
	V0 = EMU_ReadU32(V1 + 24); //+ 0x18
	A1 = 0x1;
	A0 <<= 2;
	RA = 0x8001C500; //ZZ_1C478_88
	A0 += V0;
	ZZ_CLOCKCYCLES(14,0x80014364);
	goto ZZ_14364;
ZZ_1C478_88:
	A1 = V0;
	EMU_Write32(S0 + 20,A1); //+ 0x14
	A0 = EMU_ReadU16(S1 + 14); //+ 0xE
	V0 = 0x3FFF;
	V1 = A0 & 0xFFFF;
	if (V1 == V0)
	{
		V0 = A0 & 0x4000;
		ZZ_CLOCKCYCLES(7,0x8001C54C);
		goto ZZ_1C478_D4;
	}
	V0 = A0 & 0x4000;
	if (!V0)
	{
		V0 = A0 & 0x3FFF;
		ZZ_CLOCKCYCLES(9,0x8001C530);
		goto ZZ_1C478_B8;
	}
	V0 = A0 & 0x3FFF;
	V1 = EMU_ReadU32(A1 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(12,0x8001C540);
	goto ZZ_1C478_C8;
ZZ_1C478_B8:
	V0 = EMU_ReadU32(S0 + 12); //+ 0xC
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = A0 & 0x3FFF;
	ZZ_CLOCKCYCLES(4,0x8001C540);
ZZ_1C478_C8:
	V0 <<= 2;
	V1 += V0;
	ZZ_CLOCKCYCLES(3,0x8001C550);
	goto ZZ_1C478_D8;
ZZ_1C478_D4:
	V1 = R0;
	ZZ_CLOCKCYCLES(1,0x8001C550);
ZZ_1C478_D8:
	EMU_Write32(S0 + 192,V1); //+ 0xC0
	A0 = EMU_ReadU16(S1 + 10); //+ 0xA
	V0 = 0x3FFF;
	V1 = A0 & 0xFFFF;
	if (V1 == V0)
	{
		V0 = A0 & 0x4000;
		ZZ_CLOCKCYCLES(6,0x8001C598);
		goto ZZ_1C478_120;
	}
	V0 = A0 & 0x4000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001C57C);
		goto ZZ_1C478_104;
	}
	V0 = EMU_ReadU32(S0 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(11,0x8001C580);
	goto ZZ_1C478_108;
ZZ_1C478_104:
	V0 = EMU_ReadU32(S0 + 12); //+ 0xC
	ZZ_CLOCKCYCLES(1,0x8001C580);
ZZ_1C478_108:
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = A0 & 0x3FFF;
	V0 <<= 2;
	V1 += V0;
	ZZ_CLOCKCYCLES(6,0x8001C59C);
	goto ZZ_1C478_124;
ZZ_1C478_120:
	V1 = R0;
	ZZ_CLOCKCYCLES(1,0x8001C59C);
ZZ_1C478_124:
	EMU_Write32(S0 + 204,V1); //+ 0xCC
	A0 = EMU_ReadU16(S1 + 12); //+ 0xC
	V0 = 0x3FFF;
	V1 = A0 & 0xFFFF;
	if (V1 == V0)
	{
		V0 = A0 & 0x4000;
		ZZ_CLOCKCYCLES(6,0x8001C5E4);
		goto ZZ_1C478_16C;
	}
	V0 = A0 & 0x4000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001C5C8);
		goto ZZ_1C478_150;
	}
	V0 = EMU_ReadU32(S0 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(11,0x8001C5CC);
	goto ZZ_1C478_154;
ZZ_1C478_150:
	V0 = EMU_ReadU32(S0 + 12); //+ 0xC
	ZZ_CLOCKCYCLES(1,0x8001C5CC);
ZZ_1C478_154:
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = A0 & 0x3FFF;
	V0 <<= 2;
	V0 += V1;
	ZZ_CLOCKCYCLES(6,0x8001C5E8);
	goto ZZ_1C478_170;
ZZ_1C478_16C:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x8001C5E8);
ZZ_1C478_170:
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	EMU_Write32(S0 + 200,V0); //+ 0xC8
	V0 = S0 + 64;
	EMU_Write32(S0 + 208,R0); //+ 0xD0
	EMU_Write32(S0 + 196,V0); //+ 0xC4
	V0 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 12); //+ 0xC
	A0 = 0x20000;
	V0 <<= 2;
	V0 += 64;
	V0 += S0;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V1 = EMU_ReadU32(S1);
	A0 |= 0x20;
	A1 = R0;
	V0 |= A0;
	EMU_Write32(S0 + 168,V0); //+ 0xA8
	if ((int32_t)S2 <= 0)
	{
		EMU_Write32(S0 + 256,V1); //+ 0x100
		ZZ_CLOCKCYCLES(21,0x8001C668);
		goto ZZ_1C478_1F0;
	}
	EMU_Write32(S0 + 256,V1); //+ 0x100
	A3 = S4;
	ZZ_CLOCKCYCLES(22,0x8001C640);
ZZ_1C478_1C8:
	V1 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 = V1 + 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	V0 = EMU_ReadU32(A3);
	A1 += 1;
	EMU_Write32(V1,V0);
	V0 = (int32_t)A1 < (int32_t)S2;
	if (V0)
	{
		A3 += 4;
		ZZ_CLOCKCYCLES(10,0x8001C640);
		goto ZZ_1C478_1C8;
	}
	A3 += 4;
	ZZ_CLOCKCYCLES(10,0x8001C668);
ZZ_1C478_1F0:
	A0 = S0;
	A1 = S2;
	RA = 0x8001C678; //ZZ_1C478_200
	A2 = 0xFFFF;
	ZZ_CLOCKCYCLES(4,0x8001C758);
	goto ZZ_1C758;
ZZ_1C478_200:
	if (!S3)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(2,0x8001C6B8);
		goto ZZ_1C478_240;
	}
	A0 = S0;
	A1 = R0;
	RA = 0x8001C68C; //ZZ_1C478_214
	A2 = 0xFFFF;
	ZZ_CLOCKCYCLES(5,0x8001C758);
	goto ZZ_1C758;
ZZ_1C478_214:
	EMU_Write32(S0 + 192,S3); //+ 0xC0
	A0 = S0;
	A1 = 0x13;
	RA = 0x8001C6A0; //ZZ_1C478_228
	A2 = R0;
	ZZ_CLOCKCYCLES(5,0x8003A2AC);
	goto ZZ_3A2AC;
ZZ_1C478_228:
	A1 = V0;
	V0 = (int32_t)A1 < -254;
	if (V0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(4,0x8001C6CC);
		goto ZZ_1C478_254;
	}
	V0 = A1;
	ZZ_CLOCKCYCLES(6,0x8001C734);
	goto ZZ_1C478_2BC;
ZZ_1C478_240:
	V1 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 = V1 + 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	EMU_Write32(V1,R0);
	ZZ_CLOCKCYCLES(5,0x8001C6CC);
ZZ_1C478_254:
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12804); //+ 0xFFFFCDFC
	V1 = EMU_ReadU32(S0 + 200); //+ 0xC8
	if (!V1)
	{
		EMU_Write32(S0 + 224,V0); //+ 0xE0
		ZZ_CLOCKCYCLES(6,0x8001C730);
		goto ZZ_1C478_2B8;
	}
	EMU_Write32(S0 + 224,V0); //+ 0xE0
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12808); //+ 0xFFFFCDF8
	if (S0 != V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(11,0x8001C734);
		goto ZZ_1C478_2BC;
	}
	V0 = -255;
	A0 = S0;
	A1 = R0;
	RA = 0x8001C708; //ZZ_1C478_290
	A2 = 0xFFFF;
	ZZ_CLOCKCYCLES(15,0x8001C758);
	goto ZZ_1C758;
ZZ_1C478_290:
	V0 = EMU_ReadU32(S0 + 200); //+ 0xC8
	A0 = S0;
	A1 = 0x3;
	A2 = R0;
	RA = 0x8001C720; //ZZ_1C478_2A8
	EMU_Write32(A0 + 192,V0); //+ 0xC0
	ZZ_CLOCKCYCLES(6,0x8003A2AC);
	goto ZZ_3A2AC;
ZZ_1C478_2A8:
	A1 = V0;
	V0 = (int32_t)A1 < -254;
	if (!V0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(4,0x8001C734);
		goto ZZ_1C478_2BC;
	}
	V0 = A1;
	ZZ_CLOCKCYCLES(4,0x8001C730);
ZZ_1C478_2B8:
	V0 = -255;
	ZZ_CLOCKCYCLES(1,0x8001C734);
ZZ_1C478_2BC:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80039358,ZZ_392A4_B4);
	ZZ_JUMPREGISTER(0x8001CFCC,ZZ_1CD48_284);
	ZZ_JUMPREGISTER(0x80019CC8,ZZ_19AB4_214);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001C478,0x8001C4C0,ZZ_1C478);
ZZ_MARK_TARGET(0x8001C4C0,0x8001C4C8,ZZ_1C478_48);
ZZ_MARK_TARGET(0x8001C4C8,0x8001C500,ZZ_1C478_50);
ZZ_MARK_TARGET(0x8001C500,0x8001C530,ZZ_1C478_88);
ZZ_MARK_TARGET(0x8001C530,0x8001C540,ZZ_1C478_B8);
ZZ_MARK_TARGET(0x8001C540,0x8001C54C,ZZ_1C478_C8);
ZZ_MARK_TARGET(0x8001C54C,0x8001C550,ZZ_1C478_D4);
ZZ_MARK_TARGET(0x8001C550,0x8001C57C,ZZ_1C478_D8);
ZZ_MARK_TARGET(0x8001C57C,0x8001C580,ZZ_1C478_104);
ZZ_MARK_TARGET(0x8001C580,0x8001C598,ZZ_1C478_108);
ZZ_MARK_TARGET(0x8001C598,0x8001C59C,ZZ_1C478_120);
ZZ_MARK_TARGET(0x8001C59C,0x8001C5C8,ZZ_1C478_124);
ZZ_MARK_TARGET(0x8001C5C8,0x8001C5CC,ZZ_1C478_150);
ZZ_MARK_TARGET(0x8001C5CC,0x8001C5E4,ZZ_1C478_154);
ZZ_MARK_TARGET(0x8001C5E4,0x8001C5E8,ZZ_1C478_16C);
ZZ_MARK_TARGET(0x8001C5E8,0x8001C640,ZZ_1C478_170);
ZZ_MARK_TARGET(0x8001C640,0x8001C668,ZZ_1C478_1C8);
ZZ_MARK_TARGET(0x8001C668,0x8001C678,ZZ_1C478_1F0);
ZZ_MARK_TARGET(0x8001C678,0x8001C68C,ZZ_1C478_200);
ZZ_MARK_TARGET(0x8001C68C,0x8001C6A0,ZZ_1C478_214);
ZZ_MARK_TARGET(0x8001C6A0,0x8001C6B8,ZZ_1C478_228);
ZZ_MARK_TARGET(0x8001C6B8,0x8001C6CC,ZZ_1C478_240);
ZZ_MARK_TARGET(0x8001C6CC,0x8001C708,ZZ_1C478_254);
ZZ_MARK_TARGET(0x8001C708,0x8001C720,ZZ_1C478_290);
ZZ_MARK_TARGET(0x8001C720,0x8001C730,ZZ_1C478_2A8);
ZZ_MARK_TARGET(0x8001C730,0x8001C734,ZZ_1C478_2B8);
ZZ_MARK_TARGET(0x8001C734,0x8001C758,ZZ_1C478_2BC);
