# Reduced-Risc-V
IAC Lab4 for Nik, Ana, Ahmed, Benedict
---

## Challenges faced

## Design decisions
3 bits for immsrc as there are 5 possible immediate formats:
immediate, upper immediate, store, branch and jump all need to be considered separately

considered scrapping imm_length and upper_imm_length vars in sign_extend.sv since changing bit length most likely
results in total redesign, but left it in to make more readable?
## Reflections


