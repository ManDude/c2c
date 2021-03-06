#ifdef ZZ_INCLUDE_CODE
ZZ_4C8DC:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 8266); //+ 0xFFFFDFB6
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	V0 = V0 < 2;
	if (V0)
	{
		EMU_Write32(SP + 20,RA); //+ 0x14
		ZZ_CLOCKCYCLES(8,0x8004C918);
		goto ZZ_4C8DC_3C;
	}
	EMU_Write32(SP + 20,RA); //+ 0x14
	A0 = 0x80010000;
	A0 += 4064;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8272); //+ 0xFFFFDFB0
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C918; //ZZ_4C8DC_3C
	A1 = S0;
	ZZ_CLOCKCYCLES_JR(15);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C910)
	ZZ_JUMPREGISTER_END();
ZZ_4C8DC_3C:
	A1 = S0;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8276); //+ 0xFFFFDFAC
	A2 = R0;
	A0 = EMU_ReadU32(V0 + 24); //+ 0x18
	V0 = EMU_ReadU32(V0 + 8); //+ 0x8
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004C93C; //ZZ_4C8DC_60
	A3 = R0;
	ZZ_CLOCKCYCLES_JR(9);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004C934)
	ZZ_JUMPREGISTER_END();
ZZ_4C8DC_60:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80016B50,ZZ_1658C_5C4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004C8DC,0x8004C918,ZZ_4C8DC);
ZZ_MARK_TARGET(0x8004C918,0x8004C93C,ZZ_4C8DC_3C);
ZZ_MARK_TARGET(0x8004C93C,0x8004C950,ZZ_4C8DC_60);
