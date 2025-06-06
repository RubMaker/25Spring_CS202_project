.data
	# your necessary data
.text
	
.globl main
main:

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
	#28(t6)
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
	
hanging0: 
	lw t5, 8(t6)
	beq t5,x0, hanging0
	
input:	
	sw x0,16(t6)
	addi a0, x0, 0
	lw t0, 0(t6) #read case
	sw t0, 12(t6) ##display case led
	
	beq t0 , a0, Case0
	beq t0 , a1, Case1
	beq t0 , a2, Case2
	beq t0 , a3, Case3
	beq t0 , a4, Case4
	beq t0 , a5, Case5
	beq t0 , a6, Case6
	beq t0 , a7, Case7
	beq x0, x0, hanging0
	
Case0:  
	jal hanging
	lw t1,4(t6)
	#sw t1,-8(t6)
	sw t1, 16(t6) #led data display
	jal hanging
	lw t1,4(t6)
	#sw t1,-4(t6)
	sw t1, 16(t6)
	beq x0, x0, hanging0

Case1:  
	jal hanging
	lb a0,4(t6)
	#segment display
	#sw a0, 20(t6)
	
	sw a0, 8(gp)
	#add t3,x0,a0
	
	sw a0,20(t6)
	beq x0, x0, hanging0

Case2:  
	jal hanging
	lbu a0,4(t6)
	#segment display
	sw a0, 20(t6)
	sw a0, 4(gp)
	#add t4,x0,a0
	beq x0, x0, hanging0

Case3:  
	#lw t1, 8 (gp)
	#sw t1,20 (t6)
	#lw t2, 4(gp)
	#sw t2, 16(t6)
	#sw t3,8(gp)
	lw t1,8(gp)

	#sw t4,4(gp)
	lw t2,4(gp)
	#sw t2,24(t6)

	#segment display
	beq t1,t2, light
	beq x0, x0, hanging0

Case4:  
	#lw t1, 8 (gp)
	#sw t1,20 (t6)
	#lw t2, 4(gp)
	#sw t2, 16(t6)
	#sw t3,8(gp)
	lw t1,8(gp)
	#sw t3,4(gp)
	lw t2,4(gp)
	#segment display
	blt t1,t2, light
	beq x0, x0, hanging0
	
Case5:  
	#lw t1, 8 (gp)
	#sw t1,20 (t6)
	#lw t2, 4(gp)
	#sw t2, 16(t6)
	#sw t3,8(gp)
	lw t1,8(gp)
	#sw t4,4(gp)
	lw t2,4(gp)
	#segment display
	bltu t1,t2, light
	beq x0, x0, hanging0
	
Case6:  
	#lw t1, 8 (gp)
	#sw t1,20 (t6)
	#lw t2, 4(gp)
	#sw t2, 16(t6)
	#sw t3,8(gp)
	lw t1,8(gp)
	#sw t4,4(gp)
	lw t2,4(gp)
	slt t1, t1, t2
	#add t1,t1,t2
	sw t1, 16(t6)
	
	beq x0, x0, hanging0
	
Case7:  
	#lw t1, 8 (gp)
	#sw t1,20 (t6)
	#lw t2, 4(gp)
	#sw t2, 16(t6)
	#sw t3,8(gp)
	lw t1,8(gp)
	#sw t4,8(gp)
	lw t2,4(gp)
	sltu t1,t1,t2
	#add t1,t1,t2
	sw t1,16(t6)
	beq x0, x0, hanging0
	

light: 
	addi t1, x0, 0xFF
	sw t1, 16(t6)
	beq x0,x0,hanging0
	
hanging:
	lw t5, 28(t6)
	beq t5,x0, hanging
	jr ra
