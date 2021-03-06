#ifdef ZZ_INCLUDE_CODE
ZZ_58F54:
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 32144); //+ 0xFFFF8270
	A0 = EMU_ReadU8(V0 + 24); //+ 0x18
	V1 = 0x80070000;
	V1 = EMU_ReadU8(V1 - 26624); //+ 0xFFFF9800
	V0 = A0 << 14;
	V0 = V0 - A0;
	EMU_SMultiply(V1,V0);
	V1 = LO;
	V0 = 0x82060000;
	V0 |= 0x1029;
	EMU_SMultiply(V1,V0);
	A0 = 0x80070000;
	A0 = EMU_ReadU8(A0 - 26618); //+ 0xFFFF9806
	V0 = HI;
	V0 += V1;
	V0 = (int32_t)V0 >> 13;
	V1 = (int32_t)V1 >> 31;
	A3 = V0 - V1;
	EMU_SMultiply(A3,A0);
	V1 = LO;
	V0 = 0x80070000;
	V0 = EMU_ReadU8(V0 - 26615); //+ 0xFFFF9809
	EMU_SMultiply(V1,V0);
	V0 = LO;
	A0 = 0x40C0000;
	A0 |= 0x2051;
	EMU_UMultiply(V0,A0);
	SP -= 16;
	V1 = 0x80070000;
	V1 = EMU_ReadS16(V1 - 26602); //+ 0xFFFF9816
	T0 = A1;
	T1 = V1 << 3;
	V1 = 0x80070000;
	V1 = EMU_ReadU16(V1 - 26606); //+ 0xFFFF9812
	A0 = HI;
	V0 = V0 - A0;
	V0 >>= 1;
	A0 += V0;
	A2 = A0 >> 13;
	A0 = V1 & 0xFF;
	A0 <<= 2;
	V1 <<= 16;
	A1 = (int32_t)V1 >> 16;
	V1 >>= 24;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	AT = 0x80070000;
	AT += A0;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	V1 += V0;
	V0 = 33;
	if (A1 == V0)
	{
		A3 = A2;
		ZZ_CLOCKCYCLES(59,0x800590A0);
		goto ZZ_58F54_14C;
	}
	A3 = A2;
	V0 = EMU_ReadU16(V1 + 88); //+ 0x58
	EMU_SMultiply(A2,V0);
	V0 = LO;
	V1 = EMU_ReadU16(V1 + 90); //+ 0x5A
	EMU_SMultiply(A2,V1);
	V1 = LO;
	A0 = 0x2040000;
	A0 |= 0x811;
	EMU_UMultiply(V0,A0);
	A1 = HI;
	EMU_UMultiply(V1,A0);
	V0 = V0 - A1;
	V0 >>= 1;
	A1 += V0;
	A3 = A1 >> 6;
	A0 = HI;
	V1 = V1 - A0;
	V1 >>= 1;
	A0 += V1;
	A2 = A0 >> 6;
	ZZ_CLOCKCYCLES(83,0x800590A0);
ZZ_58F54_14C:
	V1 = 0x80070000;
	V1 = EMU_ReadU8(V1 - 26614); //+ 0xFFFF980A
	V0 = V1 < 64;
	if (!V0)
	{
		EMU_SMultiply(A2,V1);
		ZZ_CLOCKCYCLES(6,0x800590E4);
		goto ZZ_58F54_190;
	}
	EMU_SMultiply(A2,V1);
	V0 = LO;
	V1 = 0x4100000;
	V1 |= 0x4105;
	EMU_UMultiply(V0,V1);
	A2 = A3;
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	A1 = V1 >> 5;
	ZZ_CLOCKCYCLES(17,0x80059118);
	goto ZZ_58F54_1C4;
ZZ_58F54_190:
	V0 = 127;
	V0 = V0 - V1;
	EMU_SMultiply(A3,V0);
	V0 = LO;
	V1 = 0x4100000;
	V1 |= 0x4105;
	EMU_UMultiply(V0,V1);
	A1 = A2;
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	A2 = V1 >> 5;
	ZZ_CLOCKCYCLES(13,0x80059118);
ZZ_58F54_1C4:
	V1 = 0x80070000;
	V1 = EMU_ReadU8(V1 - 26617); //+ 0xFFFF9807
	V0 = V1 < 64;
	if (!V0)
	{
		EMU_SMultiply(A1,V1);
		ZZ_CLOCKCYCLES(6,0x80059158);
		goto ZZ_58F54_204;
	}
	EMU_SMultiply(A1,V1);
	V0 = LO;
	V1 = 0x4100000;
	V1 |= 0x4105;
	EMU_UMultiply(V0,V1);
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	A1 = V1 >> 5;
	ZZ_CLOCKCYCLES(16,0x80059188);
	goto ZZ_58F54_234;
ZZ_58F54_204:
	V0 = 127;
	V0 = V0 - V1;
	EMU_SMultiply(A2,V0);
	V0 = LO;
	V1 = 0x4100000;
	V1 |= 0x4105;
	EMU_UMultiply(V0,V1);
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	A2 = V1 >> 5;
	ZZ_CLOCKCYCLES(12,0x80059188);
ZZ_58F54_234:
	V1 = 0x80070000;
	V1 = EMU_ReadU8(V1 - 26623); //+ 0xFFFF9801
	V0 = V1 < 64;
	if (!V0)
	{
		EMU_SMultiply(A1,V1);
		ZZ_CLOCKCYCLES(6,0x800591C8);
		goto ZZ_58F54_274;
	}
	EMU_SMultiply(A1,V1);
	V0 = LO;
	V1 = 0x4100000;
	V1 |= 0x4105;
	EMU_UMultiply(V0,V1);
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	A1 = V1 >> 5;
	ZZ_CLOCKCYCLES(16,0x800591F8);
	goto ZZ_58F54_2A4;
ZZ_58F54_274:
	V0 = 127;
	V0 = V0 - V1;
	EMU_SMultiply(A2,V0);
	V0 = LO;
	V1 = 0x4100000;
	V1 |= 0x4105;
	EMU_UMultiply(V0,V1);
	V1 = HI;
	V0 = V0 - V1;
	V0 >>= 1;
	V1 += V0;
	A2 = V1 >> 5;
	ZZ_CLOCKCYCLES(12,0x800591F8);
ZZ_58F54_2A4:
	V1 = 0x80060000;
	V1 = EMU_ReadS16(V1 + 14048); //+ 0x36E0
	V0 = 1;
	if (V1 != V0)
	{
		V0 = A2 < A1;
		ZZ_CLOCKCYCLES(5,0x80059220);
		goto ZZ_58F54_2CC;
	}
	V0 = A2 < A1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x8005921C);
		goto ZZ_58F54_2C8;
	}
	A2 = A1;
	ZZ_CLOCKCYCLES(9,0x80059220);
	goto ZZ_58F54_2CC;
ZZ_58F54_2C8:
	A1 = A2;
	ZZ_CLOCKCYCLES(1,0x80059220);
ZZ_58F54_2CC:
	V1 = 0x80070000;
	V1 = EMU_ReadS16(V1 - 26606); //+ 0xFFFF9812
	V0 = 33;
	if (V1 == V0)
	{
		V0 = 0x40000;
		ZZ_CLOCKCYCLES(5,0x8005928C);
		goto ZZ_58F54_338;
	}
	V0 = 0x40000;
	EMU_SMultiply(A2,A2);
	A0 = LO;
	EMU_SMultiply(A1,A1);
	A1 = LO;
	V0 |= 0x11;
	EMU_UMultiply(A0,V0);
	V1 = HI;
	EMU_UMultiply(A1,V0);
	A0 = A0 - V1;
	A0 >>= 1;
	V1 += A0;
	A2 = V1 >> 13;
	V0 = HI;
	A1 = A1 - V0;
	A1 >>= 1;
	V0 += A1;
	A1 = V0 >> 13;
	ZZ_CLOCKCYCLES(27,0x8005928C);
ZZ_58F54_338:
	V1 = T1 & 0xFFFF;
	V1 <<= 1;
	A0 = 0x80070000;
	A0 -= 26576;
	V0 = A0 - 4;
	V0 += V1;
	A0 -= 2;
	AT = 0x80070000;
	AT += V1;
	EMU_Write16(AT - 26576,T0); //+ 0xFFFF9830
	V1 += A0;
	EMU_Write16(V0,A2);
	EMU_Write16(V1,A1);
	V1 = 0x80070000;
	V1 = EMU_ReadS16(V1 - 26602); //+ 0xFFFF9816
	AT = 0x80060000;
	AT += V1;
	V0 = EMU_ReadU8(AT + 2508); //+ 0x9CC
	V0 |= 0x7;
	AT = 0x80060000;
	AT += V1;
	EMU_Write8(AT + 2508,V0); //+ 0x9CC
	V1 = 0x80070000;
	V1 = EMU_ReadS16(V1 - 26602); //+ 0xFFFF9816
	V0 = V1 << 3;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 1;
	AT = 0x80060000;
	AT += V0;
	EMU_Write16(AT + 1192,T0); //+ 0x4A8
	V1 = 0x80070000;
	V1 = EMU_ReadS16(V1 - 26602); //+ 0xFFFF9816
	V0 = (int32_t)V1 < 16;
	if (!V0)
	{
		V0 = 1;
		ZZ_CLOCKCYCLES(40,0x80059338);
		goto ZZ_58F54_3E4;
	}
	V0 = 1;
	A2 = V0 << V1;
	A1 = R0;
	ZZ_CLOCKCYCLES(43,0x80059344);
	goto ZZ_58F54_3F0;
ZZ_58F54_3E4:
	A2 = R0;
	V1 -= 16;
	A1 = V0 << V1;
	ZZ_CLOCKCYCLES(3,0x80059344);
ZZ_58F54_3F0:
	V0 = 0x80070000;
	V0 = EMU_ReadU8(V0 - 26608); //+ 0xFFFF9810
	V0 &= 0x4;
	if (!V0)
	{
		V1 = ~A2;
		ZZ_CLOCKCYCLES(6,0x8005938C);
		goto ZZ_58F54_438;
	}
	V1 = ~A2;
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 + 960); //+ 0x3C0
	V1 = 0x80060000;
	V1 = EMU_ReadU16(V1 + 964); //+ 0x3C4
	V0 |= A2;
	V1 |= A1;
	AT = 0x80060000;
	EMU_Write16(AT + 960,V0); //+ 0x3C0
	AT = 0x80060000;
	EMU_Write16(AT + 964,V1); //+ 0x3C4
	ZZ_CLOCKCYCLES(18,0x800593BC);
	goto ZZ_58F54_468;
ZZ_58F54_438:
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 + 960); //+ 0x3C0
	V0 &= V1;
	AT = 0x80060000;
	EMU_Write16(AT + 960,V0); //+ 0x3C0
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 + 964); //+ 0x3C4
	V1 = ~A1;
	V0 &= V1;
	AT = 0x80060000;
	EMU_Write16(AT + 964,V0); //+ 0x3C4
	ZZ_CLOCKCYCLES(12,0x800593BC);
ZZ_58F54_468:
	V1 = 0x80060000;
	V1 = EMU_ReadU16(V1 + 952); //+ 0x3B8
	A0 = 0x80060000;
	A0 = EMU_ReadU16(A0 + 956); //+ 0x3BC
	V0 = 0x80070000;
	V0 = EMU_ReadU16(V0 - 2944); //+ 0xFFFFF480
	V1 |= A2;
	AT = 0x80060000;
	EMU_Write16(AT + 952,V1); //+ 0x3B8
	V1 = ~V1;
	V0 &= V1;
	AT = 0x80070000;
	EMU_Write16(AT - 2944,V0); //+ 0xFFFFF480
	V0 = 0x80070000;
	V0 = EMU_ReadU16(V0 - 2940); //+ 0xFFFFF484
	A0 |= A1;
	AT = 0x80060000;
	EMU_Write16(AT + 956,A0); //+ 0x3BC
	A0 = ~A0;
	V0 &= A0;
	AT = 0x80070000;
	EMU_Write16(AT - 2940,V0); //+ 0xFFFFF484
	SP += 16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(25);
	ZZ_JUMPREGISTER(0x80057FC4,ZZ_57AAC_518);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80058F54,0x800590A0,ZZ_58F54);
ZZ_MARK_TARGET(0x800590A0,0x800590E4,ZZ_58F54_14C);
ZZ_MARK_TARGET(0x800590E4,0x80059118,ZZ_58F54_190);
ZZ_MARK_TARGET(0x80059118,0x80059158,ZZ_58F54_1C4);
ZZ_MARK_TARGET(0x80059158,0x80059188,ZZ_58F54_204);
ZZ_MARK_TARGET(0x80059188,0x800591C8,ZZ_58F54_234);
ZZ_MARK_TARGET(0x800591C8,0x800591F8,ZZ_58F54_274);
ZZ_MARK_TARGET(0x800591F8,0x8005921C,ZZ_58F54_2A4);
ZZ_MARK_TARGET(0x8005921C,0x80059220,ZZ_58F54_2C8);
ZZ_MARK_TARGET(0x80059220,0x8005928C,ZZ_58F54_2CC);
ZZ_MARK_TARGET(0x8005928C,0x80059338,ZZ_58F54_338);
ZZ_MARK_TARGET(0x80059338,0x80059344,ZZ_58F54_3E4);
ZZ_MARK_TARGET(0x80059344,0x8005938C,ZZ_58F54_3F0);
ZZ_MARK_TARGET(0x8005938C,0x800593BC,ZZ_58F54_438);
ZZ_MARK_TARGET(0x800593BC,0x80059420,ZZ_58F54_468);
