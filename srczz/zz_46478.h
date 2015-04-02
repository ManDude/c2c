#ifdef ZZ_INCLUDE_CODE
ZZ_46478:
	EMU_Write32(V1 + 396,RA); //+ 0x18C
	EMU_Write32(V1 + 424,T5); //+ 0x1A8
	EMU_Write32(V1 + 428,T6); //+ 0x1AC
	EMU_Write32(V1 + 432,T7); //+ 0x1B0
	EMU_Write32(V1 + 400,GTE_GetDataRegister(GTE_DREG_SXY0)); //+ 0x190
	EMU_Write32(V1 + 408,GTE_GetDataRegister(GTE_DREG_SXY1)); //+ 0x198
	EMU_Write32(V1 + 416,GTE_GetDataRegister(GTE_DREG_SXY2)); //+ 0x1A0
	EMU_Write32(V1 + 404,GTE_GetDataRegister(GTE_DREG_SZ1)); //+ 0x194
	EMU_Write32(V1 + 412,GTE_GetDataRegister(GTE_DREG_SZ2)); //+ 0x19C
	EMU_Write32(V1 + 420,GTE_GetDataRegister(GTE_DREG_SZ3)); //+ 0x1A4
	T8 = GTE_GetDataRegister(GTE_DREG_VXY0);
	T9 = GTE_GetDataRegister(GTE_DREG_VXY1);
	A0 = GTE_GetDataRegister(GTE_DREG_VXY2);
	T9 = T9 - T8;
	A0 = A0 - T8;
	T8 <<= 16;
	T9 <<= 16;
	A0 <<= 16;
	T8 = (int32_t)T8 >> 13;
	T9 = (int32_t)T9 >> 16;
	A0 = (int32_t)A0 >> 16;
	EMU_Write32(V1 + 272,T8); //+ 0x110
	EMU_Write32(V1 + 276,T8); //+ 0x114
	EMU_Write16(V1 + 280,T9); //+ 0x118
	EMU_Write16(V1 + 282,A0); //+ 0x11A
	T8 = GTE_GetDataRegister(GTE_DREG_VXY0);
	T9 = GTE_GetDataRegister(GTE_DREG_VXY1);
	A0 = GTE_GetDataRegister(GTE_DREG_VXY2);
	T8 = (int32_t)T8 >> 16;
	T9 = (int32_t)T9 >> 16;
	A0 = (int32_t)A0 >> 16;
	T9 = T9 - T8;
	A0 = A0 - T8;
	T8 <<= 3;
	EMU_Write32(V1 + 284,T8); //+ 0x11C
	EMU_Write32(V1 + 288,T8); //+ 0x120
	EMU_Write16(V1 + 292,T9); //+ 0x124
	EMU_Write16(V1 + 294,A0); //+ 0x126
	T8 = GTE_GetDataRegister(GTE_DREG_VZ0);
	T9 = GTE_GetDataRegister(GTE_DREG_VZ1);
	A0 = GTE_GetDataRegister(GTE_DREG_VZ2);
	T9 = T9 - T8;
	A0 = A0 - T8;
	T8 <<= 3;
	EMU_Write32(V1 + 296,T8); //+ 0x128
	EMU_Write32(V1 + 300,T8); //+ 0x12C
	EMU_Write16(V1 + 304,T9); //+ 0x130
	EMU_Write16(V1 + 306,A0); //+ 0x132
	T8 = T5 & 0xFF;
	T9 = T6 & 0xFF;
	A0 = T7 & 0xFF;
	T9 = T9 - T8;
	A0 = A0 - T8;
	T9 &= 0x7FFF;
	A0 &= 0x7FFF;
	T8 <<= 3;
	EMU_Write16(V1 + 308,T8); //+ 0x134
	EMU_Write16(V1 + 312,T8); //+ 0x138
	EMU_Write16(V1 + 316,T9); //+ 0x13C
	EMU_Write16(V1 + 320,A0); //+ 0x140
	T8 = T5 >> 8;
	T9 = T6 >> 8;
	A0 = T7 >> 8;
	T8 &= 0xFF;
	T9 &= 0xFF;
	A0 &= 0xFF;
	T9 = T9 - T8;
	A0 = A0 - T8;
	T8 <<= 3;
	EMU_Write16(V1 + 310,T8); //+ 0x136
	EMU_Write16(V1 + 314,T8); //+ 0x13A
	EMU_Write16(V1 + 318,T9); //+ 0x13E
	EMU_Write16(V1 + 322,A0); //+ 0x142
	T8 = T5 >> 16;
	T9 = T6 >> 16;
	A0 = T7 >> 16;
	T9 = T9 - T8;
	A0 = A0 - T8;
	T8 <<= 3;
	EMU_Write16(V1 + 324,T8); //+ 0x144
	EMU_Write16(V1 + 326,T8); //+ 0x146
	EMU_Write16(V1 + 328,T9); //+ 0x148
	EMU_Write16(V1 + 330,A0); //+ 0x14A
	T8 = EMU_ReadU32(V1 + 152); //+ 0x98
	T9 = GTE_GetDataRegister(GTE_DREG_VZ0);
	A0 = GTE_GetDataRegister(GTE_DREG_VZ1);
	A1 = GTE_GetDataRegister(GTE_DREG_VZ2);
	T9 = T8 - T9;
	A0 = T8 - A0;
	A1 = T8 - A1;
	T9 = (int32_t)T9 >> 6;
	A0 = (int32_t)A0 >> 6;
	A1 = (int32_t)A1 >> 6;
	A0 = A0 - T9;
	A1 = A1 - T9;
	A0 = (int32_t)A0 >> 3;
	A1 = (int32_t)A1 >> 3;
	T9 &= 0x7FFF;
	A0 &= 0x7FFF;
	A1 &= 0x7FFF;
	EMU_Write16(V1 + 332,T9); //+ 0x14C
	EMU_Write16(V1 + 336,T9); //+ 0x150
	EMU_Write16(V1 + 340,A0); //+ 0x154
	EMU_Write16(V1 + 344,A1); //+ 0x158
	T8 = EMU_ReadU32(V1 + 148); //+ 0x94
	T9 = GTE_GetDataRegister(GTE_DREG_VXY0);
	A0 = GTE_GetDataRegister(GTE_DREG_VXY1);
	A1 = GTE_GetDataRegister(GTE_DREG_VXY2);
	T8 <<= 16;
	T9 <<= 16;
	A0 <<= 16;
	A1 <<= 16;
	T9 = T8 - T9;
	A0 = T8 - A0;
	A1 = T8 - A1;
	T9 = (int32_t)T9 >> 22;
	A0 = (int32_t)A0 >> 22;
	A1 = (int32_t)A1 >> 22;
	A0 = A0 - T9;
	A1 = A1 - T9;
	A0 = (int32_t)A0 >> 3;
	A1 = (int32_t)A1 >> 3;
	EMU_Write16(V1 + 334,T9); //+ 0x14E
	EMU_Write16(V1 + 338,T9); //+ 0x152
	EMU_Write16(V1 + 342,A0); //+ 0x156
	EMU_Write16(V1 + 346,A1); //+ 0x15A
	T8 = S5 << 20;
	if (!T8)
	{
		S5 &= 0x7FF;
		ZZ_CLOCKCYCLES(129,0x800467BC);
		goto ZZ_46478_344;
	}
	S5 &= 0x7FF;
	RA = EMU_ReadU32(V1 + 464); //+ 0x1D0
	if ((int32_t)T8 <= 0)
	{
		ZZ_CLOCKCYCLES(132,0x80046698);
		goto ZZ_46478_220;
	}
	T8 = S5 << 1;
	S5 += T8;
	S5 <<= 2;
	ZZ_CLOCKCYCLES(136,0x80046710);
	goto ZZ_46478_298;
ZZ_46478_220:
	T8 = S5 << 2;
	T8 += S0;
	S5 = EMU_ReadU32(T8);
	RA >>= 6;
	RA += V1;
	if ((int32_t)S5 < 0)
	{
		RA = EMU_ReadU8(RA + 208); //+ 0xD0
		ZZ_CLOCKCYCLES(7,0x800466F4);
		goto ZZ_46478_27C;
	}
	RA = EMU_ReadU8(RA + 208); //+ 0xD0
	T8 = EMU_ReadU32(V1 + 28); //+ 0x1C
	T9 = S5 >> 26;
	T8 >>= T9;
	T9 = S5 >> 19;
	T8 += T9;
	T9 = S5 >> 12;
	T9 &= 0x7F;
	T8 &= T9;
	T9 = S5 << 20;
	S5 += T8;
	if ((int32_t)T9 >= 0)
	{
		S5 &= 0x7FF;
		ZZ_CLOCKCYCLES(19,0x80046704);
		goto ZZ_46478_28C;
	}
	S5 &= 0x7FF;
	T8 = S5 << 2;
	T8 += S0;
	S5 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(23,0x800466F4);
ZZ_46478_27C:
	T8 = S5 & 0x7FF;
	S5 >>= RA;
	S5 &= 0x3;
	S5 += T8;
	ZZ_CLOCKCYCLES(4,0x80046704);
ZZ_46478_28C:
	T8 = S5 << 1;
	S5 += T8;
	S5 <<= 2;
	ZZ_CLOCKCYCLES(3,0x80046710);
ZZ_46478_298:
	S5 += S1;
	A1 = EMU_ReadU32(V1 + 388); //+ 0x184
	T8 = EMU_ReadU32(S5 - 12); //+ 0xFFFFFFF4
	T9 = EMU_ReadU32(S5 - 8); //+ 0xFFFFFFF8
	if (!A1)
	{
		A0 = EMU_ReadU32(S5 - 4); //+ 0xFFFFFFFC
		ZZ_CLOCKCYCLES(6,0x8004674C);
		goto ZZ_46478_2D4;
	}
	A0 = EMU_ReadU32(S5 - 4); //+ 0xFFFFFFFC
	A1 = 0xFFFF0000;
	T8 &= A1;
	A1 = T9 & 0xFFFF;
	T8 |= A1;
	A1 = 0xFFFF0000;
	T9 &= A1;
	A1 = A0 & 0xFFFF;
	T9 |= A1;
	A0 >>= 16;
	ZZ_CLOCKCYCLES(15,0x8004674C);
ZZ_46478_2D4:
	EMU_Write32(V1 + 244,T8); //+ 0xF4
	EMU_Write32(V1 + 248,T9); //+ 0xF8
	EMU_Write32(V1 + 252,A0); //+ 0xFC
	EMU_Write32(V1 + 484,T8); //+ 0x1E4
	EMU_Write32(V1 + 488,T9); //+ 0x1E8
	EMU_Write32(V1 + 492,A0); //+ 0x1EC
	T8 = EMU_ReadU8(V1 + 244); //+ 0xF4
	T9 = EMU_ReadU8(V1 + 248); //+ 0xF8
	A0 = EMU_ReadU8(V1 + 252); //+ 0xFC
	T9 = T9 - T8;
	A0 = A0 - T8;
	T9 &= 0x7FFF;
	A0 &= 0x7FFF;
	T8 <<= 3;
	EMU_Write16(V1 + 348,T8); //+ 0x15C
	EMU_Write16(V1 + 352,T8); //+ 0x160
	EMU_Write16(V1 + 356,T9); //+ 0x164
	EMU_Write16(V1 + 360,A0); //+ 0x168
	T8 = EMU_ReadU8(V1 + 245); //+ 0xF5
	T9 = EMU_ReadU8(V1 + 249); //+ 0xF9
	A0 = EMU_ReadU8(V1 + 253); //+ 0xFD
	T9 = T9 - T8;
	A0 = A0 - T8;
	T8 <<= 3;
	EMU_Write16(V1 + 350,T8); //+ 0x15E
	EMU_Write16(V1 + 354,T8); //+ 0x162
	EMU_Write16(V1 + 358,T9); //+ 0x166
	EMU_Write16(V1 + 362,A0); //+ 0x16A
	ZZ_CLOCKCYCLES(28,0x800467BC);
ZZ_46478_344:
	AT = EMU_ReadU32(V1 + 468); //+ 0x1D4
	S2 = EMU_ReadU32(V1 + 368); //+ 0x170
	S6 = EMU_ReadU32(V1 + 460); //+ 0x1CC
	T2 = 8;
	A3 = 0xFFFF0000;
	A3 |= 0x7FFF;
	ZZ_CLOCKCYCLES(6,0x800467D4);
ZZ_46478_35C:
	T0 = T2;
	ZZ_CLOCKCYCLES(1,0x800467D8);
ZZ_46478_360:
	T8 = -1;
	EMU_Write32(AT,T8);
	T8 = EMU_ReadS16(V1 + 336); //+ 0x150
	T9 = EMU_ReadS16(V1 + 338); //+ 0x152
	A0 = T8 & 0xFFF0;
	if (A0)
	{
		A0 = T9 & 0xFFF0;
		ZZ_CLOCKCYCLES(7,0x800468C4);
		goto ZZ_46478_44C;
	}
	A0 = T9 & 0xFFF0;
	if (A0)
	{
		T9 <<= 4;
		ZZ_CLOCKCYCLES(9,0x800468C4);
		goto ZZ_46478_44C;
	}
	T9 <<= 4;
	T8 += T9;
	T9 = EMU_ReadS16(V1 + 312); //+ 0x138
	A0 = EMU_ReadS16(V1 + 314); //+ 0x13A
	A1 = EMU_ReadS16(V1 + 326); //+ 0x146
	T9 >>= 3;
	A0 >>= 3;
	A1 >>= 3;
	A0 <<= 8;
	A1 <<= 16;
	T9 |= A0;
	A0 = T8 + S6;
	A0 = EMU_ReadU8(A0);
	T9 |= A1;
	GTE_SetDataRegister(GTE_DREG_RGBC,T9);
	A0 <<= 5;
	GTE_SetDataRegister(GTE_DREG_IR1,A0);
	GTE_SetDataRegister(GTE_DREG_IR2,A0);
	GTE_SetDataRegister(GTE_DREG_IR3,A0);
	T8 += S2;
	T8 = EMU_ReadU8(T8);
	GTE_Execute(6815785);
	T9 = EMU_CheckedAdd(T8,-255);
	if (!T9)
	{
		T9 = EMU_ReadU32(V1 + 276); //+ 0x114
		ZZ_CLOCKCYCLES(34,0x800468C4);
		goto ZZ_46478_44C;
	}
	T9 = EMU_ReadU32(V1 + 276); //+ 0x114
	A0 = EMU_ReadU32(V1 + 288); //+ 0x120
	A1 = EMU_ReadU32(V1 + 300); //+ 0x12C
	T8 <<= 3;
	A0 += T8;
	T9 = (int32_t)T9 >> 3;
	A0 = (int32_t)A0 >> 4;
	A1 = (int32_t)A1 >> 3;
	T9 &= 0xFFFF;
	A0 <<= 17;
	T9 |= A0;
	GTE_SetDataRegister(GTE_DREG_VXY0,T9);
	GTE_SetDataRegister(GTE_DREG_VZ0,A1);
	EMU_Write32(AT,GTE_GetDataRegister(GTE_DREG_RGB2));
	T8 = EMU_ReadS16(V1 + 352); //+ 0x160
	T9 = EMU_ReadS16(V1 + 354); //+ 0x162
	GTE_Execute(1572865);
	if (!S5)
	{
		T8 >>= 3;
		ZZ_CLOCKCYCLES(52,0x800468B8);
		goto ZZ_46478_440;
	}
	T8 >>= 3;
	T9 <<= 5;
	T9 &= 0xFF00;
	T8 |= T9;
	EMU_Write16(AT + 10,T8); //+ 0xA
	ZZ_CLOCKCYCLES(56,0x800468B8);
ZZ_46478_440:
	T8 = GTE_GetDataRegister(GTE_DREG_SZ3);
	EMU_Write32(AT + 4,GTE_GetDataRegister(GTE_DREG_SXY2)); //+ 0x4
	EMU_Write16(AT + 8,T8); //+ 0x8
	ZZ_CLOCKCYCLES(3,0x800468C4);
ZZ_46478_44C:
	T8 = EMU_ReadU32(V1 + 336); //+ 0x150
	T9 = EMU_ReadU32(V1 + 340); //+ 0x154
	A0 = EMU_ReadU32(V1 + 352); //+ 0x160
	A1 = EMU_ReadU32(V1 + 356); //+ 0x164
	T8 += T9;
	A0 += A1;
	T8 &= A3;
	A0 &= A3;
	EMU_Write32(V1 + 336,T8); //+ 0x150
	EMU_Write32(V1 + 352,A0); //+ 0x160
	T8 = EMU_ReadU32(V1 + 312); //+ 0x138
	T9 = EMU_ReadU32(V1 + 316); //+ 0x13C
	A0 = EMU_ReadS16(V1 + 326); //+ 0x146
	A1 = EMU_ReadS16(V1 + 328); //+ 0x148
	T8 += T9;
	A0 += A1;
	T8 &= A3;
	EMU_Write32(V1 + 312,T8); //+ 0x138
	EMU_Write16(V1 + 326,A0); //+ 0x146
	T8 = EMU_ReadU32(V1 + 276); //+ 0x114
	T9 = EMU_ReadS16(V1 + 280); //+ 0x118
	A0 = EMU_ReadU32(V1 + 288); //+ 0x120
	A1 = EMU_ReadS16(V1 + 292); //+ 0x124
	T8 += T9;
	A0 += A1;
	EMU_Write32(V1 + 276,T8); //+ 0x114
	T8 = EMU_ReadU32(V1 + 300); //+ 0x12C
	T9 = EMU_ReadS16(V1 + 304); //+ 0x130
	EMU_Write32(V1 + 288,A0); //+ 0x120
	T8 += T9;
	EMU_Write32(V1 + 300,T8); //+ 0x12C
	AT = EMU_CheckedAdd(AT,12);
	if ((int32_t)T0 > 0)
	{
		T0 = EMU_CheckedAdd(T0,-1);
		ZZ_CLOCKCYCLES(34,0x800467D8);
		goto ZZ_46478_360;
	}
	T0 = EMU_CheckedAdd(T0,-1);
	T8 = EMU_ReadU32(V1 + 332); //+ 0x14C
	T9 = EMU_ReadU32(V1 + 344); //+ 0x158
	A0 = EMU_ReadU32(V1 + 348); //+ 0x15C
	A1 = EMU_ReadU32(V1 + 360); //+ 0x168
	T8 += T9;
	A0 += A1;
	T8 &= A3;
	A0 &= A3;
	EMU_Write32(V1 + 332,T8); //+ 0x14C
	EMU_Write32(V1 + 348,A0); //+ 0x15C
	EMU_Write32(V1 + 336,T8); //+ 0x150
	EMU_Write32(V1 + 352,A0); //+ 0x160
	T8 = EMU_ReadU32(V1 + 308); //+ 0x134
	T9 = EMU_ReadU32(V1 + 320); //+ 0x140
	A0 = EMU_ReadS16(V1 + 324); //+ 0x144
	A1 = EMU_ReadS16(V1 + 330); //+ 0x14A
	T8 += T9;
	A0 += A1;
	T8 &= A3;
	EMU_Write32(V1 + 308,T8); //+ 0x134
	EMU_Write16(V1 + 324,A0); //+ 0x144
	EMU_Write32(V1 + 312,T8); //+ 0x138
	EMU_Write16(V1 + 326,A0); //+ 0x146
	T8 = EMU_ReadU32(V1 + 272); //+ 0x110
	T9 = EMU_ReadS16(V1 + 282); //+ 0x11A
	A0 = EMU_ReadU32(V1 + 284); //+ 0x11C
	A1 = EMU_ReadS16(V1 + 294); //+ 0x126
	T8 += T9;
	A0 += A1;
	EMU_Write32(V1 + 272,T8); //+ 0x110
	EMU_Write32(V1 + 276,T8); //+ 0x114
	T8 = EMU_ReadU32(V1 + 296); //+ 0x128
	T9 = EMU_ReadS16(V1 + 306); //+ 0x132
	EMU_Write32(V1 + 284,A0); //+ 0x11C
	EMU_Write32(V1 + 288,A0); //+ 0x120
	T8 += T9;
	EMU_Write32(V1 + 296,T8); //+ 0x128
	EMU_Write32(V1 + 300,T8); //+ 0x12C
	if ((int32_t)T2 > 0)
	{
		T2 = EMU_CheckedAdd(T2,-1);
		ZZ_CLOCKCYCLES(74,0x800467D4);
		goto ZZ_46478_35C;
	}
	T2 = EMU_CheckedAdd(T2,-1);
	A2 = 0x80060000;
	A2 -= 13976;
	T8 = EMU_ReadS8(A2);
	A2 = EMU_CheckedAdd(A2,1);
	T9 = EMU_CheckedAdd(T8,1);
	ZZ_CLOCKCYCLES(79,0x80046A00);
ZZ_46478_588:
	if (!T9)
	{
		T8 &= 0x7F;
		ZZ_CLOCKCYCLES(2,0x80046ACC);
		goto ZZ_46478_654;
	}
	T8 &= 0x7F;
	A0 = EMU_ReadU32(V1 + 468); //+ 0x1D4
	T8 <<= 2;
	A1 = T8 << 1;
	T8 += A1;
	A1 = T8 + A0;
	S2 = EMU_ReadU32(A1 + 4); //+ 0x4
	A3 = EMU_ReadS16(A1 + 8); //+ 0x8
	T9 = EMU_ReadS16(A1 + 10); //+ 0xA
	T5 = EMU_ReadU32(A1);
	T8 = EMU_ReadS8(A2);
	EMU_Write16(V1 + 244,T9); //+ 0xF4
	T8 <<= 2;
	A1 = T8 << 1;
	T8 += A1;
	A1 = T8 + A0;
	T0 = EMU_ReadU32(A1 + 4); //+ 0x4
	AT = EMU_ReadS16(A1 + 8); //+ 0x8
	T9 = EMU_ReadS16(A1 + 10); //+ 0xA
	T6 = EMU_ReadU32(A1);
	T8 = EMU_ReadS8(A2 + 1); //+ 0x1
	EMU_Write16(V1 + 248,T9); //+ 0xF8
	A2 = EMU_CheckedAdd(A2,2);
	ZZ_CLOCKCYCLES(24,0x80046A60);
ZZ_46478_5E8:
	A0 = EMU_ReadU32(V1 + 468); //+ 0x1D4
	T8 <<= 2;
	A1 = T8 << 1;
	T8 += A1;
	A1 = T8 + A0;
	T2 = EMU_ReadU32(A1 + 4); //+ 0x4
	S6 = EMU_ReadS16(A1 + 8); //+ 0x8
	T9 = EMU_ReadS16(A1 + 10); //+ 0xA
	T7 = EMU_ReadU32(A1);
	A1 = 0;
	RA = 0x80046A90; //ZZ_46478_618
	EMU_Write16(V1 + 252,T9); //+ 0xFC
	ZZ_CLOCKCYCLES(12,0x80045EF4);
	goto ZZ_45EF4;
ZZ_46478_618:
	T8 = EMU_ReadS8(A2);
	A2 = EMU_CheckedAdd(A2,1);
	if ((int32_t)T8 < 0)
	{
		T9 = EMU_CheckedAdd(T8,1);
		ZZ_CLOCKCYCLES(4,0x80046A00);
		goto ZZ_46478_588;
	}
	T9 = EMU_CheckedAdd(T8,1);
	T5 = T6;
	T6 = T7;
	S2 = T0;
	T0 = T2;
	A3 = AT;
	AT = S6;
	T9 = EMU_ReadS16(V1 + 248); //+ 0xF8
	A1 = EMU_ReadS16(V1 + 252); //+ 0xFC
	EMU_Write16(V1 + 244,T9); //+ 0xF4
	EMU_Write16(V1 + 248,A1); //+ 0xF8
	ZZ_CLOCKCYCLES(15,0x80046A60);
	goto ZZ_46478_5E8;
ZZ_46478_654:
	S2 = EMU_ReadU32(V1 + 400); //+ 0x190
	T0 = EMU_ReadU32(V1 + 408); //+ 0x198
	T2 = EMU_ReadU32(V1 + 416); //+ 0x1A0
	T5 = EMU_ReadU32(V1 + 424); //+ 0x1A8
	T6 = EMU_ReadU32(V1 + 428); //+ 0x1AC
	T7 = EMU_ReadU32(V1 + 432); //+ 0x1B0
	V0 = EMU_ReadU32(V1 + 480); //+ 0x1E0
	T8 = EMU_ReadU32(V1 + 484); //+ 0x1E4
	T9 = EMU_ReadU32(V1 + 488); //+ 0x1E8
	A0 = EMU_ReadU32(V1 + 492); //+ 0x1EC
	EMU_Write32(V1 + 244,T8); //+ 0xF4
	EMU_Write32(V1 + 248,T9); //+ 0xF8
	EMU_Write32(V1 + 252,A0); //+ 0xFC
	A1 = 1;
	RA = 0x80046B0C; //ZZ_46478_694
	V0 = EMU_CheckedAdd(V0,-160);
	ZZ_CLOCKCYCLES(16,0x80045F44);
	goto ZZ_45F44;
ZZ_46478_694:
	RA = EMU_ReadU32(V1 + 396); //+ 0x18C
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800461C8,ZZ_46020_1A8);
	ZZ_JUMPREGISTER(0x8004642C,ZZ_46020_40C);
	ZZ_JUMPREGISTER(0x80046468,ZZ_46020_448);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80046478,ZZ_46478);
ZZ_MARK(0x8004647C);
ZZ_MARK(0x80046480);
ZZ_MARK(0x80046484);
ZZ_MARK(0x80046488);
ZZ_MARK(0x8004648C);
ZZ_MARK(0x80046490);
ZZ_MARK(0x80046494);
ZZ_MARK(0x80046498);
ZZ_MARK(0x8004649C);
ZZ_MARK(0x800464A0);
ZZ_MARK(0x800464A4);
ZZ_MARK(0x800464A8);
ZZ_MARK(0x800464AC);
ZZ_MARK(0x800464B0);
ZZ_MARK(0x800464B4);
ZZ_MARK(0x800464B8);
ZZ_MARK(0x800464BC);
ZZ_MARK(0x800464C0);
ZZ_MARK(0x800464C4);
ZZ_MARK(0x800464C8);
ZZ_MARK(0x800464CC);
ZZ_MARK(0x800464D0);
ZZ_MARK(0x800464D4);
ZZ_MARK(0x800464D8);
ZZ_MARK(0x800464DC);
ZZ_MARK(0x800464E0);
ZZ_MARK(0x800464E4);
ZZ_MARK(0x800464E8);
ZZ_MARK(0x800464EC);
ZZ_MARK(0x800464F0);
ZZ_MARK(0x800464F4);
ZZ_MARK(0x800464F8);
ZZ_MARK(0x800464FC);
ZZ_MARK(0x80046500);
ZZ_MARK(0x80046504);
ZZ_MARK(0x80046508);
ZZ_MARK(0x8004650C);
ZZ_MARK(0x80046510);
ZZ_MARK(0x80046514);
ZZ_MARK(0x80046518);
ZZ_MARK(0x8004651C);
ZZ_MARK(0x80046520);
ZZ_MARK(0x80046524);
ZZ_MARK(0x80046528);
ZZ_MARK(0x8004652C);
ZZ_MARK(0x80046530);
ZZ_MARK(0x80046534);
ZZ_MARK(0x80046538);
ZZ_MARK(0x8004653C);
ZZ_MARK(0x80046540);
ZZ_MARK(0x80046544);
ZZ_MARK(0x80046548);
ZZ_MARK(0x8004654C);
ZZ_MARK(0x80046550);
ZZ_MARK(0x80046554);
ZZ_MARK(0x80046558);
ZZ_MARK(0x8004655C);
ZZ_MARK(0x80046560);
ZZ_MARK(0x80046564);
ZZ_MARK(0x80046568);
ZZ_MARK(0x8004656C);
ZZ_MARK(0x80046570);
ZZ_MARK(0x80046574);
ZZ_MARK(0x80046578);
ZZ_MARK(0x8004657C);
ZZ_MARK(0x80046580);
ZZ_MARK(0x80046584);
ZZ_MARK(0x80046588);
ZZ_MARK(0x8004658C);
ZZ_MARK(0x80046590);
ZZ_MARK(0x80046594);
ZZ_MARK(0x80046598);
ZZ_MARK(0x8004659C);
ZZ_MARK(0x800465A0);
ZZ_MARK(0x800465A4);
ZZ_MARK(0x800465A8);
ZZ_MARK(0x800465AC);
ZZ_MARK(0x800465B0);
ZZ_MARK(0x800465B4);
ZZ_MARK(0x800465B8);
ZZ_MARK(0x800465BC);
ZZ_MARK(0x800465C0);
ZZ_MARK(0x800465C4);
ZZ_MARK(0x800465C8);
ZZ_MARK(0x800465CC);
ZZ_MARK(0x800465D0);
ZZ_MARK(0x800465D4);
ZZ_MARK(0x800465D8);
ZZ_MARK(0x800465DC);
ZZ_MARK(0x800465E0);
ZZ_MARK(0x800465E4);
ZZ_MARK(0x800465E8);
ZZ_MARK(0x800465EC);
ZZ_MARK(0x800465F0);
ZZ_MARK(0x800465F4);
ZZ_MARK(0x800465F8);
ZZ_MARK(0x800465FC);
ZZ_MARK(0x80046600);
ZZ_MARK(0x80046604);
ZZ_MARK(0x80046608);
ZZ_MARK(0x8004660C);
ZZ_MARK(0x80046610);
ZZ_MARK(0x80046614);
ZZ_MARK(0x80046618);
ZZ_MARK(0x8004661C);
ZZ_MARK(0x80046620);
ZZ_MARK(0x80046624);
ZZ_MARK(0x80046628);
ZZ_MARK(0x8004662C);
ZZ_MARK(0x80046630);
ZZ_MARK(0x80046634);
ZZ_MARK(0x80046638);
ZZ_MARK(0x8004663C);
ZZ_MARK(0x80046640);
ZZ_MARK(0x80046644);
ZZ_MARK(0x80046648);
ZZ_MARK(0x8004664C);
ZZ_MARK(0x80046650);
ZZ_MARK(0x80046654);
ZZ_MARK(0x80046658);
ZZ_MARK(0x8004665C);
ZZ_MARK(0x80046660);
ZZ_MARK(0x80046664);
ZZ_MARK(0x80046668);
ZZ_MARK(0x8004666C);
ZZ_MARK(0x80046670);
ZZ_MARK(0x80046674);
ZZ_MARK(0x80046678);
ZZ_MARK(0x8004667C);
ZZ_MARK(0x80046680);
ZZ_MARK(0x80046684);
ZZ_MARK(0x80046688);
ZZ_MARK(0x8004668C);
ZZ_MARK(0x80046690);
ZZ_MARK(0x80046694);
ZZ_MARK_TARGET(0x80046698,ZZ_46478_220);
ZZ_MARK(0x8004669C);
ZZ_MARK(0x800466A0);
ZZ_MARK(0x800466A4);
ZZ_MARK(0x800466A8);
ZZ_MARK(0x800466AC);
ZZ_MARK(0x800466B0);
ZZ_MARK(0x800466B4);
ZZ_MARK(0x800466B8);
ZZ_MARK(0x800466BC);
ZZ_MARK(0x800466C0);
ZZ_MARK(0x800466C4);
ZZ_MARK(0x800466C8);
ZZ_MARK(0x800466CC);
ZZ_MARK(0x800466D0);
ZZ_MARK(0x800466D4);
ZZ_MARK(0x800466D8);
ZZ_MARK(0x800466DC);
ZZ_MARK(0x800466E0);
ZZ_MARK(0x800466E4);
ZZ_MARK(0x800466E8);
ZZ_MARK(0x800466EC);
ZZ_MARK(0x800466F0);
ZZ_MARK_TARGET(0x800466F4,ZZ_46478_27C);
ZZ_MARK(0x800466F8);
ZZ_MARK(0x800466FC);
ZZ_MARK(0x80046700);
ZZ_MARK_TARGET(0x80046704,ZZ_46478_28C);
ZZ_MARK(0x80046708);
ZZ_MARK(0x8004670C);
ZZ_MARK_TARGET(0x80046710,ZZ_46478_298);
ZZ_MARK(0x80046714);
ZZ_MARK(0x80046718);
ZZ_MARK(0x8004671C);
ZZ_MARK(0x80046720);
ZZ_MARK(0x80046724);
ZZ_MARK(0x80046728);
ZZ_MARK(0x8004672C);
ZZ_MARK(0x80046730);
ZZ_MARK(0x80046734);
ZZ_MARK(0x80046738);
ZZ_MARK(0x8004673C);
ZZ_MARK(0x80046740);
ZZ_MARK(0x80046744);
ZZ_MARK(0x80046748);
ZZ_MARK_TARGET(0x8004674C,ZZ_46478_2D4);
ZZ_MARK(0x80046750);
ZZ_MARK(0x80046754);
ZZ_MARK(0x80046758);
ZZ_MARK(0x8004675C);
ZZ_MARK(0x80046760);
ZZ_MARK(0x80046764);
ZZ_MARK(0x80046768);
ZZ_MARK(0x8004676C);
ZZ_MARK(0x80046770);
ZZ_MARK(0x80046774);
ZZ_MARK(0x80046778);
ZZ_MARK(0x8004677C);
ZZ_MARK(0x80046780);
ZZ_MARK(0x80046784);
ZZ_MARK(0x80046788);
ZZ_MARK(0x8004678C);
ZZ_MARK(0x80046790);
ZZ_MARK(0x80046794);
ZZ_MARK(0x80046798);
ZZ_MARK(0x8004679C);
ZZ_MARK(0x800467A0);
ZZ_MARK(0x800467A4);
ZZ_MARK(0x800467A8);
ZZ_MARK(0x800467AC);
ZZ_MARK(0x800467B0);
ZZ_MARK(0x800467B4);
ZZ_MARK(0x800467B8);
ZZ_MARK_TARGET(0x800467BC,ZZ_46478_344);
ZZ_MARK(0x800467C0);
ZZ_MARK(0x800467C4);
ZZ_MARK(0x800467C8);
ZZ_MARK(0x800467CC);
ZZ_MARK(0x800467D0);
ZZ_MARK_TARGET(0x800467D4,ZZ_46478_35C);
ZZ_MARK_TARGET(0x800467D8,ZZ_46478_360);
ZZ_MARK(0x800467DC);
ZZ_MARK(0x800467E0);
ZZ_MARK(0x800467E4);
ZZ_MARK(0x800467E8);
ZZ_MARK(0x800467EC);
ZZ_MARK(0x800467F0);
ZZ_MARK(0x800467F4);
ZZ_MARK(0x800467F8);
ZZ_MARK(0x800467FC);
ZZ_MARK(0x80046800);
ZZ_MARK(0x80046804);
ZZ_MARK(0x80046808);
ZZ_MARK(0x8004680C);
ZZ_MARK(0x80046810);
ZZ_MARK(0x80046814);
ZZ_MARK(0x80046818);
ZZ_MARK(0x8004681C);
ZZ_MARK(0x80046820);
ZZ_MARK(0x80046824);
ZZ_MARK(0x80046828);
ZZ_MARK(0x8004682C);
ZZ_MARK(0x80046830);
ZZ_MARK(0x80046834);
ZZ_MARK(0x80046838);
ZZ_MARK(0x8004683C);
ZZ_MARK(0x80046840);
ZZ_MARK(0x80046844);
ZZ_MARK(0x80046848);
ZZ_MARK(0x8004684C);
ZZ_MARK(0x80046850);
ZZ_MARK(0x80046854);
ZZ_MARK(0x80046858);
ZZ_MARK(0x8004685C);
ZZ_MARK(0x80046860);
ZZ_MARK(0x80046864);
ZZ_MARK(0x80046868);
ZZ_MARK(0x8004686C);
ZZ_MARK(0x80046870);
ZZ_MARK(0x80046874);
ZZ_MARK(0x80046878);
ZZ_MARK(0x8004687C);
ZZ_MARK(0x80046880);
ZZ_MARK(0x80046884);
ZZ_MARK(0x80046888);
ZZ_MARK(0x8004688C);
ZZ_MARK(0x80046890);
ZZ_MARK(0x80046894);
ZZ_MARK(0x80046898);
ZZ_MARK(0x8004689C);
ZZ_MARK(0x800468A0);
ZZ_MARK(0x800468A4);
ZZ_MARK(0x800468A8);
ZZ_MARK(0x800468AC);
ZZ_MARK(0x800468B0);
ZZ_MARK(0x800468B4);
ZZ_MARK_TARGET(0x800468B8,ZZ_46478_440);
ZZ_MARK(0x800468BC);
ZZ_MARK(0x800468C0);
ZZ_MARK_TARGET(0x800468C4,ZZ_46478_44C);
ZZ_MARK(0x800468C8);
ZZ_MARK(0x800468CC);
ZZ_MARK(0x800468D0);
ZZ_MARK(0x800468D4);
ZZ_MARK(0x800468D8);
ZZ_MARK(0x800468DC);
ZZ_MARK(0x800468E0);
ZZ_MARK(0x800468E4);
ZZ_MARK(0x800468E8);
ZZ_MARK(0x800468EC);
ZZ_MARK(0x800468F0);
ZZ_MARK(0x800468F4);
ZZ_MARK(0x800468F8);
ZZ_MARK(0x800468FC);
ZZ_MARK(0x80046900);
ZZ_MARK(0x80046904);
ZZ_MARK(0x80046908);
ZZ_MARK(0x8004690C);
ZZ_MARK(0x80046910);
ZZ_MARK(0x80046914);
ZZ_MARK(0x80046918);
ZZ_MARK(0x8004691C);
ZZ_MARK(0x80046920);
ZZ_MARK(0x80046924);
ZZ_MARK(0x80046928);
ZZ_MARK(0x8004692C);
ZZ_MARK(0x80046930);
ZZ_MARK(0x80046934);
ZZ_MARK(0x80046938);
ZZ_MARK(0x8004693C);
ZZ_MARK(0x80046940);
ZZ_MARK(0x80046944);
ZZ_MARK(0x80046948);
ZZ_MARK(0x8004694C);
ZZ_MARK(0x80046950);
ZZ_MARK(0x80046954);
ZZ_MARK(0x80046958);
ZZ_MARK(0x8004695C);
ZZ_MARK(0x80046960);
ZZ_MARK(0x80046964);
ZZ_MARK(0x80046968);
ZZ_MARK(0x8004696C);
ZZ_MARK(0x80046970);
ZZ_MARK(0x80046974);
ZZ_MARK(0x80046978);
ZZ_MARK(0x8004697C);
ZZ_MARK(0x80046980);
ZZ_MARK(0x80046984);
ZZ_MARK(0x80046988);
ZZ_MARK(0x8004698C);
ZZ_MARK(0x80046990);
ZZ_MARK(0x80046994);
ZZ_MARK(0x80046998);
ZZ_MARK(0x8004699C);
ZZ_MARK(0x800469A0);
ZZ_MARK(0x800469A4);
ZZ_MARK(0x800469A8);
ZZ_MARK(0x800469AC);
ZZ_MARK(0x800469B0);
ZZ_MARK(0x800469B4);
ZZ_MARK(0x800469B8);
ZZ_MARK(0x800469BC);
ZZ_MARK(0x800469C0);
ZZ_MARK(0x800469C4);
ZZ_MARK(0x800469C8);
ZZ_MARK(0x800469CC);
ZZ_MARK(0x800469D0);
ZZ_MARK(0x800469D4);
ZZ_MARK(0x800469D8);
ZZ_MARK(0x800469DC);
ZZ_MARK(0x800469E0);
ZZ_MARK(0x800469E4);
ZZ_MARK(0x800469E8);
ZZ_MARK(0x800469EC);
ZZ_MARK(0x800469F0);
ZZ_MARK(0x800469F4);
ZZ_MARK(0x800469F8);
ZZ_MARK(0x800469FC);
ZZ_MARK_TARGET(0x80046A00,ZZ_46478_588);
ZZ_MARK(0x80046A04);
ZZ_MARK(0x80046A08);
ZZ_MARK(0x80046A0C);
ZZ_MARK(0x80046A10);
ZZ_MARK(0x80046A14);
ZZ_MARK(0x80046A18);
ZZ_MARK(0x80046A1C);
ZZ_MARK(0x80046A20);
ZZ_MARK(0x80046A24);
ZZ_MARK(0x80046A28);
ZZ_MARK(0x80046A2C);
ZZ_MARK(0x80046A30);
ZZ_MARK(0x80046A34);
ZZ_MARK(0x80046A38);
ZZ_MARK(0x80046A3C);
ZZ_MARK(0x80046A40);
ZZ_MARK(0x80046A44);
ZZ_MARK(0x80046A48);
ZZ_MARK(0x80046A4C);
ZZ_MARK(0x80046A50);
ZZ_MARK(0x80046A54);
ZZ_MARK(0x80046A58);
ZZ_MARK(0x80046A5C);
ZZ_MARK_TARGET(0x80046A60,ZZ_46478_5E8);
ZZ_MARK(0x80046A64);
ZZ_MARK(0x80046A68);
ZZ_MARK(0x80046A6C);
ZZ_MARK(0x80046A70);
ZZ_MARK(0x80046A74);
ZZ_MARK(0x80046A78);
ZZ_MARK(0x80046A7C);
ZZ_MARK(0x80046A80);
ZZ_MARK(0x80046A84);
ZZ_MARK(0x80046A88);
ZZ_MARK(0x80046A8C);
ZZ_MARK_TARGET(0x80046A90,ZZ_46478_618);
ZZ_MARK(0x80046A94);
ZZ_MARK(0x80046A98);
ZZ_MARK(0x80046A9C);
ZZ_MARK(0x80046AA0);
ZZ_MARK(0x80046AA4);
ZZ_MARK(0x80046AA8);
ZZ_MARK(0x80046AAC);
ZZ_MARK(0x80046AB0);
ZZ_MARK(0x80046AB4);
ZZ_MARK(0x80046AB8);
ZZ_MARK(0x80046ABC);
ZZ_MARK(0x80046AC0);
ZZ_MARK(0x80046AC4);
ZZ_MARK(0x80046AC8);
ZZ_MARK_TARGET(0x80046ACC,ZZ_46478_654);
ZZ_MARK(0x80046AD0);
ZZ_MARK(0x80046AD4);
ZZ_MARK(0x80046AD8);
ZZ_MARK(0x80046ADC);
ZZ_MARK(0x80046AE0);
ZZ_MARK(0x80046AE4);
ZZ_MARK(0x80046AE8);
ZZ_MARK(0x80046AEC);
ZZ_MARK(0x80046AF0);
ZZ_MARK(0x80046AF4);
ZZ_MARK(0x80046AF8);
ZZ_MARK(0x80046AFC);
ZZ_MARK(0x80046B00);
ZZ_MARK(0x80046B04);
ZZ_MARK(0x80046B08);
ZZ_MARK_TARGET(0x80046B0C,ZZ_46478_694);
ZZ_MARK(0x80046B10);
ZZ_MARK(0x80046B14);
ZZ_MARK(0x80046B18);
