#ifdef ZZ_INCLUDE_CODE
ZZ_4F260:
	A0 <<= 4;
	A1 <<= 4;
	A2 <<= 4;
	GTE_SetControlRegister(GTE_CREG_RFC,A0);
	GTE_SetControlRegister(GTE_CREG_GFC,A1);
	GTE_SetControlRegister(GTE_CREG_BFC,A2);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x80017B84,ZZ_17AB0_D4);
	ZZ_JUMPREGISTER(0x80017E5C,ZZ_17CE8_174);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F260,ZZ_4F260);
ZZ_MARK(0x8004F264);
ZZ_MARK(0x8004F268);
ZZ_MARK(0x8004F26C);
ZZ_MARK(0x8004F270);
ZZ_MARK(0x8004F274);
ZZ_MARK(0x8004F278);
ZZ_MARK(0x8004F27C);
