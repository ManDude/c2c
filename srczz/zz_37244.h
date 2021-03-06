#ifdef ZZ_INCLUDE_CODE
ZZ_37244:
	A3 = A0;
	V0 = A3 >> 12;
	V1 = V0 & 0x3;
	V0 = 0x2;
	if (V1 == V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(6,0x800372B8);
		goto ZZ_37244_74;
	}
	A0 = 0x1;
	V0 = V1 < 3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x80037278);
		goto ZZ_37244_34;
	}
	if (V1 == A0)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(11,0x80037294);
		goto ZZ_37244_50;
	}
	V0 = A1 << 2;
	ZZ_CLOCKCYCLES(13,0x80037350);
	goto ZZ_37244_10C;
ZZ_37244_34:
	V0 = 0x3;
	if (V1 == V0)
	{
		V0 = 0x4;
		ZZ_CLOCKCYCLES(3,0x80037318);
		goto ZZ_37244_D4;
	}
	V0 = 0x4;
	if (V1 == V0)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(5,0x800372E8);
		goto ZZ_37244_A4;
	}
	V0 = A1 << 2;
	ZZ_CLOCKCYCLES(7,0x80037350);
	goto ZZ_37244_10C;
ZZ_37244_50:
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25636); //+ 0xFFFF9BDC
	V0 &= 0xFFF;
	ZZ_CLOCKCYCLES(9,0x800372E0);
	goto ZZ_37244_9C;
ZZ_37244_74:
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	V0 &= 0xFFF;
	ZZ_CLOCKCYCLES(10,0x800372E0);
ZZ_37244_9C:
	A0 = V0 & A3;
	ZZ_CLOCKCYCLES(2,0x80037350);
	goto ZZ_37244_10C;
ZZ_37244_A4:
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V1 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25628); //+ 0xFFFF9BE4
	A0 = A3 & 0xFFF;
	ZZ_CLOCKCYCLES(12,0x80037348);
	goto ZZ_37244_104;
ZZ_37244_D4:
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V1 = EMU_ReadU32(AT - 25636); //+ 0xFFFF9BDC
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25624); //+ 0xFFFF9BE8
	A0 = A3 & 0xFFF;
	ZZ_CLOCKCYCLES(12,0x80037348);
ZZ_37244_104:
	V1 |= V0;
	A0 &= V1;
	ZZ_CLOCKCYCLES(2,0x80037350);
ZZ_37244_10C:
	if (A0)
	{
		V0 = A3 >> 20;
		ZZ_CLOCKCYCLES(2,0x80037360);
		goto ZZ_37244_11C;
	}
	V0 = A3 >> 20;
	V0 &= 0x1;
	ZZ_CLOCKCYCLES(4,0x800376D0);
	goto ZZ_37244_48C;
ZZ_37244_11C:
	V0 = A3 >> 16;
	A2 = V0 & 0xF;
	V0 = A3 >> 14;
	V1 = V0 & 0x3;
	V0 = 0x2;
	if (V1 == V0)
	{
		V0 = V1 < 3;
		ZZ_CLOCKCYCLES(7,0x80037504);
		goto ZZ_37244_2C0;
	}
	V0 = V1 < 3;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(9,0x80037394);
		goto ZZ_37244_150;
	}
	V0 = 0x1;
	if (V1 == V0)
	{
		V0 = 0x9;
		ZZ_CLOCKCYCLES(11,0x800373A8);
		goto ZZ_37244_164;
	}
	V0 = 0x9;
	V0 = 0x100000;
	ZZ_CLOCKCYCLES(13,0x800376BC);
	goto ZZ_37244_478;
ZZ_37244_150:
	V0 = V1 < 5;
	if (!V0)
	{
		V0 = 0x100000;
		ZZ_CLOCKCYCLES(3,0x800376BC);
		goto ZZ_37244_478;
	}
	V0 = 0x100000;
	V0 = A1 << 2;
	ZZ_CLOCKCYCLES(5,0x80037628);
	goto ZZ_37244_3E4;
ZZ_37244_164:
	if (A2 == V0)
	{
		V0 = (int32_t)A2 < 9;
		ZZ_CLOCKCYCLES(2,0x800373DC);
		goto ZZ_37244_198;
	}
	V0 = (int32_t)A2 < 9;
	if (V0)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(4,0x80037478);
		goto ZZ_37244_234;
	}
	V0 = A1 << 2;
	V0 = 0xA;
	if (A2 == V0)
	{
		V0 = 0xB;
		ZZ_CLOCKCYCLES(7,0x80037404);
		goto ZZ_37244_1C0;
	}
	V0 = 0xB;
	if (A2 == V0)
	{
		V0 = 0xC;
		ZZ_CLOCKCYCLES(9,0x8003742C);
		goto ZZ_37244_1E8;
	}
	V0 = 0xC;
	if (A2 == V0)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(11,0x80037454);
		goto ZZ_37244_210;
	}
	V0 = A1 << 2;
	V0 += A1;
	ZZ_CLOCKCYCLES(13,0x8003747C);
	goto ZZ_37244_238;
ZZ_37244_198:
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25636); //+ 0xFFFF9BDC
	A0 = V0 & 0x1000;
	ZZ_CLOCKCYCLES(10,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_1C0:
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25636); //+ 0xFFFF9BDC
	A0 = V0 & 0x2000;
	ZZ_CLOCKCYCLES(10,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_1E8:
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25636); //+ 0xFFFF9BDC
	A0 = V0 & 0x4000;
	ZZ_CLOCKCYCLES(10,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_210:
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25636); //+ 0xFFFF9BDC
	A0 = V0 & 0x8000;
	ZZ_CLOCKCYCLES(9,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_234:
	V0 += A1;
	ZZ_CLOCKCYCLES(1,0x8003747C);
ZZ_37244_238:
	V0 <<= 2;
	V0 = V0 - A1;
	A1 = V0 << 2;
	AT = 0x80070000;
	AT += A1;
	V1 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	V1 &= 0xF000;
	V1 >>= 12;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 18728); //+ 0xFFFFB6D8
	if (A2 != V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(18,0x800376B8);
		goto ZZ_37244_474;
	}
	A0 = R0;
	AT = 0x80070000;
	AT += A1;
	V0 = EMU_ReadU32(AT - 25628); //+ 0xFFFF9BE4
	V0 &= 0xF000;
	V0 >>= 12;
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	AT = 0x80060000;
	AT += V1;
	V0 = EMU_ReadU32(AT - 18728); //+ 0xFFFFB6D8
	V0 ^= A2;
	A0 = R0 < V0;
	ZZ_CLOCKCYCLES(34,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_2C0:
	V0 = 0x9;
	if (A2 == V0)
	{
		V0 = (int32_t)A2 < 9;
		ZZ_CLOCKCYCLES(3,0x8003753C);
		goto ZZ_37244_2F8;
	}
	V0 = (int32_t)A2 < 9;
	if (V0)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(5,0x800375D8);
		goto ZZ_37244_394;
	}
	V0 = A1 << 2;
	V0 = 0xA;
	if (A2 == V0)
	{
		V0 = 0xB;
		ZZ_CLOCKCYCLES(8,0x80037564);
		goto ZZ_37244_320;
	}
	V0 = 0xB;
	if (A2 == V0)
	{
		V0 = 0xC;
		ZZ_CLOCKCYCLES(10,0x8003758C);
		goto ZZ_37244_348;
	}
	V0 = 0xC;
	if (A2 == V0)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(12,0x800375B4);
		goto ZZ_37244_370;
	}
	V0 = A1 << 2;
	V0 += A1;
	ZZ_CLOCKCYCLES(14,0x800375DC);
	goto ZZ_37244_398;
ZZ_37244_2F8:
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	A0 = V0 & 0x1000;
	ZZ_CLOCKCYCLES(10,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_320:
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	A0 = V0 & 0x2000;
	ZZ_CLOCKCYCLES(10,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_348:
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	A0 = V0 & 0x4000;
	ZZ_CLOCKCYCLES(10,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_370:
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	A0 = V0 & 0x8000;
	ZZ_CLOCKCYCLES(9,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_394:
	V0 += A1;
	ZZ_CLOCKCYCLES(1,0x800375DC);
ZZ_37244_398:
	V0 <<= 2;
	V0 = V0 - A1;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V1 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	V1 &= 0xF000;
	V1 >>= 12;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 18728); //+ 0xFFFFB6D8
	V0 ^= A2;
	A0 = V0 < 1;
	ZZ_CLOCKCYCLES(19,0x800376B8);
	goto ZZ_37244_474;
ZZ_37244_3E4:
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	A2 = V0 << 2;
	AT = 0x80070000;
	AT += A2;
	V1 = EMU_ReadU32(AT - 25632); //+ 0xFFFF9BE0
	V1 &= 0xF000;
	V1 >>= 12;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	AT = 0x80060000;
	AT += V0;
	V1 = EMU_ReadU32(AT - 18728); //+ 0xFFFFB6D8
	V0 = A3 >> 16;
	A1 = V0 & 0xF;
	if (A1 == V1)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(20,0x800376B4);
		goto ZZ_37244_470;
	}
	A0 = R0;
	AT = 0x80070000;
	AT += A2;
	V0 = EMU_ReadU32(AT - 25628); //+ 0xFFFF9BE4
	V0 &= 0xF000;
	V0 >>= 12;
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	AT = 0x80060000;
	AT += V1;
	V0 = EMU_ReadU32(AT - 18728); //+ 0xFFFFB6D8
	if (A1 != V0)
	{
		V0 = 0x100000;
		ZZ_CLOCKCYCLES(35,0x800376BC);
		goto ZZ_37244_478;
	}
	V0 = 0x100000;
	ZZ_CLOCKCYCLES(35,0x800376B4);
ZZ_37244_470:
	A0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x800376B8);
ZZ_37244_474:
	V0 = 0x100000;
	ZZ_CLOCKCYCLES(1,0x800376BC);
ZZ_37244_478:
	V0 &= A3;
	if (!V0)
	{
		V0 = A0;
		ZZ_CLOCKCYCLES(3,0x800376D0);
		goto ZZ_37244_48C;
	}
	V0 = A0;
	A0 = A0 < 1;
	V0 = A0;
	ZZ_CLOCKCYCLES(5,0x800376D0);
ZZ_37244_48C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8003A7BC,ZZ_3A2AC_510);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80037244,0x80037278,ZZ_37244);
ZZ_MARK_TARGET(0x80037278,0x80037294,ZZ_37244_34);
ZZ_MARK_TARGET(0x80037294,0x800372B8,ZZ_37244_50);
ZZ_MARK_TARGET(0x800372B8,0x800372E0,ZZ_37244_74);
ZZ_MARK_TARGET(0x800372E0,0x800372E8,ZZ_37244_9C);
ZZ_MARK_TARGET(0x800372E8,0x80037318,ZZ_37244_A4);
ZZ_MARK_TARGET(0x80037318,0x80037348,ZZ_37244_D4);
ZZ_MARK_TARGET(0x80037348,0x80037350,ZZ_37244_104);
ZZ_MARK_TARGET(0x80037350,0x80037360,ZZ_37244_10C);
ZZ_MARK_TARGET(0x80037360,0x80037394,ZZ_37244_11C);
ZZ_MARK_TARGET(0x80037394,0x800373A8,ZZ_37244_150);
ZZ_MARK_TARGET(0x800373A8,0x800373DC,ZZ_37244_164);
ZZ_MARK_TARGET(0x800373DC,0x80037404,ZZ_37244_198);
ZZ_MARK_TARGET(0x80037404,0x8003742C,ZZ_37244_1C0);
ZZ_MARK_TARGET(0x8003742C,0x80037454,ZZ_37244_1E8);
ZZ_MARK_TARGET(0x80037454,0x80037478,ZZ_37244_210);
ZZ_MARK_TARGET(0x80037478,0x8003747C,ZZ_37244_234);
ZZ_MARK_TARGET(0x8003747C,0x80037504,ZZ_37244_238);
ZZ_MARK_TARGET(0x80037504,0x8003753C,ZZ_37244_2C0);
ZZ_MARK_TARGET(0x8003753C,0x80037564,ZZ_37244_2F8);
ZZ_MARK_TARGET(0x80037564,0x8003758C,ZZ_37244_320);
ZZ_MARK_TARGET(0x8003758C,0x800375B4,ZZ_37244_348);
ZZ_MARK_TARGET(0x800375B4,0x800375D8,ZZ_37244_370);
ZZ_MARK_TARGET(0x800375D8,0x800375DC,ZZ_37244_394);
ZZ_MARK_TARGET(0x800375DC,0x80037628,ZZ_37244_398);
ZZ_MARK_TARGET(0x80037628,0x800376B4,ZZ_37244_3E4);
ZZ_MARK_TARGET(0x800376B4,0x800376B8,ZZ_37244_470);
ZZ_MARK_TARGET(0x800376B8,0x800376BC,ZZ_37244_474);
ZZ_MARK_TARGET(0x800376BC,0x800376D0,ZZ_37244_478);
ZZ_MARK_TARGET(0x800376D0,0x800376D8,ZZ_37244_48C);
