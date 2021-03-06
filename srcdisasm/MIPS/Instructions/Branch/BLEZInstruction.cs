using System.IO;

namespace PSXDiscompile
{
    public sealed class BLEZInstruction : Instruction
    {
        private Register rs;
        private int offset;

        public BLEZInstruction(Register rs,int offset)
        {
            this.rs = rs;
            this.offset = offset;
        }

        public override string ToString()
        {
            return string.Format("BLEZ ${0},{1:X}",rs,offset * 4 + 4);
        }

        public override string ToString(Program p,int address)
        {
            return string.Format("BLEZ ${0},{1:X}",rs,address + offset * 4 + 4);
        }

        public override void Mark(Program p,int address)
        {
            base.Mark(p,address);
            p.MarkBranch(address + offset * 4 + 4);
        }

        public override void Discompile(Program p,int address,bool direct)
        {
            //p.WriteLine("ZZ_ONCEBRANCH(0x{0:X},{1});",address,p.Clocks);return;
            if (!direct)
                throw new PSXException();
            Word nextword = p[address + 4];
            Word branchword = p[address + offset * 4 + 4];
            p.WriteLine("if ((int32_t){0} <= 0)",rs);
            p.WriteLine("{{");
            p.Indent();
            nextword.Discompile(false);
            p.WriteClocks(1,branchword.Address);
            p.WriteLine("goto {0};",branchword.Label);
            p.Unindent();
            p.WriteLine("}}");
        }
    }
}
