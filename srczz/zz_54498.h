#ifdef ZZ_INCLUDE_CODE
ZZ_54498:
	SP -= 32;
	T0 = A0;
	T3 = A2;
	A0 = T0 << 16;
	A0 = (int32_t)A0 >> 14;
	V1 = A1 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 4;
	EMU_Write32(SP + 24,RA); //+ 0x18
	AT = 0x80070000;
	AT += A0;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	T2 = A3 & 0xFF;
	V1 += V0;
	A0 = EMU_ReadU8(V1 + 23); //+ 0x17
	A3 &= 0xFF;
	A2 = V1 + A0;
	T1 = EMU_ReadU8(A2 + 39); //+ 0x27
	if (!A3)
	{
		ZZ_CLOCKCYCLES(24,0x8005453C);
		goto ZZ_54498_A4;
	}
	V0 = EMU_ReadS16(V1 + 128); //+ 0x80
	V0 = (int32_t)V0 >> A0;
	V0 &= 0x1;
	if (V0)
	{
		A0 = A1 << 8;
		ZZ_CLOCKCYCLES(30,0x8005455C);
		goto ZZ_54498_C4;
	}
	A0 = A1 << 8;
	A0 |= T0;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 = EMU_ReadU8(V1 + 38); //+ 0x26
	A2 = EMU_ReadU8(A2 + 55); //+ 0x37
	A3 = T3 & 0xFF;
	EMU_Write32(SP + 16,T2); //+ 0x10
	RA = 0x80054534; //ZZ_54498_9C
	EMU_Write32(SP + 20,T1); //+ 0x14
	ZZ_CLOCKCYCLES(39,0x80057AAC);
	goto ZZ_57AAC;
ZZ_54498_9C:
	ZZ_CLOCKCYCLES(2,0x8005455C);
	goto ZZ_54498_C4;
ZZ_54498_A4:
	A0 = A1 << 8;
	A0 |= T0;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	A1 = EMU_ReadU8(V1 + 38); //+ 0x26
	A2 = EMU_ReadU8(A2 + 55); //+ 0x37
	RA = 0x8005455C; //ZZ_54498_C4
	A3 = T3 & 0xFF;
	ZZ_CLOCKCYCLES(8,0x80058030);
	goto ZZ_58030;
ZZ_54498_C4:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80054498,0x80054534,ZZ_54498);
ZZ_MARK_TARGET(0x80054534,0x8005453C,ZZ_54498_9C);
ZZ_MARK_TARGET(0x8005453C,0x8005455C,ZZ_54498_A4);
ZZ_MARK_TARGET(0x8005455C,0x8005456C,ZZ_54498_C4);
