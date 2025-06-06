.data
	# your necessary data
.text
	
.globl main
main:
	#slli t6,t6,a6
	#slli t6,t6,a6(memory save)
	# 20'hffffe: chars[Address[11:0]] <= WriteData[7:0];  // Character write
	# 20'hffffd: color[Address[11:0]] <= WriteData[7:0];  // Color write
	#-16(gp): fa
	#-12(gp): fb
	#-8(gp): a
	#-4(gp): b
	# t6: base, case input
	# 4(t6): data input
	# 8(t6): confirm input
	# 12(t6): led1 output
	# 16(t6): led2 output
	# 20(t6): seg output
	# 24(t6): vga output
init:	
	addi gp, x0 , 1
	slli gp,gp,16
	addi gp,gp,1
	slli gp,gp,12
	sw gp, 20(t6)
	
	add a0,x0,x0
	addi a1, x0 ,1
	addi a2, x0, 2
	addi a3, x0, 3
	addi a4, x0, 4
	addi a5, x0, 5
	addi a6, x0, 6
	addi a7, x0, 7
	#lw t3, aAdr
	#lw t4, bAdr
hanging0: 
	lw t5, 8(t6)
	beq t5,x0, hanging0
	
input:	
	addi a0, x0, 0
	sw x0, 16(t6)
	lw t0, 0(t6) #read case
	sw t0, 12(t6) ##display case led

	beq t0 , a0, Case8
	beq t0 , a1, Case9
	beq t0 , a2, Case10
	beq t0 , a3, Case11
	beq t0 , a4, Case12
	beq t0 , a5, Case13
	beq t0 , a6, Case14
	beq t0 , a7, Case15
	beq x0, x0, hanging0



Case8: #reverse
	jal hanging
	lw  t1,4(t6)

	add a0,x0,x0
	addi t2, x0, 8
	addi t3, x0, 0
	
	loop8:
	slli a0,a0,1
	andi t4,t1,1
	add a0,a0,t4
	srli t1,t1,1
	
	addi t3, t3, 1
	bne t3,t2, loop8
	
	#sw a0, -4(t6)
	sw a0, 16(t6)
	sw a0, 24(t6)
	#test
	sw a0, 20(t6)
	beq x0, x0, hanging0
	
Case9: #pali
	jal hanging
	lw  t1,4(t6)

	addi t2, x0, 4
	addi t3, x0, 0
	add a0,x0,x0
	loop9:
	slli a0,a0,1
	andi t4, t1,1
	add a0,a0,t4

	srli t1, t1, 1
	addi t3, t3, 1
	bne t3,t2, loop9

	xor a0,a0,t1
	slt a0,x0,a0
	xori a0,a0,1
	sw a0, 16(t6)
	beq x0, x0, hanging0
	
Case10:  
	main10:
	jal hanging
	lw t1,4(t6)
	sw t1, 24(t6)
	slli t1,t1,4
	add t3,x0, a2
	slli t3,t3,2
	add t3,gp,t3
	sw t1,(t3)
	#fraction
	andi t2, t1,0x0f0#[7:0]
	#exp
	andi t3, t1, 0x700
	srli t3, t3, 8
	addi t3, t3, -3
	#symbol
	srli t4, t1, 11
	#real
	addi t5, x0,1
	slli t5,t5,8
	add t5,t5,t2#[1,7:0]
	#integer
	addi t3,t3,5
	sll t5,t5,t3
	srli t5,t5,5
	srli t5,t5,8
	add a0,x0,t5
	add a0,a0,t4
	
	xori t4,t4,1
	addi t4,t4,-1
	andi t4, t4, 0x0f
	
	#p/n display
	add t1,x0,a0
	addi t2,x0,-1
	addi a5,a5, 5 #10
	sll t4,t4,a5
	sll t4,t4,a5
	srli t4,t4,2
	sll t4,t4,a5
		hex2dec:
		sub t1, t1,a5
		addi t2,t2,1
		bge t1,x0,hex2dec
	
	addi t1,t1,10
	slli t2,t2,4
	add a0,t1,t2
	or a0,a0, t4
	sw a0, 20(t6)
	
	addi a5,a5,-5
	addi a2,a2,-1
	bne a2,x0,main10
	addi a2,x0,2
	beq x0, x0, hanging0
	
	
Case11:
#a
	lw t0,8(gp)
	sw t0, 24(t6)
	sw t0, 20(t6)

	#fraction
	andi t1, t0,0x0f0#[7:0]
	#exp
	andi t2, t0, 0x700
	srli t2, t2, 8
	addi t2, t2, -3
	#symbol
	srli t0, t0, 11
	#real
	slli a0,a1,8
	add t1,a0,t1#[1,7:0]
	slli t1,t1,4
	
	lw t3, 4(gp)
	sw t3, 20(t6)
	jal hanging
	#fraction
	andi t4, t3,0x0f0#[7:0]
	#exp
	andi t5, t3, 0x700
	srli t5, t5, 8
	addi t5, t5, -3
	#symbol
	srli t3, t3, 11
	#real
	slli a0,a1,8
	add t4,a0,t4#[1,7:0]
	slli t4,t4,4 #[11:8] [8'h0]
	
	addi t2, t2, 4#!
	sll t1,t1,t2
	addi t5,t5,4#!
	srl t1,t1,t5
	
	#pos/neg deal
	xori t0,t0,1
	xori t3,t3,1
	addi t0, t0,-1
	addi t3,t3,-1
	
	xor t1,t1,t0
	xor t4,t4,t3

	sub t1,t1,t0
	sub t4,t4,t3
	
	
	
	add a0,x0, t1
	
	add a0, a0, t4
	
	#new symbol
	slt t0,a0,x0
	xori t0,t0, 1
	addi t0, t0, -1
	
	xor a0,a0,t0
	sub a0,a0,t0
	sll a0,a0,t5
	srli a0,a0,4
	addi t1,x0,12
	srl a0,a0,t1
	add t1,x0,a0
	addi t2,x0,-1
	hex2dec11:
		addi t1, t1,-10
		addi t2,t2,1
		bge t1,x0,hex2dec11
	
	andi t0, t0, 0x0f
	slli a0,t2,4
	addi t4,x0,28
	sll t0,t0,t4
	addi t1,t1,10
	add a0,a0,t1
	
	
	
	or a0,a0, t0
	sw a0, 20(t6)
	sw a0, 24(t6)
	
	beq x0, x0, hanging0
	
#10 11 floatiing point
Case12: 
	lw t1,4(t6)#4 bits
	andi t1,t1,0x0f
	slli t1,t1,4
	addi t0, x0, 19
	slli t0, t0, 3
	addi t2,x0,4
	add t3,x0,x0
	add t4,x0,t1
	CRC_loop: 
	addi t3,t3,1
	
	andi t5,t4,0x080
	beq t5, x0, CRC_judge
	xor t4,t4,t0
	
	CRC_judge:
	slli t4,t4,1
	bne t2,t3, CRC_loop
	
	srli a0,t4,4
	add a0,a0,t1
	
	sw a0, 16(t6)
	sw a0, 24(t6)
	beq x0, x0, hanging0
Case13: 
	lw t1,4(t6)# byte
	andi a0,t1, 0x0F
	andi t1,t1, 0x0F0
	addi t0, x0, 19
	slli t0, t0, 3
	addi t2,x0,4
	add t3,x0,x0
	add t4,x0,t1
	CRC_cmp_loop: 
	addi t3,t3,1
	
	andi t5,t4,0x080
	beq t5, x0, CRC_cmp_judge
	xor t4,t4,t0
	
	CRC_cmp_judge:
	slli t4,t4,1
	bne t2,t3, CRC_cmp_loop
	
	
	srli t5,t4,4
	xor a0,t5,a0
	sltu a0, x0, a0
	xori a0,a0,1
	sw a0, 16(t6)
	sw a0, 24(t6)
	beq x0, x0, hanging0
Case14:  
	#goodbxxf
	jal hanging
	lw t1, 4(t6)
	slli t1,t1,4
	add a0,x0,x0
	xori t1,t1, -1
	lui a0, 0x600DC
	add a0, a0, t1
	#segment display
	sw a0, 20(t6)
	sw a0, 24(t6)
	beq x0, x0, hanging0
	
Case15:  
	addi a0,x0,1
	sw a0,20(t6)
	jal hanging
	slli a0,a0,1
	sw a0,20(t6)
	jal hanging
	slli a0,a0,1
	sw a0,20(t6)
	jal hanging
	slli a0,a0,1
	sw a0,20(t6)
	jal hanging
	slli a0,a0,1
	sw a0,20(t6)
	jal hanging
	slli a0, a0,1
	sw a0,20(t6)
	jal hanging
	slli a0,a0,1
	sw a0,20(t6)
	jal hanging
	slli a0,a0,1
	sw a0,20(t6)
	beq x0,x0,hanging0
light: 
	addi t1, x0, 0xFF
	sw t1, 16(t6)
	beq x0,x0,hanging0
	
hanging:
	lw t5, 28(t6)
	beq t5,x0, hanging
	jr ra
