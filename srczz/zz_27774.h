#ifdef ZZ_INCLUDE_CODE
ZZ_27774:
	T4 = EMU_ReadU32(SP + 20); //+ 0x14
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	T5 = EMU_ReadU32(SP + 24); //+ 0x18
	if ((int32_t)A3 <= 0)
	{
		ZZ_CLOCKCYCLES(5,0x8002786C);
		goto ZZ_27774_F8;
	}
	if (!V0)
	{
		T4 = (int32_t)T4 >> 3;
		ZZ_CLOCKCYCLES(7,0x80027818);
		goto ZZ_27774_A4;
	}
	T4 = (int32_t)T4 >> 3;
	T3 = T5 - 1;
	if ((int32_t)T3 < 0)
	{
		T4 -= 1;
		ZZ_CLOCKCYCLES(10,0x8002786C);
		goto ZZ_27774_F8;
	}
	T4 -= 1;
	T2 = A1;
	ZZ_CLOCKCYCLES(11,0x800277A0);
ZZ_27774_2C:
	T1 = T4;
	if ((int32_t)T1 < 0)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(3,0x80027804);
		goto ZZ_27774_90;
	}
	A1 += 1;
	ZZ_CLOCKCYCLES(3,0x800277AC);
ZZ_27774_38:
	T0 = EMU_ReadU8(T2);
	if (!T0)
	{
		V1 = 0x80;
		ZZ_CLOCKCYCLES(4,0x800277F4);
		goto ZZ_27774_80;
	}
	V1 = 0x80;
	ZZ_CLOCKCYCLES(4,0x800277BC);
ZZ_27774_48:
	V0 = V1 & T0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x800277DC);
		goto ZZ_27774_68;
	}
	V0 = EMU_ReadU8(A0);
	A0 += 1;
	A3 -= 1;
	if (!A3)
	{
		EMU_Write8(A2,V0);
		ZZ_CLOCKCYCLES(8,0x8002786C);
		goto ZZ_27774_F8;
	}
	EMU_Write8(A2,V0);
	ZZ_CLOCKCYCLES(8,0x800277DC);
ZZ_27774_68:
	V1 >>= 1;
	V0 = V1 & 0xFF;
	if (V0)
	{
		A2 += 1;
		ZZ_CLOCKCYCLES(4,0x800277BC);
		goto ZZ_27774_48;
	}
	A2 += 1;
	T1 -= 1;
	ZZ_CLOCKCYCLES(6,0x800277FC);
	goto ZZ_27774_88;
ZZ_27774_80:
	A2 += 8;
	T1 -= 1;
	ZZ_CLOCKCYCLES(2,0x800277FC);
ZZ_27774_88:
	if ((int32_t)T1 >= 0)
	{
		T2 += T5;
		ZZ_CLOCKCYCLES(2,0x800277AC);
		goto ZZ_27774_38;
	}
	T2 += T5;
	ZZ_CLOCKCYCLES(2,0x80027804);
ZZ_27774_90:
	T3 -= 1;
	if ((int32_t)T3 >= 0)
	{
		T2 = A1;
		ZZ_CLOCKCYCLES(3,0x800277A0);
		goto ZZ_27774_2C;
	}
	T2 = A1;
	ZZ_CLOCKCYCLES(5,0x8002786C);
	goto ZZ_27774_F8;
ZZ_27774_A4:
	T0 = EMU_ReadU8(A1);
	if (T0)
	{
		A1 += 1;
		ZZ_CLOCKCYCLES(4,0x80027830);
		goto ZZ_27774_BC;
	}
	A1 += 1;
	A2 += 8;
	ZZ_CLOCKCYCLES(6,0x80027818);
	goto ZZ_27774_A4;
ZZ_27774_BC:
	V1 = 0x80;
	ZZ_CLOCKCYCLES(1,0x80027834);
ZZ_27774_C0:
	V0 = T0 & V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x80027854);
		goto ZZ_27774_E0;
	}
	V0 = EMU_ReadU8(A0);
	A0 += 1;
	A3 -= 1;
	if (!A3)
	{
		EMU_Write8(A2,V0);
		ZZ_CLOCKCYCLES(8,0x8002786C);
		goto ZZ_27774_F8;
	}
	EMU_Write8(A2,V0);
	ZZ_CLOCKCYCLES(8,0x80027854);
ZZ_27774_E0:
	V1 >>= 1;
	V0 = V1 & 0xFF;
	if (V0)
	{
		A2 += 1;
		ZZ_CLOCKCYCLES(4,0x80027834);
		goto ZZ_27774_C0;
	}
	A2 += 1;
	ZZ_CLOCKCYCLES(6,0x80027818);
	goto ZZ_27774_A4;
ZZ_27774_F8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8002766C,ZZ_27518_154);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80027774,0x800277A0,ZZ_27774);
ZZ_MARK_TARGET(0x800277A0,0x800277AC,ZZ_27774_2C);
ZZ_MARK_TARGET(0x800277AC,0x800277BC,ZZ_27774_38);
ZZ_MARK_TARGET(0x800277BC,0x800277DC,ZZ_27774_48);
ZZ_MARK_TARGET(0x800277DC,0x800277F4,ZZ_27774_68);
ZZ_MARK_TARGET(0x800277F4,0x800277FC,ZZ_27774_80);
ZZ_MARK_TARGET(0x800277FC,0x80027804,ZZ_27774_88);
ZZ_MARK_TARGET(0x80027804,0x80027818,ZZ_27774_90);
ZZ_MARK_TARGET(0x80027818,0x80027830,ZZ_27774_A4);
ZZ_MARK_TARGET(0x80027830,0x80027834,ZZ_27774_BC);
ZZ_MARK_TARGET(0x80027834,0x80027854,ZZ_27774_C0);
ZZ_MARK_TARGET(0x80027854,0x8002786C,ZZ_27774_E0);
ZZ_MARK_TARGET(0x8002786C,0x80027874,ZZ_27774_F8);
