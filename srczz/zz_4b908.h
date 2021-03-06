#ifdef ZZ_INCLUDE_CODE
ZZ_4B908:
	if (!A1)
	{
		ZZ_CLOCKCYCLES(2,0x8004B91C);
		goto ZZ_4B908_14;
	}
	V0 = EMU_ReadU8(A0 + 7); //+ 0x7
	V0 |= 0x2;
	ZZ_CLOCKCYCLES(5,0x8004B928);
	goto ZZ_4B908_20;
ZZ_4B908_14:
	V0 = EMU_ReadU8(A0 + 7); //+ 0x7
	V0 &= 0xFD;
	ZZ_CLOCKCYCLES(3,0x8004B928);
ZZ_4B908_20:
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write8(A0 + 7,V0); //+ 0x7
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80016CFC,ZZ_16C38_C4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B908,0x8004B91C,ZZ_4B908);
ZZ_MARK_TARGET(0x8004B91C,0x8004B928,ZZ_4B908_14);
ZZ_MARK_TARGET(0x8004B928,0x8004B930,ZZ_4B908_20);
