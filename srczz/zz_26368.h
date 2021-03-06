#ifdef ZZ_INCLUDE_CODE
ZZ_26368:
	SP -= 24;
	A1 = A0;
	EMU_Write32(SP + 16,RA); //+ 0x10
	V1 = EMU_ReadU32(A1);
	V0 = 0x400;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 1025;
		ZZ_CLOCKCYCLES(7,0x80026498);
		goto ZZ_26368_130;
	}
	V0 = (int32_t)V1 < 1025;
	if (!V0)
	{
		V0 = 0x100;
		ZZ_CLOCKCYCLES(9,0x800263C8);
		goto ZZ_26368_60;
	}
	V0 = 0x100;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 257;
		ZZ_CLOCKCYCLES(11,0x80026424);
		goto ZZ_26368_BC;
	}
	V0 = (int32_t)V1 < 257;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(13,0x800263AC);
		goto ZZ_26368_44;
	}
	if (!V1)
	{
		ZZ_CLOCKCYCLES(15,0x80026410);
		goto ZZ_26368_A8;
	}
	ZZ_CLOCKCYCLES(17,0x80026584);
	goto ZZ_26368_21C;
ZZ_26368_44:
	V0 = 0x200;
	if (V1 == V0)
	{
		V0 = 0x300;
		ZZ_CLOCKCYCLES(3,0x80026454);
		goto ZZ_26368_EC;
	}
	V0 = 0x300;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x80026474);
		goto ZZ_26368_10C;
	}
	ZZ_CLOCKCYCLES(7,0x80026584);
	goto ZZ_26368_21C;
ZZ_26368_60:
	V0 = 0x700;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 1793;
		ZZ_CLOCKCYCLES(3,0x80026534);
		goto ZZ_26368_1CC;
	}
	V0 = (int32_t)V1 < 1793;
	if (!V0)
	{
		V0 = 0x500;
		ZZ_CLOCKCYCLES(5,0x800263F4);
		goto ZZ_26368_8C;
	}
	V0 = 0x500;
	if (V1 == V0)
	{
		V0 = 0x600;
		ZZ_CLOCKCYCLES(7,0x800264AC);
		goto ZZ_26368_144;
	}
	V0 = 0x600;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(9,0x800264DC);
		goto ZZ_26368_174;
	}
	ZZ_CLOCKCYCLES(11,0x80026584);
	goto ZZ_26368_21C;
ZZ_26368_8C:
	V0 = 0x800;
	if (V1 == V0)
	{
		V0 = 0x900;
		ZZ_CLOCKCYCLES(3,0x80026568);
		goto ZZ_26368_200;
	}
	V0 = 0x900;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x80026598);
		goto ZZ_26368_230;
	}
	ZZ_CLOCKCYCLES(7,0x80026584);
	goto ZZ_26368_21C;
ZZ_26368_A8:
	A0 = EMU_ReadU32(A1 + 4); //+ 0x4
	RA = 0x8002641C; //ZZ_26368_B4
	A0 = (int32_t)A0 >> 8;
	ZZ_CLOCKCYCLES(3,0x800265A8);
	goto ZZ_265A8;
ZZ_26368_B4:
	ZZ_CLOCKCYCLES(2,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_BC:
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2964); //+ 0xB94
	A0 = (int32_t)V0 >> 8;
	if (V1 == A0)
	{
		ZZ_CLOCKCYCLES(6,0x80026598);
		goto ZZ_26368_230;
	}
	RA = 0x80026444; //ZZ_26368_DC
	ZZ_CLOCKCYCLES(8,0x80022480);
	goto ZZ_22480;
ZZ_26368_DC:
	RA = 0x8002644C; //ZZ_26368_E4
	ZZ_CLOCKCYCLES(2,0x800233C8);
	goto ZZ_233C8;
ZZ_26368_E4:
	ZZ_CLOCKCYCLES(2,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_EC:
	V0 = 0x80060000;
	V0 -= 17284;
	V1 = EMU_ReadU32(A1 + 4); //+ 0x4
	A0 = EMU_ReadU32(V0);
	V1 = (int32_t)V1 >> 8;
	A0 |= V1;
	EMU_Write32(V0,A0);
	ZZ_CLOCKCYCLES(8,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_10C:
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	A0 = 0x80060000;
	A0 -= 17284;
	V1 = EMU_ReadU32(A0);
	V0 = (int32_t)V0 >> 8;
	V0 = ~V0;
	V1 &= V0;
	EMU_Write32(A0,V1);
	ZZ_CLOCKCYCLES(9,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_130:
	V0 = 0x1;
	AT = 0x80060000;
	EMU_Write8(AT - 17357,V0); //+ 0xFFFFBC33
	ZZ_CLOCKCYCLES(5,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_144:
	V1 = EMU_ReadU32(A1 + 4); //+ 0x4
	A0 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V1 = 0x80060000;
	V1 -= 17280;
	V0 += V1;
	EMU_Write32(V0,A0);
	V1 = EMU_ReadU32(A1 + 12); //+ 0xC
	EMU_Write32(V0 + 4,V1); //+ 0x4
	ZZ_CLOCKCYCLES(12,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_174:
	V1 = EMU_ReadU32(A1 + 4); //+ 0x4
	V0 = V1 << 1;
	V0 += V1;
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	A2 = V0 << 2;
	V0 = 0x80060000;
	V0 -= 17268;
	if (!V1)
	{
		A0 = A2 + V0;
		ZZ_CLOCKCYCLES(10,0x80026524);
		goto ZZ_26368_1BC;
	}
	A0 = A2 + V0;
	V0 = 0x1;
	EMU_Write32(A0 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(A1 + 12); //+ 0xC
	AT = 0x80060000;
	AT += A2;
	EMU_Write32(AT - 17272,V0); //+ 0xFFFFBC88
	EMU_Write32(A0 + 4,R0); //+ 0x4
	ZZ_CLOCKCYCLES(18,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_1BC:
	V0 = -1;
	EMU_Write32(A0 + 8,V0); //+ 0x8
	EMU_Write32(A0 + 4,R0); //+ 0x4
	ZZ_CLOCKCYCLES(4,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_1CC:
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	AT = 0x80060000;
	EMU_Write32(AT - 17256,V0); //+ 0xFFFFBC98
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 = 0x1;
	AT = 0x80060000;
	EMU_Write32(AT - 17240,V0); //+ 0xFFFFBCA8
	AT = 0x80060000;
	EMU_Write32(AT - 17244,R0); //+ 0xFFFFBCA4
	AT = 0x80060000;
	EMU_Write32(AT - 17252,V1); //+ 0xFFFFBC9C
	ZZ_CLOCKCYCLES(13,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_200:
	V0 = -1;
	AT = 0x80060000;
	EMU_Write32(AT - 17240,V0); //+ 0xFFFFBCA8
	AT = 0x80060000;
	EMU_Write32(AT - 17244,R0); //+ 0xFFFFBCA4
	ZZ_CLOCKCYCLES(7,0x80026598);
	goto ZZ_26368_230;
ZZ_26368_21C:
	A1 = EMU_ReadU32(A1);
	A0 = 0x80010000;
	A0 += 1024;
	RA = 0x80026598; //ZZ_26368_230
	ZZ_CLOCKCYCLES(5,0x800494DC);
	goto ZZ_494DC;
ZZ_26368_230:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8002633C,ZZ_26310_2C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80026368,0x800263AC,ZZ_26368);
ZZ_MARK_TARGET(0x800263AC,0x800263C8,ZZ_26368_44);
ZZ_MARK_TARGET(0x800263C8,0x800263F4,ZZ_26368_60);
ZZ_MARK_TARGET(0x800263F4,0x80026410,ZZ_26368_8C);
ZZ_MARK_TARGET(0x80026410,0x8002641C,ZZ_26368_A8);
ZZ_MARK_TARGET(0x8002641C,0x80026424,ZZ_26368_B4);
ZZ_MARK_TARGET(0x80026424,0x80026444,ZZ_26368_BC);
ZZ_MARK_TARGET(0x80026444,0x8002644C,ZZ_26368_DC);
ZZ_MARK_TARGET(0x8002644C,0x80026454,ZZ_26368_E4);
ZZ_MARK_TARGET(0x80026454,0x80026474,ZZ_26368_EC);
ZZ_MARK_TARGET(0x80026474,0x80026498,ZZ_26368_10C);
ZZ_MARK_TARGET(0x80026498,0x800264AC,ZZ_26368_130);
ZZ_MARK_TARGET(0x800264AC,0x800264DC,ZZ_26368_144);
ZZ_MARK_TARGET(0x800264DC,0x80026524,ZZ_26368_174);
ZZ_MARK_TARGET(0x80026524,0x80026534,ZZ_26368_1BC);
ZZ_MARK_TARGET(0x80026534,0x80026568,ZZ_26368_1CC);
ZZ_MARK_TARGET(0x80026568,0x80026584,ZZ_26368_200);
ZZ_MARK_TARGET(0x80026584,0x80026598,ZZ_26368_21C);
ZZ_MARK_TARGET(0x80026598,0x800265A8,ZZ_26368_230);
