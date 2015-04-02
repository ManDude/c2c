#ifdef ZZ_INCLUDE_CODE
ZZ_43A8C:
	T9 = EMU_ReadU32(V1 + 292); //+ 0x124
	A0 <<= 4;
	A0 = T9 - A0;
	A0 = (int32_t)A0 >> 12;
	ZZ_JUMPREGISTER_BEGIN(RA);
	T9 = A0 + 362;
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x800401D4,ZZ_3FFAC_228);
	ZZ_JUMPREGISTER(0x80041284,ZZ_40FAC_2D8);
	ZZ_JUMPREGISTER_END();
ZZ_43A8C_18:
	if ((int32_t)T7 <= 0)
	{
		GTE_SetDataRegister(GTE_DREG_VZ0,R0);
		ZZ_CLOCKCYCLES(2,0x80044C10);
		goto ZZ_44850_3C0;
	}
	GTE_SetDataRegister(GTE_DREG_VZ0,R0);
	T4 = EMU_ReadU32(SP + 28); //+ 0x1C
	GTE_SetDataRegister(GTE_DREG_VZ1,R0);
	T6 = EMU_ReadU32(T4 + 8); //+ 0x8
	GTE_SetDataRegister(GTE_DREG_VZ2,R0);
	T7 = EMU_ReadU32(SP + 36); //+ 0x24
	S7 = EMU_ReadU32(V1 + 20); //+ 0x14
	T8 = EMU_ReadU32(SP + 44); //+ 0x2C
	T9 = 24;
	EMU_UMultiply(T8,T9);
	T8 = LO;
	EMU_UMultiply(T8,T6);
	T8 = LO;
	T4 = EMU_CheckedAdd(T4,12);
	T4 += T8;
	ZZ_CLOCKCYCLES(18,0x80043AEC);
ZZ_43A8C_60:
	T8 = EMU_ReadU16(T4 + 16); //+ 0x10
	T9 = EMU_ReadU16(T4 + 18); //+ 0x12
	A0 = EMU_ReadU16(T4 + 20); //+ 0x14
	A1 = EMU_ReadU16(T4 + 22); //+ 0x16
	T9 <<= 16;
	A1 <<= 16;
	A2 = A1 | T8;
	GTE_SetDataRegister(GTE_DREG_VXY0,A2);
	A2 = A0 | A1;
	GTE_SetDataRegister(GTE_DREG_VXY1,A2);
	A2 = T8 | T9;
	GTE_SetDataRegister(GTE_DREG_VXY2,A2);
	A2 = A0 | T9;
	GTE_Execute(2621488);
	S4 = EMU_ReadU32(T4 + 4); //+ 0x4
	S5 = EMU_ReadU32(T4 + 8); //+ 0x8
	S6 = EMU_ReadU32(T4 + 12); //+ 0xC
	EMU_Write32(S7 + 8,GTE_GetDataRegister(GTE_DREG_SXY0)); //+ 0x8
	EMU_Write32(S7 + 16,GTE_GetDataRegister(GTE_DREG_SXY1)); //+ 0x10
	EMU_Write32(S7 + 24,GTE_GetDataRegister(GTE_DREG_SXY2)); //+ 0x18
	V0 = GTE_GetDataRegister(GTE_DREG_SZ1);
	T8 = GTE_GetDataRegister(GTE_DREG_SZ2);
	T9 = GTE_GetDataRegister(GTE_DREG_SZ3);
	GTE_SetDataRegister(GTE_DREG_VXY0,A2);
	V0 += T8;
	V0 += T9;
	GTE_Execute(1572865);
	EMU_Write32(S7 + 12,S4); //+ 0xC
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	V0 >>= 5;
	V0 = T8 - V0;
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(34,0x80043B78);
		goto ZZ_43A8C_EC;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(35,0x80043B78);
ZZ_43A8C_EC:
	T8 = EMU_CheckedAdd(V0,-8188);
	if ((int32_t)T8 <= 0)
	{
		V0 += FP;
		ZZ_CLOCKCYCLES(3,0x80043B88);
		goto ZZ_43A8C_FC;
	}
	V0 += FP;
	V0 = EMU_CheckedAdd(FP,8188);
	ZZ_CLOCKCYCLES(4,0x80043B88);
ZZ_43A8C_FC:
	T8 = EMU_ReadU32(V0 + 24); //+ 0x18
	T9 = 0x9000000;
	T9 |= T8;
	EMU_Write32(S7,T9);
	EMU_Write32(S7 + 20,S5); //+ 0x14
	T8 = S7 << 8;
	T8 >>= 8;
	EMU_Write32(V0 + 24,T8); //+ 0x18
	EMU_Write32(S7 + 28,S6); //+ 0x1C
	S6 >>= 16;
	EMU_Write32(S7 + 36,S6); //+ 0x24
	T5 = EMU_ReadU32(SP + 32); //+ 0x20
	EMU_Write32(S7 + 32,GTE_GetDataRegister(GTE_DREG_SXY2)); //+ 0x20
	T8 = T5 & 0xFFFF;
	if (!T8)
	{
		T0 = EMU_ReadU32(T4);
		ZZ_CLOCKCYCLES(16,0x80043C04);
		goto ZZ_43A8C_178;
	}
	T0 = EMU_ReadU32(T4);
	A0 = EMU_ReadU32(SP + 40); //+ 0x28
	GTE_SetDataRegister(GTE_DREG_RGBC,T0);
	GTE_SetDataRegister(GTE_DREG_IR0,T8);
	T1 = A0 >> 16;
	T2 = A0 >> 8;
	T1 &= 0xFF0;
	T2 &= 0xFF0;
	T3 = A0 & 0xFF0;
	GTE_SetControlRegister(GTE_CREG_RFC,T1);
	GTE_SetControlRegister(GTE_CREG_GFC,T2);
	GTE_SetControlRegister(GTE_CREG_BFC,T3);
	GTE_Execute(7864336);
	T0 = GTE_GetDataRegister(GTE_DREG_RGB2);
	ZZ_CLOCKCYCLES(31,0x80043C04);
ZZ_43A8C_178:
	S7 = EMU_CheckedAdd(S7,40);
	EMU_Write32(S7 - 36,T0); //+ 0xFFFFFFDC
	T6 -= 1;
	if ((int32_t)T6 > 0)
	{
		T4 += 24;
		ZZ_CLOCKCYCLES(5,0x80043AEC);
		goto ZZ_43A8C_60;
	}
	T4 += 24;
	EMU_Write32(V1 + 20,S7); //+ 0x14
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x800401D4,ZZ_3FFAC_228);
	ZZ_JUMPREGISTER(0x80041284,ZZ_40FAC_2D8);
	ZZ_JUMPREGISTER_END();
ZZ_43A8C_1A8:
	T8 = EMU_ReadU32(A2 + 156); //+ 0x9C
	T9 = EMU_ReadU32(A2 + 160); //+ 0xA0
	A0 = EMU_ReadU32(A2 + 164); //+ 0xA4
	A1 = T8 >> 16;
	A2 = T8 >> 8;
	A1 &= 0xFF0;
	A2 &= 0xFF0;
	T8 &= 0xFF0;
	GTE_SetControlRegister(GTE_CREG_RFC,A1);
	GTE_SetControlRegister(GTE_CREG_GFC,A2);
	GTE_SetControlRegister(GTE_CREG_BFC,T8);
	EMU_Write32(V1 + 8,T9); //+ 0x8
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 16,A0); //+ 0x10
	ZZ_CLOCKCYCLES_JR(14);
	ZZ_JUMPREGISTER(0x800401D4,ZZ_3FFAC_228);
	ZZ_JUMPREGISTER(0x80041284,ZZ_40FAC_2D8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80043A8C,ZZ_43A8C);
ZZ_MARK(0x80043A90);
ZZ_MARK(0x80043A94);
ZZ_MARK(0x80043A98);
ZZ_MARK(0x80043A9C);
ZZ_MARK(0x80043AA0);
ZZ_MARK_TARGET(0x80043AA4,ZZ_43A8C_18);
ZZ_MARK(0x80043AA8);
ZZ_MARK(0x80043AAC);
ZZ_MARK(0x80043AB0);
ZZ_MARK(0x80043AB4);
ZZ_MARK(0x80043AB8);
ZZ_MARK(0x80043ABC);
ZZ_MARK(0x80043AC0);
ZZ_MARK(0x80043AC4);
ZZ_MARK(0x80043AC8);
ZZ_MARK(0x80043ACC);
ZZ_MARK(0x80043AD0);
ZZ_MARK(0x80043AD4);
ZZ_MARK(0x80043AD8);
ZZ_MARK(0x80043ADC);
ZZ_MARK(0x80043AE0);
ZZ_MARK(0x80043AE4);
ZZ_MARK(0x80043AE8);
ZZ_MARK_TARGET(0x80043AEC,ZZ_43A8C_60);
ZZ_MARK(0x80043AF0);
ZZ_MARK(0x80043AF4);
ZZ_MARK(0x80043AF8);
ZZ_MARK(0x80043AFC);
ZZ_MARK(0x80043B00);
ZZ_MARK(0x80043B04);
ZZ_MARK(0x80043B08);
ZZ_MARK(0x80043B0C);
ZZ_MARK(0x80043B10);
ZZ_MARK(0x80043B14);
ZZ_MARK(0x80043B18);
ZZ_MARK(0x80043B1C);
ZZ_MARK(0x80043B20);
ZZ_MARK(0x80043B24);
ZZ_MARK(0x80043B28);
ZZ_MARK(0x80043B2C);
ZZ_MARK(0x80043B30);
ZZ_MARK(0x80043B34);
ZZ_MARK(0x80043B38);
ZZ_MARK(0x80043B3C);
ZZ_MARK(0x80043B40);
ZZ_MARK(0x80043B44);
ZZ_MARK(0x80043B48);
ZZ_MARK(0x80043B4C);
ZZ_MARK(0x80043B50);
ZZ_MARK(0x80043B54);
ZZ_MARK(0x80043B58);
ZZ_MARK(0x80043B5C);
ZZ_MARK(0x80043B60);
ZZ_MARK(0x80043B64);
ZZ_MARK(0x80043B68);
ZZ_MARK(0x80043B6C);
ZZ_MARK(0x80043B70);
ZZ_MARK(0x80043B74);
ZZ_MARK_TARGET(0x80043B78,ZZ_43A8C_EC);
ZZ_MARK(0x80043B7C);
ZZ_MARK(0x80043B80);
ZZ_MARK(0x80043B84);
ZZ_MARK_TARGET(0x80043B88,ZZ_43A8C_FC);
ZZ_MARK(0x80043B8C);
ZZ_MARK(0x80043B90);
ZZ_MARK(0x80043B94);
ZZ_MARK(0x80043B98);
ZZ_MARK(0x80043B9C);
ZZ_MARK(0x80043BA0);
ZZ_MARK(0x80043BA4);
ZZ_MARK(0x80043BA8);
ZZ_MARK(0x80043BAC);
ZZ_MARK(0x80043BB0);
ZZ_MARK(0x80043BB4);
ZZ_MARK(0x80043BB8);
ZZ_MARK(0x80043BBC);
ZZ_MARK(0x80043BC0);
ZZ_MARK(0x80043BC4);
ZZ_MARK(0x80043BC8);
ZZ_MARK(0x80043BCC);
ZZ_MARK(0x80043BD0);
ZZ_MARK(0x80043BD4);
ZZ_MARK(0x80043BD8);
ZZ_MARK(0x80043BDC);
ZZ_MARK(0x80043BE0);
ZZ_MARK(0x80043BE4);
ZZ_MARK(0x80043BE8);
ZZ_MARK(0x80043BEC);
ZZ_MARK(0x80043BF0);
ZZ_MARK(0x80043BF4);
ZZ_MARK(0x80043BF8);
ZZ_MARK(0x80043BFC);
ZZ_MARK(0x80043C00);
ZZ_MARK_TARGET(0x80043C04,ZZ_43A8C_178);
ZZ_MARK(0x80043C08);
ZZ_MARK(0x80043C0C);
ZZ_MARK(0x80043C10);
ZZ_MARK(0x80043C14);
ZZ_MARK(0x80043C18);
ZZ_MARK(0x80043C1C);
ZZ_MARK(0x80043C20);
ZZ_MARK_TARGET(0x80043C34,ZZ_43A8C_1A8);
ZZ_MARK(0x80043C38);
ZZ_MARK(0x80043C3C);
ZZ_MARK(0x80043C40);
ZZ_MARK(0x80043C44);
ZZ_MARK(0x80043C48);
ZZ_MARK(0x80043C4C);
ZZ_MARK(0x80043C50);
ZZ_MARK(0x80043C54);
ZZ_MARK(0x80043C58);
ZZ_MARK(0x80043C5C);
ZZ_MARK(0x80043C60);
ZZ_MARK(0x80043C64);
ZZ_MARK(0x80043C68);
