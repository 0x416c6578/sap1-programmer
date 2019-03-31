/*
  const int address3 = 5; upper bit
  const int address2 = 4;
  const int address1 = 3;
  const int address0 = 2; lower bit

  const int instruction3 = 9; upper bit
  const int instruction2 = 8;
  const int instruction1 = 7;
  const int instruction0 = 6; lower bit

  const int operand3 = 13; upper bit
  const int operand2 = 12;
  const int operand1 = 11;
  const int operand0 = 10; lower bit



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
const int delayTime = 50;
void setup() {
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);   //make pins outputs
  }
  pinMode(A0, OUTPUT);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(delayTime);
  digitalWrite(A0, LOW);
  delay(delayTime);
  digitalWrite(A0, HIGH);
  delay(delayTime);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void loop() {

}
