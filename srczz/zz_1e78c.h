#ifdef ZZ_INCLUDE_CODE
ZZ_1E78C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14056); //+ 0x36E8
	V1 = A2;
	A2 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = A2 < 121;
	if (V0)
	{
		EMU_SMultiply(V1,A2);
		ZZ_CLOCKCYCLES(8,0x8001E7B4);
		goto ZZ_1E78C_28;
	}
	EMU_SMultiply(V1,A2);
	A2 = 0x78;
	EMU_SMultiply(V1,A2);
	ZZ_CLOCKCYCLES(10,0x8001E7B4);
ZZ_1E78C_28:
	V0 = LO;
	if ((int32_t)V0 >= 0)
	{
		A2 = (int32_t)V0 >> 10;
		ZZ_CLOCKCYCLES(3,0x8001E7C8);
		goto ZZ_1E78C_3C;
	}
	A2 = (int32_t)V0 >> 10;
	V0 += 1023;
	A2 = (int32_t)V0 >> 10;
	ZZ_CLOCKCYCLES(5,0x8001E7C8);
ZZ_1E78C_3C:
	V0 = A1 - A0;
	V0 <<= 20;
	V1 = (int32_t)V0 >> 20;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(5,0x8001E81C);
		goto ZZ_1E78C_90;
	}
	if ((int32_t)V1 >= 0)
	{
		T0 = V1;
		ZZ_CLOCKCYCLES(7,0x8001E7E8);
		goto ZZ_1E78C_5C;
	}
	T0 = V1;
	T0 = -T0;
	ZZ_CLOCKCYCLES(8,0x8001E7E8);
ZZ_1E78C_5C:
	if ((int32_t)A2 < 0)
	{
		V0 = (int32_t)T0 < (int32_t)A2;
		ZZ_CLOCKCYCLES(2,0x8001E800);
		goto ZZ_1E78C_74;
	}
	V0 = (int32_t)T0 < (int32_t)A2;
	if (V0)
	{
		V0 = A0 + A2;
		ZZ_CLOCKCYCLES(4,0x8001E810);
		goto ZZ_1E78C_84;
	}
	V0 = A0 + A2;
	ZZ_CLOCKCYCLES(6,0x8001E838);
	goto ZZ_1E78C_AC;
ZZ_1E78C_74:
	V0 = -A2;
	V0 = (int32_t)T0 < (int32_t)V0;
	if (!V0)
	{
		V0 = A0 + A2;
		ZZ_CLOCKCYCLES(4,0x8001E838);
		goto ZZ_1E78C_AC;
	}
	V0 = A0 + A2;
	ZZ_CLOCKCYCLES(4,0x8001E810);
ZZ_1E78C_84:
	V0 = A2 ^ V1;
	if ((int32_t)V0 < 0)
	{
		V0 = A0 + A2;
		ZZ_CLOCKCYCLES(3,0x8001E838);
		goto ZZ_1E78C_AC;
	}
	V0 = A0 + A2;
	ZZ_CLOCKCYCLES(3,0x8001E81C);
ZZ_1E78C_90:
	if (!A3)
	{
		A0 = A1;
		ZZ_CLOCKCYCLES(2,0x8001E83C);
		goto ZZ_1E78C_B0;
	}
	A0 = A1;
	V0 = EMU_ReadU32(A3 + 168); //+ 0xA8
	V0 |= 0x800;
	EMU_Write32(A3 + 168,V0); //+ 0xA8
	ZZ_CLOCKCYCLES(7,0x8001E83C);
	goto ZZ_1E78C_B0;
ZZ_1E78C_AC:
	A0 = V0 & 0xFFF;
	ZZ_CLOCKCYCLES(1,0x8001E83C);
ZZ_1E78C_B0:
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = A0;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8001DFCC,ZZ_1D860_76C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001E78C,0x8001E7B4,ZZ_1E78C);
ZZ_MARK_TARGET(0x8001E7B4,0x8001E7C8,ZZ_1E78C_28);
ZZ_MARK_TARGET(0x8001E7C8,0x8001E7E8,ZZ_1E78C_3C);
ZZ_MARK_TARGET(0x8001E7E8,0x8001E800,ZZ_1E78C_5C);
ZZ_MARK_TARGET(0x8001E800,0x8001E810,ZZ_1E78C_74);
ZZ_MARK_TARGET(0x8001E810,0x8001E81C,ZZ_1E78C_84);
ZZ_MARK_TARGET(0x8001E81C,0x8001E838,ZZ_1E78C_90);
ZZ_MARK_TARGET(0x8001E838,0x8001E83C,ZZ_1E78C_AC);
ZZ_MARK_TARGET(0x8001E83C,0x8001E844,ZZ_1E78C_B0);
