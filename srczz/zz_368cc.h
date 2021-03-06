#ifdef ZZ_INCLUDE_CODE
ZZ_368CC:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x800368DC; //ZZ_368CC_10
	ZZ_CLOCKCYCLES(4,0x80036480);
	goto ZZ_36480;
ZZ_368CC_10:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80036908);
		goto ZZ_368CC_3C;
	}
	RA = 0x800368EC; //ZZ_368CC_20
	ZZ_CLOCKCYCLES(4,0x80036480);
	goto ZZ_36480;
ZZ_368CC_20:
	V1 = 0x4;
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(3,0x80036908);
		goto ZZ_368CC_3C;
	}
	RA = 0x80036900; //ZZ_368CC_34
	A0 = 0x2;
	ZZ_CLOCKCYCLES(5,0x800363C8);
	goto ZZ_363C8;
ZZ_368CC_34:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8003691C);
	goto ZZ_368CC_50;
ZZ_368CC_3C:
	RA = 0x80036910; //ZZ_368CC_44
	A0 = 0x3;
	ZZ_CLOCKCYCLES(2,0x80036410);
	goto ZZ_36410;
ZZ_368CC_44:
	RA = 0x80036918; //ZZ_368CC_4C
	A0 = 0x6;
	ZZ_CLOCKCYCLES(2,0x80035DC0);
	goto ZZ_35DC0;
ZZ_368CC_4C:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x8003691C);
ZZ_368CC_50:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80036A18,ZZ_369C4_54);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800368CC,0x800368DC,ZZ_368CC);
ZZ_MARK_TARGET(0x800368DC,0x800368EC,ZZ_368CC_10);
ZZ_MARK_TARGET(0x800368EC,0x80036900,ZZ_368CC_20);
ZZ_MARK_TARGET(0x80036900,0x80036908,ZZ_368CC_34);
ZZ_MARK_TARGET(0x80036908,0x80036910,ZZ_368CC_3C);
ZZ_MARK_TARGET(0x80036910,0x80036918,ZZ_368CC_44);
ZZ_MARK_TARGET(0x80036918,0x8003691C,ZZ_368CC_4C);
ZZ_MARK_TARGET(0x8003691C,0x8003692C,ZZ_368CC_50);
