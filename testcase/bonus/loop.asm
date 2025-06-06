.text
    li   t0, 10000000
    li   t1, 0               

loop:
    add  t1, t1, t0         
    addi t0, t0, -1         
    bnez t0, loop          

    li   t2, 0xFFFFFF14
    sw   t1, 0(t2)#0x2a06b550          
