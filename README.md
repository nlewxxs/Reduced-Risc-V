# Reduced-Risc-V
IAC Lab4 for Nik, Ana, Ahmed, Benedict
---

## Challenges faced
- Finding the ALUctrl instruction bits

## Design decisions
-3 bits for immsrc as there are 5 possible immediate formats:
immediate, upper immediate, store, branch and jump all need to be considered separately

- considered scrapping imm_length and upper_imm_length vars in sign_extend.sv since changing bit length most likely
results in total redesign, but left it in to make more readable?

- With the ALU we only needed to add the SUM instruction, however we chose to add all the instructions as shown in the instruction slide apart from the SLT instruction,
to make life easier later one as we already have.


## Reflections
- we have only partially implemented the full RISC-V ALU and jump functionality, meaning that more work needs to be done later to implement it properly. It would save time later if it is fully implemented early on.

