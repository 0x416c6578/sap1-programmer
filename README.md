# sap1-programmer
Arduino code for a programmer for Ben Eater's SAP-1 CPU. 
 * Programs can be added by changing the PROGRAM[] variable. For all programs of < 16 instructions, any unused memory locations should be padded with 0x0 up to address 0xF in order to guarantee that there are no bogus values in those locations. 
 * Likewise addresses used for storing data only should also be padded with 0x0 in order to again ensure the program starts from a 100% known state.
 * The each byte of the PROGRAM[] array represents an instruction or operand, with even numbered elements being instructions. Despite the fact that they are all represented as bytes, only the lower / upper nibbles are used for operand / instruction respectively.
