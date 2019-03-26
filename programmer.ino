const int address3 = 13; //upper bit
const int address2 = 12;
const int address1 = 11;
const int address0 = 10; //lower bit

const int instruction3 = 9; //upper bit
const int instruction2 = 8;
const int instruction1 = 7;
const int instruction0 = 6; //lower bit

const int operand3 = 5; //upper bit
const int operand2 = 4;
const int operand1 = 3;
const int operand0 = 2; //lower bit

const int writeBit = A0;
/*
  Programming:
  0000            NOP  {0, 0...}       - No operation
  0001 [Addr]     LDA  {1, [Addr]...}  - Load value at address [Addr] into A register
  0010 [Addr]     ADD  {2, [Addr]...}  - Add value at address [Addr] to A register and put result in A register
  0011 [Addr]     SUB  {3, [Addr]...}  - Subtract value at address [Addr] from A register and put result in A register
  0100 [Addr]     STA  {4, [Addr]...}  - Store value in A register in address [Addr]
  0101 num        LDI  {5, num...}     - Load num immediately into A register
  0110 [Addr]     JMP  {6, [Addr]...}  - Unconditional jump to [Addr]
  ...
  ...
  1110            OUT  {7, 0...}       - Output value in A register to display
  1111            HLT  {8, 0...}       - Halt execution
*/
const byte fibonacci[] = {5, 1, 4, 14, 5, 0, 7, 0, 2, 14, 4, 15, 1, 14, 4, 13, 1, 15, 4, 14, 1, 13, 6, 2};

void setup() {
  for (int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT);   //make pins outputs
  }
  pinMode(A0, OUTPUT);
  for (int i = 0; i <= sizeof(fibonacci); i++) {

  }

}

void loop() {

}

void write(int value) {
  bool upperNibble = 0;
}
