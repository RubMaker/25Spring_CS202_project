.text
    # Data hazard
    li t0, 30
    li t1, 20  
    addi t2, t1, 10       
    # Control hazard
    beq  t2, t0, branch

not_branch:
    add  t3, t1, t2        
    j    display   

branch:
    addi t3, t2, 5         

display:
    li   t4, 0xFFFFFF14
    sw   t3, 0(t4) #0x00000023
        

