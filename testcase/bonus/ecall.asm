.text
    
    addi a0, a0, 1
    li   t1, 0xFFFFFF14 
    sw   a0, 0(t1)

    li a7, 10  
    ecall    
    
    li t2, 100
    sw   t2, 0(t1)